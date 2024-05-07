#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string a, b;
    cin>>a>>b;

    int lena=a.length();
    int lenb=b.length();

    cout<<lena<<" "<<lenb<<endl;

    cout<<a<<b<<endl;

    char temp=a[0];
    a[0]=b[0];
    b[0]=temp;

    cout<<a<<" "<<b;

    return 0;
}
