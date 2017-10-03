beautiful_binary_string_Hackerrank(solution)

#include <bits/stdc++.h>

using namespace std;

int minSteps(int n, string s){


    int i,p=0;

    for(i=0;i<s.length();)
    {
        if(s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0')
        {
            p++;
            i=i+3;
        }
        else
        {
            i++;
        }

    }
    return p;
}

int main() {
    int n;
    cin >> n;
    string B;
    cin >> B;
    int result = minSteps(n, B);
    cout << result << endl;
    return 0;
}
