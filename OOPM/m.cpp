// #include<iostream>
// using namespace std;
// class A{
// private:
// int a;
// friend void fun(A&);
// public:
// void getter(){
//     cout<<this->a;
// }
// };
// void fun(A& b){
// b.a=45;
// }
// int main()
// {
// A t;
// fun(t);
// t.getter();
// return 0;
// }

#include <iostream>
using namespace std;
class A
{
public:
    string s;
    A(const string &s)
    {
        this->s = s;
    }
    string operator+(A &other)
    {
        string v = this->s;
        string v1 = other.s;
        return v + v1;
    }
};
int main()
{
    string name1 = "yash";
    string name2 = "sen";
    A a(name1);
    A b(name2);
    A result = a + b;
    cout << "Concatenated String: " << result.s << endl;
    return 0;
}