#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "n va m ni kiriting (natural sonlar): ";
    cin >> n >> m;

    // Cheklovlarni tekshirish
    if (n <= 3 || m <= 2) {
        cout << "n va m sonlari mos kelmaydi! (n > 3 va m > 2 bo'lishi kerak)" << endl;
        return 1;
    }

    long long t = 1;

    for (int i = 3; i <= n - 1; i++) {
        long long sum = 0;

        // Ichki sikl: j = 2 dan m-3 gacha
        for (int j = 2; j <= m - 3; j++) {
            sum += (2 * i + j); // Yig'indini hisoblash
        }

        t *= sum; // Tashqi sikl yig'indisini ko'paytirish
    }

    cout << "t = " << t << endl;
    return 0;
}
