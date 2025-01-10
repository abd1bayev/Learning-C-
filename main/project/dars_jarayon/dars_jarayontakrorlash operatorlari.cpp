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
