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
    int manfiy_count = 0;

    cout << n << " ta haqiqiy sonni kiriting:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> number;
        if (number < 0) {
            manfiy_count++;
        }
    }

    cout << "Manfiy sonlar soni: " << manfiy_count << endl;

    return 0;
}


/* 
Savol: 
Butun n (n>0) va n ta haqiqiy sonlar berilgan. Ular orasidan manfiylari
nechtaligi aniqlansin.


Foydalanish:

    Dastur ishga tushirilganda n ni kiritasiz.
    Keyin n ta haqiqiy sonni ketma-ket kiriting.
    Natijada manfiy sonlarning soni ekranga chiqariladi.
    
    n ni kiriting (n > 0): 5
    5 ta haqiqiy sonni kiriting:
        -6 3 -1 2 4.3
    Manfiy sonlar soni: 2

*/
