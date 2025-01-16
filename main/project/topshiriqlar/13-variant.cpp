#include <iostream>

using namespace std;

int main() {
    int a= 1;
    for (int i = 5; i >0; i--){
        a+=i*10;
        if (i==3) i--;
    }
    cout << a << endl;

}
