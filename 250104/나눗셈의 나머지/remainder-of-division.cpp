#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int arr[10];
    int a = 0;
    while (true){
        if (n1 <= 1){
            break;
        }
        n1 = n1 / n2;
        arr[a] = n1 % n2;
        a += 1;
    }
    int total = 0;
    for (int i = 0; i < n2; i++){
        int sum = 0;
        for (int j = 0; j < a; j++){
            if (i == arr[j]){
                sum += 1;
            }
        }
        total += pow(sum, 2);
    }
    cout << total;
    return 0;
}