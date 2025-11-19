#include<iostream>
using namespace std;

int main()
{
int a,I=1,s=0;
    cout << "ədəd daxil edin" << endl;
    cin >> a;
    while (a>0){
    I=a%10;
    a/=10;
    s=s*10+I;
    }
    cout << s<< endl;
    return 0;
}