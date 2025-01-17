#include <iostream>
using namespace std;

int main() {
    int x[50], n;
    bool t = false; // Tashqi shartni boshqarish uchun
    int number = 0; // Ikkining darajasi bo'lgan sonlarni sanash uchun

    cout << "Vektor elementlari sonini kiriting: ";
    cin >> n;

    cout << "Vektorning elementlarini kiriting:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        int num = x[i];

        // Fibonachchi sonini tekshirish
        int a = 0, b = 1;
        while (b < num) b += a, a = b - a; // Fibonachchi sonini iteratsiya bilan hisoblash
        if (b == num) t = true; // Agar Fibonachchi soni bo'lsa, t = true

        // Ikkining darajasi bo'lgan sonni tekshirish
        if (num > 0 && (num & (num - 1)) == 0) number++;

        if (t || number >= 2) break; // Shart bajarilsa, sikldan chiqish
    }

    cout << "t = " << (t ? "true" : "false") << endl;
    return 0;
}



/*
Savol: 

    int x[50];
    bool t;
    Berilgan x vektorning elementlari orasida quyidagi sonlar bor yoki
    yo‘qligiga qarab t o‘zgaruvchiga true yoki false qiymat berilsin:
    a) kamida bitta Fibonachchi soni;
    b) kamida ikkita ikkining darajasi ko‘rinishidagi son.

*/