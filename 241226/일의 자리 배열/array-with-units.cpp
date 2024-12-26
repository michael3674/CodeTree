#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << a << " " << b << " ";
    for (int i = 0; i < 8; i++){
        int temp = a;
        a = b;
        if (b + temp < 10){
            b += temp;
        }
        else{
            b += temp-10;
        }
        cout << b << " ";
    }
    return 0;
}