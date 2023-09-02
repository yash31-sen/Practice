#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num;
    cin >> num;
    
    vector<int> projC(num);
    for (int i = 0; i < num; i++) {
        cin >> projC[i];
    }
    
    vector<long long> dp(num);
    
    dp[0] = projC[0];
    if (num > 1) {
        dp[1] = max(projC[0], projC[1]);
    }
    
    for (int i = 2; i < num; i++) {
        dp[i] = max(dp[i - 1], dp[i - 2] + projC[i]);
    }
    
    cout << dp[num - 1] << endl;
    
    return 0;
}
