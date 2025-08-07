#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s , t;
    cin>>s>>t;
    int n = s.size() , m = t.size();
    // 4(A)
    string concatenated_string = s+t;
    // 4(b)
    for(int i=0;i<n/2;i++){
        swap(s[i] , s[n-1-i]);
    }
    // 4(c)
    string result;
    string vow = "aeiou";

    for(int i=0;i<n;i++){
        bool found = false;
        for(int j=0;j<vow.size();j++){
            if(s[i]==vow[j]){
                found = true;
                break;
            }
        }
        if(!found){
            result+=s[i];
        }
    }

    // 4(d)
    const int n = 6;
    char arr[n][100] = {"tjedtdj", "whrshshss", "wywwwww", "aaaa", "bagaaa", "okay"};
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                char temp[20];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }

    // 4(e)
    int c; cin>>c;
    if (c >= 'a' && c <= 'z') {
        c = c - 32;
    }

}