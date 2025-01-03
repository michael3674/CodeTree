#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int arr[10] = {};
    while (n1 > 1){
        n1 = n1 / n2;
        arr[n1 % n2]++;
    }
    int total = 0;
    for (int i = 0; i < n2; i++){
        total += pow(arr[i], 2);
    }
    cout << total;
    return 0;
}