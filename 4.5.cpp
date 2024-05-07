#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int findNumber(vector<int> A, vector<int> B){
    int mystery = 0;

    for (int i : A){
        mystery ^= i;
    }

    for (int i : B){
        mystery ^= i;
    }

    return mystery;
}

int main() {
    int n;
    cin >> n;

    vector <int> A(n);
    vector <int> B(n+1);

    for (int i = 0; i < n; i++){
        cin >> A[i];
    }

    for (int i = 0; i < n + 1; i++){
        cin >> B[i];
    }

    int answer = findNumber(A, B);
    cout << answer;
    return 0;
}

