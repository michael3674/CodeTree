#include <iostream>
using namespace std;

int main() {
    char arr1[3] = {};
    int arr2[3] = {};
    for (int i = 0; i< 3; i++){
        cin >> arr1[i] >> arr2[i];
    }
    int sum[4] = {};
    for (int j = 0; j < 3; j++){
        if (arr1[j] == 'Y' && arr2[j] >= 37){
            sum[0] += 1;
        }
        else if (arr1[j] == 'N' && arr2[j] >= 37){
            sum[1] += 1;
        }
        else if (arr1[j] == 'Y'){
            sum[2] += 1;
        }
        else{
            sum[3] += 1;
        }
    }
    cout << sum[0] << " " << sum[1] << " " << sum[2] << " " << sum[3];
    if (sum[0] >= 2){
        cout << " E";
    }
    
    return 0;
}