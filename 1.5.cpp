#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int findMax(int arr[4]){
    int max=0;
    for (int i=0; i<4; i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int arr[4];
    for (int i=0; i<4; i++){
        cin>>arr[i];
    }

    int ans=findMax(arr);
    cout<<ans;
    return 0;
}
