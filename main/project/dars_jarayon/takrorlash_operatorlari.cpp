
#include <iostream>

using namespace std;

int main() {
    
// 1-misol
    
    // for takrorlash operatorlaridan foydalandik
    // std::cout << "for takrorlash operatorlaridan foydalandik" << std::endl;

    // for (int a = 1; a <= 20; a++)
    // {
    //     cout << a << endl;
    // }


// 2-misol    
    // while takrorlash operatorlaridan foydalandik
    // int a = 10;
    // std::cout << "while takrorlash operatorlaridan foydalandik" << std::endl;
    // while (a <= 20)
    // {
    //     cout << a << endl;
    //     a++;
    // }


// 3-misol
    // do .. while operatiri orqali shlash
    // int a = 1;
    
    // std::cout << "do.. while dan foydalandik" << std::endl;
    
    // do {
    //     cout << a << endl;
    //     a++;

    // } while (a <= 15);


// 4-misol
    // int n;
    // cout << "Biror butun son kiriting (0 to'xtatadi): ";
    // cin >> n;

    // while (n != 0) {
    //     cout << "Kiritilgan son: " << n << endl;
    //     cout << "Yana bir son kiriting (0 to'xtatadi): ";
    //     cin >> n;
    // }

    // cout << "Dastur to'xtatildi." << endl;


// 5-misol
    // string parol;
    // const string TOGRI_PAROL = "3107";

    // do {
    //     cout << "Parolni kiriting: ";
    //     cin >> parol;

    //     if (parol != TOGRI_PAROL) {
    //         cout << "Noto'g'ri parol, qaytadan urinib ko'ring." << endl;
    //     }
    // } while (parol != TOGRI_PAROL);

    // cout << "Parol to'g'ri! Dasturga xush kelibsiz!" << endl;   




// 6-misol
    // int n ;
    // int a[5] = { -56,5,9,23 };
    // std::cout << "Massiv elementlari; " << std::endl;
    // for (int i = 0; i < 5; i++)
    // cout << a[i] << '\t';

    // std::cout << "massivning birinchi elementi" << a[0];


// 7-misol
    int n, positive=0, negatiuve=0;
    cout << "Massivning o'lchamini kiriting ";
    cin >> n;
    int * arr = new int[n];
    cout << "Massiv elementlarini kiriting ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            positive++;
        else {
            negatiuve++;
        }
    }
    cout << "Massiv ichidagi musbat sonlar soni = " << positive << endl;
    cout << "Massiv ichidagi manfiy sonlar soni = " << negatiuve;
    
    return 0;

}










