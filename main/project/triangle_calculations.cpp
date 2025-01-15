#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Ikki tomonni va ular orasidagi burchakni kiriting
    double a, b, angle;
    cout << "1-tomonni kiriting (a): ";
    cin >> a;
    cout << "2-tomonni kiriting (b): ";
    cin >> b;
    cout << "Ular orasidagi burchakni kiriting (gradusda): ";
    cin >> angle;

    // Burchakni gradusdan radianlarga o'tkazish
    double angleInRadians = angle * M_PI / 180.0;

    // Kosinus teoremasi yordamida uchinchi tomonni hisoblash
    double c = sqrt(a * a + b * b - 2 * a * b * cos(angleInRadians));

    // Yuzani hisoblash (1/2 * a * b * sin(burchak))
    double area = 0.5 * a * b * sin(angleInRadians);

    // Natijalarni chiqarish
    cout << "Uchburchakning uchinchi tomoni (c): " << c << endl;
    cout << "Uchburchakning yuzasi: " << area << endl;

    return 0;
}

/* Izoh:

Foydalanish:
Dasturga ikki tomon uzunliklarini va ular orasidagi burchakni kiriting.
Natijada uchinchi tomon va uchburchak yuzasi ekranda chiqadi.


 */
