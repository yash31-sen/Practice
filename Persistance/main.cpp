// #include <iostream>
// using namespace std;

// bool isLaptopProduct(char productID) {
//     // Check if the product ID belongs to laptop products
//     char laptopProducts[] = {'a', 'i', 'e', 'o', 'u', 'A', 'I', 'E', 'O', 'U'};
//     int numLaptopProducts = sizeof(laptopProducts) / sizeof(laptopProducts[0]);

//     for (int i = 0; i < numLaptopProducts; i++) {
//         if (productID == laptopProducts[i]) {
//             return true;
//         }
//     }
//     return false;
// }

// int main() {
//     int N;
//     cout << "Enter the number of products in the list: ";
//     cin >> N;

//     cout << "Enter the product IDs in the list: ";
//     char productID;
//     int desktopProductsCount = 0;
//     for (int i = 0; i < N; i++) {
//         cin >> productID;
//         if (!isLaptopProduct(productID)) {
//             desktopProductsCount++;
//         }
//     }

//     cout << "Sales data for desktop products: " << desktopProductsCount << endl;

//     return 0;
// }


#include <iostream>
#include <string>

int main() {
    std::string text;
    std::string terroristName;

    std::cout << "Enter the text: ";
    std::getline(std::cin, text);

    std::cout << "Enter the name of the terrorist: ";
    std::getline(std::cin, terroristName);

    int count = 0;
    size_t pos = text.find(terroristName);
    while (pos != std::string::npos) {
        count++;
        pos = text.find(terroristName, pos + terroristName.length());
    }

    std::cout << "Number of terrorists who are going to attack the army base: " << count << std::endl;

    return 0;
}
