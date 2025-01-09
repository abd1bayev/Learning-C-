// #include <iostream>

// using namespace std;

// int main() {


//     int n;
//     long long factorial = 1; // Faktoriyalning kattaligi uchun long long tipini ishlatamiz

//     std::cout << "n sonini kiriting = " << std::endl;
//     cin >> n;

//     // Nega uzun tipdan foydalanamiz? Factorial tezda juda katta sonlarga yetishi mumkin
//     if (n < 0) {
//         std::cout << "Faktoriyal faqat musbat sonlar uchun hisoblanadi!" << std::endl;
//     } else {
//         for (int i = 1; i <= n; i++) {
//             factorial *= i; // Har bir i sonini faktorialga ko'paytirib boramiz
//         }

//         std::cout << n << " ning faktoriyali = " << factorial << std::endl;
//     }

//     return 0;
    


// }


#include <iostream>

using namespace std;

int main() {
    
    int f = 2;
    int s = 1; 

    for (int i = 2; i <= f; i++) {
        s *= i;
    }

    cout << "Faktorial " << f << " hisoblanadi: " << s << endl;

    return 0;
    
}

