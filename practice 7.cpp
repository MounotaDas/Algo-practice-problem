#include<bits/stdc++.h>
using namespace std;
void AVG(int n ,int a[]){
 int sum=0,i;
 for(i=0;i<n;i++) sum=sum+a[i];
 cout<<sum/n<<endl;}
int main(){
 int n; cin>>n;int a[n];
 for(int i=0;i<n;i++) cin>>a[i];
 AVG(n,a);}

