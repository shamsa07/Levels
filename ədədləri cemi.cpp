#include<iostream>
using namespace std;
#include<cmath>
int a,s;
int main()
{ 

    cout << "eded daxil edin" << endl;
    cin>>a;
    while (a>0){
    int k=a%10;
    a=a/10;
    s+=k;}
    cout << "rəqəmləri cəmi:"<< s << endl;
    
    return 0;
}