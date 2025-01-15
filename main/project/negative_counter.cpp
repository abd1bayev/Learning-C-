#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "n ni kiriting (n > 0): ";
    cin >> n;

    if (n <= 0) {
        cout << "n musbat bo'lishi kerak!" << endl;
        return 1;
    }

    double number;
    int negativeCount = 0;

    cout << n << " ta haqiqiy sonni kiriting:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> number;
        if (number < 0) {
            negativeCount++;
        }
    }

    cout << "Manfiy sonlar soni: " << negativeCount << endl;

    return 0;
}


/* Foydalanish:

    Dastur ishga tushirilganda n ni kiritasiz.
    Keyin n ta haqiqiy sonni ketma-ket kiriting.
    Natijada manfiy sonlarning soni ekranga chiqariladi.

*/
