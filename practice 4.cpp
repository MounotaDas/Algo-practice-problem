
#include<bits/stdc++.h>
using namespace std;

double Celsius_to_Fahrenheight(double T){

  return (T*9.00/5)+32.00;

}

int main(){

double T;
cin>>T;
cout<<Celsius_to_Fahrenheight(T)<<endl;

return 0;

}
