#include <iostream>
using namespace std;

int main() {
    int num, i = 0, count = 0;
    cin >> num;
    while (true){
        i += 1;
        if (count < 2){
            if (num * i % 5 == 0){
                count += 1;
            }
        }
        else{
            break;
        }
        cout << num * i << " ";
    }
    return 0;
}