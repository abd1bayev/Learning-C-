#include <iostream>

using namespace std;

int main() {
    int n, l, f=0;
    cout << "n sonini kiriting = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> l;
        if (l > 0)
            f = f+l;
            
    
    }
    cout << f << endl;

}
