#include<iostream>
using namespace std;

int main()
{
int a,I=2,s=0;
    cout << "ədəd daxil edin" << endl;
    cin >> a;
    for(I;I<(a/2);I++){
    if(a%I==0){
    s++;}
    }
    if(s==0) {
    cout << "sadedir"<< endl;}
    else 
    cout << "sadə deyil" << endl;
    return 0;
}