#include <iostream>
using namespace std;

int main() {
    int arr[100] = {};
    int end;
    for (int i = 0; i < 100; i++){
        cin >> arr[i];
        if (arr[i] == 0){
            end = i;
            break;
        }
    }
    for (int i = 100; i > 0; i -= 10){
        int sum = 0;
        for (int j = 0; j < end; j++){
            if (i+10 > arr[j] && arr[j] >= i){
                sum += 1;
            }
        }
        cout << i << " - " << sum << endl;
    }
    return 0;
}