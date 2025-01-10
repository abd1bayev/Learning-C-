// while takrorlash operatorlari

#include <iostream>

using namespace std;

int main() {

    // for takrorlash operatorlaridan foydalandik
    std::cout << "for takrorlash operatorlaridan foydalandik" << std::endl;

    for (int a = 1; a <= 20; a++)
    {
        cout << a << endl;
    }



    // while takrorlash operatorlaridan foydalandik
    int a = 10;
    std::cout << "while takrorlash operatorlaridan foydalandik" << std::endl;
    while (a <= 20)
    {
        cout << a << endl;
        a++;
    }



    // do .. while operatiri orqali shlash
    int a = 1;
    
    std::cout << "do.. while dan foydalandik" << std::endl;
    
    do {
        cout << a << endl;
        a++;

    } while (a <= 15);

    return 0;

}





#include <iostream>

using namespace std;

int main() {



    // int n;
    // cout << "Biror butun son kiriting (0 to'xtatadi): ";
    // cin >> n;

    // while (n != 0) {
    //     cout << "Kiritilgan son: " << n << endl;
    //     cout << "Yana bir son kiriting (0 to'xtatadi): ";
    //     cin >> n;
    // }

    // cout << "Dastur to'xtatildi." << endl;


    string parol;
    const string TOGRI_PAROL = "3107";

    do {
        cout << "Parolni kiriting: ";
        cin >> parol;

        if (parol != TOGRI_PAROL) {
            cout << "Noto'g'ri parol, qaytadan urinib ko'ring." << endl;
        }
    } while (parol != TOGRI_PAROL);

    cout << "Parol to'g'ri! Dasturga xush kelibsiz!" << endl;



    return 0;
}




