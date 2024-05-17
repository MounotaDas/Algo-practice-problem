#include<bits/stdc++.h>
using namespace std;
void Trim_string(string s){
    if(s.size()<=10) cout<<s<<endl;
    else{
        for(int i=0;i<10;i++) cout<<s[i];
    }}
int main(){
    string s;cin>>s;
    Trim_string(s);
    }

