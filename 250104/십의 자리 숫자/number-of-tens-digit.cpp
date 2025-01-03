#include <iostream>
using namespace std;

int main() {
    int arr[100] = {};
    int end, count = 0;
    for (int i = 0; i < 100; i++){
        cin >> arr[i];
        if (arr[i] == 0 and count == 0){
            end = i;
            count += 1;
        }
    }
    for (int i = 1; i < 10; i++){
        int sum = 0;
        for (int j = 0; j < end; j++){
            if(i == arr[j] / 10){
                sum += 1;
            }
        }
        cout << i << " - " << sum << endl;
    }
    return 0;
}