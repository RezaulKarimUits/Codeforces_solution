#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

bool myfunction (string i,string j)
{
    int n=i.length();
    int m=j.length();


    return n<m;
}


int main(){
    int n;
    cin >> n;
    vector<string> unsorted(n);
    for(int i = 0; i < n; i++){
       cin >> unsorted[i];
    }

    sort(unsorted.begin(),unsorted.end(),myfunction);
    for(int i = 0; i < unsorted.size(); i++){
       cout << unsorted[i] <<endl;
    }
    return 0;
}
