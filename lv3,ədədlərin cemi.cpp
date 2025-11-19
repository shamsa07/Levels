#include<iostream>
using namespace std;

int main()
{
int a,I=0,s=1;
    cout << "ədəd daxil edin" << endl;
    cin >> a;
    while (a>0){
    I=I+a%10;
    a/=10;
    }
    cout << I<< endl;
    return 0;
}