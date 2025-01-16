#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Ikki tomonni va ular orasidagi burchakni kiriting
    double a, b, g;
    cout << "1-tomonni kiriting (a): ";
    cin >> a;
    cout << "2-tomonni kiriting (b): ";
    cin >> b;
    cout << "Ular orasidagi burchakni kiriting (gradusda): ";
    cin >> g;

    // Burchakni gradusdan radianlarga o'tkazish
    double rad = g * M_PI / 180.0;

    // Kosinus teoremasi yordamida uchinchi tomonni hisoblash
    double c = sqrt(a * a + b * b - 2 * a * b * cos(rad));

    // Yuzani hisoblash (1/2 * a * b * sin(burchak))
    double area = 0.5 * a * b * sin(rad);

    // Natijalarni chiqarish
    cout << "Uchburchakning uchinchi tomoni (c): " << c << endl;
    cout << "Uchburchakning yuzasi: " << area << endl;

    return 0;
}

/* 

Savol : 
    Berilgan ikki tomoni va ular orasidagi burchak (gradusda) asosida
uchburchakning uchinchi tomoni va yuzasi topilsin.


 Izoh:

    Uchburchakning uchinchi tomon uzunligini va yuzasini hisoblash uchun yozilgan. 
    Bunda kosinus teoremasi va trigonometrik formulalarni qo‘lladim.
    
    
Foydalanish:
    
    Dasturga ikki tomon uzunliklarini va ular orasidagi burchakni kiriting.
    Natijada uchinchi tomon va uchburchak yuzasi ekranda chiqadi.
    
    1-tomonni kiriting (a): 5
    2-tomonni kiriting (b): 7
    
    Ular orasidagi burchakni kiriting (gradusda): 60
    
    Uchburchakning uchinchi tomoni (c): 6.244
    Uchburchakning yuzasi: 15.155
    
    

 */
