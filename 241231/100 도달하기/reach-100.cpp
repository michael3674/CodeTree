#include <iostream>
using namespace std;

int main() {
    int num, sum = 1, inst;
    cin >> num;
    cout << sum << " " << num << " ";
    do{
        inst = sum + num;
        sum = num;
        num = inst;
        cout << inst << " ";
    } while (inst <= 100);
    return 0;
}