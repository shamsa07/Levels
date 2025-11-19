#include<iostream>
using namespace std;
#include<cmath>
int a,b,c;
int main()
{
    cout << "3 ədəd daxil edin:" << endl;
    cin >> a>>b>>c;
    if((a+b>c)&& (a+c>b)&&(a+c>b)){
    cout << "bu ədedlərdən üçbucaq qurmaq olar" << endl;}
    else {
    cout << "bu ədedlərdən üçbucaq qurmaq olmaz" << endl;}
    return 0;
}