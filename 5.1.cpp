#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void modify(int *a, int *b){
    int a_old = *a;
    int b_old = *b;

    *a=a_old + b_old;
    *b=abs(a_old - b_old);
}

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    modify(&a, &b);
    printf("%d", a);
    cout<<endl;
    printf("%d", b);
    return 0;
}

