#include <iostream>
using namespace std;

int main(){
    char arr[] = {'a', 'b', 'c', 'd'};

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            for (int k = 0; k < 4; k++){
                cout << arr[i] << arr[j] << arr[k] << endl;
            }
        }
    }
    return 0;
}
