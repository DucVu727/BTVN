#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a=3;
    long b=12345678912345;
    char c='a';
    float d=334.230;
    double e=14049.30493;

    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);

    cout<<a<<endl
        <<b<<endl
        <<fixed<<setprecision(3)
        <<c<<endl
        <<d<<endl
        <<fixed<<setprecision(9)
        <<e<<endl;
    return 0;
}

