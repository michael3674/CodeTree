#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int i = 0, sum = 0;

    while (i < 100){
        cin >> arr[i];
        if (arr[i] == 0) break;
        sum += arr[i];
        i++;
    }

    cout << sum;

    return 0;
}