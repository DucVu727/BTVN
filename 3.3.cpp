#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int hour = stoi(s.substr(0, 2));

    if(hour == 12 && s[8] == 'A'){
        string zero = "00";
        s.erase(0, 2);
        s.erase(6, 2);
        return zero + s;
    }else if ((hour != 12 && s[8] == 'A') || (hour == 12 && s[8] == 'P')){
        s.erase(8, 2);
        return s;
    }else{
        hour = hour + 12;
        string h = to_string(hour);
        s.erase(0, 2);
        s.erase(6, 2);
        return h + s;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
