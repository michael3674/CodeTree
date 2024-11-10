#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int even = 0, odd = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if ((i+1) % 2 == 1) {
            odd += arr[i];
        }
        if ((i+1) % 2 == 0) {
            even += arr[i];
        }
    }
    cout << abs(odd - even);


    return 0;
}