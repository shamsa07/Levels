#include<iostream>
using namespace std;

int main()
{
int a;
    cout << "IL daxil edin" << endl;
    cin >> a;
    if(((a%4==0)&&(a%100!=0))||(a%400==0)){
    cout << "doğru ildir " << endl;}
    else 
    cout << "doğru il deyil" << endl;
    return 0;
}