#include <iostream>

using namespace std;

int main() {


    int n;
    long long factorial = 1; // Faktoriyalning kattaligi uchun long long tipini ishlatamiz

    std::cout << "n sonini kiriting = " << std::endl;
    cin >> n;

    // Nega uzun tipdan foydalanamiz? Factorial tezda juda katta sonlarga yetishi mumkin
    if (n < 0) {
        std::cout << "Faktoriyal faqat musbat sonlar uchun hisoblanadi!" << std::endl;
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i; // Har bir i sonini faktorialga ko'paytirib boramiz
        }

        std::cout << n << " ning faktoriyali = " << factorial << std::endl;
    }

    return 0;
    


}
