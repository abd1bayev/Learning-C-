#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "n va m ni kiriting (natural sonlar): ";
    cin >> n >> m;

    if (n <= 0 || m <= 0) {
        cout << "n va m natural sonlar bo'lishi kerak!" << endl;
        return 1;
    }

    long long t = 1;
    for (int i = 1; i <= n; i++) {
        long long sum = m * (2 * i) + (m * (m + 1)) / 2; // Yig'indini formulalar yordamida hisoblash
        t *= sum; // Ko'paytma hisoblash
    }

    cout << "t = " << t << endl;
    return 0;
}
