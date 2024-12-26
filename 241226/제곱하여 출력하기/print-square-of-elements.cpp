#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cin >> num;
    int arr[num+1];
    for (int i = 0; i < num; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < num; i++){
        cout << pow(arr[i],2) << " ";
    }
    return 0;
}