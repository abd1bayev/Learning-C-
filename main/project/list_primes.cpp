#include <iostream>
using namespace std;

// Tub sonni tekshiruvchi funksiya
bool isPrime(int number) {
    if (number < 2) return false; // 2 dan kichik sonlar tub emas
    for (int i = 2; i * i <= number; i++) { // Faqat ildizigacha tekshirish
        if (number % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "n ni kiriting (n > 2): ";
    cin >> n;

    if (n <= 2) {
        cout << "n 2 dan katta bo'lishi kerak!" << endl;
        return 1;
    }

    cout << "[2, " << n << "] oraligidagi tub sonlar: ";
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
