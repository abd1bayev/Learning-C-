#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x[50];
    int n;
    bool t = false; // Dastlab t = false (t = true bo'lishi uchun shartlarni bajarish kerak)

    // Vektor elementlari sonini kiritish
    cout << "Vektor elementlari sonini kiriting: ";
    cin >> n;

    // Vektorni kiritish
    cout << "Vektorning elementlarini kiriting:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    // Fibonachchi sonini tekshirish
    for (int i = 0; i < n; i++) {
        int num = x[i];
        int a = 0, b = 1;

        // Fibonachchi sonini topish uchun sikl
        while (b < num) {
            int temp = b;
            b = a + b;
            a = temp;
        }

        // Agar x[i] Fibonachchi soniga teng bo'lsa, t ni true ga o'zgartiramiz
        if (b == num) {
            t = true; // Agar Fibonachchi soni bo'lsa, t = true
            break; // Birinchi Fibonachchi soni topilganida sikldan chiqiladi
        }
    }

    // Ikkining darajasi bo'lgan sonni tekshirish (agar t hali true bo'lmasa)
    if (!t) { // Agar hali t = false bo'lsa, tekshirishni davom ettiramiz
        int powerOfTwoCount = 0;

        // Ikkining darajasi bo'lgan sonlarni tekshirish
        for (int i = 0; i < n; i++) {
            int num = x[i];

            // Ikkining darajasi bo'lgani tekshiruv: (num > 0) && (num & (num - 1)) == 0
            if (num > 0 && (num & (num - 1)) == 0) {
                powerOfTwoCount++; // Ikkita ikkining darajasi bo'lgan son topildi
            }
        }

        // Agar kamida ikkita ikkining darajasi bo'lsa, t = true
        if (powerOfTwoCount >= 2) {
            t = true; // Agar kamida ikkita ikkining darajasi bo'lsa, t = true
        }
    }

    // Natijani chiqarish
    if (t) {
        cout << "t = true" << endl; // Agar shartlar bajarilgan bo'lsa, true chiqariladi
    } else {
        cout << "t = false" << endl; // Aks holda false chiqariladi
    }

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