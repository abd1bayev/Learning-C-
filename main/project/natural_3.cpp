/*
Bu yerda:
    ∏ — ko'paytma operatori (product),
    
    ∑ — yig'indini ifodalaydi (sum).
*/

#include <iostream>
using namespace std;

int main() {
    int n, m;

    // Kirish: foydalanuvchidan n va m sonlarini kiritish
    cout << "n ni kiriting (natural son): ";
    cin >> n;
    cout << "m ni kiriting (natural son): ";
    cin >> m;

    // Kirish tekshiruvi:
    // n va m sonlari natural bo'lishi kerak (n, m > 0).
    // Agar bu shart bajarilmasa, dastur xato xabar chiqaradi.
    if (n <= 0 || m <= 0) {
        cout << "n va m natural sonlar bo'lishi kerak!" << endl;
        return 1;
    }

    // Hisoblash jarayoni:
    long long t = 1; // Ko'paytma uchun boshlang'ich qiymat
    for (int i = 1; i <= n; i++) {
        int sum = 0;

        // Ichki sikl j-ni 1 dan m-gacha yuritib, ∑(2⋅i + j) yig'indisini hisoblaydi
        for (int j = 1; j <= m; j++) {
            sum += (2 * i + j);
        }

        // Har bir yig'indini tashqi siklda ko'paytiradi
        t *= sum;
    }

    // Chiqish: t natijani ekranga chiqarish
    cout << "t = " << t << endl;

    return 0;
}
