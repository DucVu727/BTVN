#include <iostream>
using namespace std;

int binarySearch(int arr[], int target, int arrSize){
    int minValue = 1;
    int maxValue = arrSize;

    while (minValue <= maxValue){
        int midValue = minValue + (maxValue - minValue) / 2;

        if (arr[midValue] == target){
            return midValue + 1;
        }else if (arr[midValue] < target){
            minValue = midValue + 1;
        }else{
            maxValue = midValue - 1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int ans = binarySearch(arr, target, n);
    cout << ans;
    return 0;
}
