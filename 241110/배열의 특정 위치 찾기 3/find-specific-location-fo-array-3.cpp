#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int i = 0, sum = 0;

    while (i < 100){
        cin >> arr[i];
        if (arr[i] == 0) {
            sum = arr[i-3] + arr[i-2] + arr[i-1];
            break;
        }
        i++;
    }
    cout << sum;

    return 0;
}