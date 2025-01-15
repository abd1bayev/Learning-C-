#include <iostream>
using namespace std;

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
        // Tub sonni tekshirish
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}



/* Foydalanish:

    Dastur ishga tushirilganda  n ni kiriting !
    Ekranga [2,n]  oraligidagi barcha tub sonlar chiqadi.
    
 */
