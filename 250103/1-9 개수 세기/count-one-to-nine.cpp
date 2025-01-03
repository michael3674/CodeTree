#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++){
        cin >> arr[i];
    }
    for (int i = 1; i < 10; i++){
        int sum = 0;
        for (int j = 0; j < num; j++){
            if (i == arr[j]){
                sum += 1;
            }
        }
        cout << sum << endl;
    }
    return 0;
}