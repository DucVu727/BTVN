#include <iostream>

using namespace std;


/*
 * Complete the 'findDigits' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int findDigits(int n) {
    int count = 0;
    int nOld = n;
    while (n != 0){
        int digit = n % 10;
        if (digit != 0 && nOld % digit == 0){
            count++;
        }
        n = n / 10;
    }
    return count;
}

int main(){
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++){
    int n;
    cin >> n;

    int count = findDigits(n);

    cout << count << endl;
    }
    return 0;
}

