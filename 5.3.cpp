#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arrayNum;
    cin >> arrayNum;

    vector<int> arr(arrayNum);
    for (int i = 0; i < arrayNum; i++){
        cin >> arr[i];
    }

    int positionNums;
    cin >> positionNums;

    arr.erase(arr.begin() + positionNums - 1);

    int eraseBegin, eraseEnd;
    cin >> eraseBegin >> eraseEnd;

    arr.erase(arr.begin() + eraseBegin - 1, arr.begin() + eraseEnd - 1);

    int size = arr.size();
    cout << size << endl;

    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}

