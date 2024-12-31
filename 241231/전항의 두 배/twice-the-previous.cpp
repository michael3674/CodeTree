#include <iostream>
using namespace std;

int main() {
    int n1, n2, num;
    cin >> n1 >> n2;
    cout << n1 << " " << n2 << " ";
    for (int i = 0; i < 8; i++){
        num = n2 + 2 * n1;
        n1 = n2;
        n2 = num;
        cout << num << " ";
    }
    return 0;
}