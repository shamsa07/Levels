#include<iostream>
using namespace std;

int main()
{
int a,I=1,s=0;
    cout << "ədəd daxil edin" << endl;
    cin >> a;
    while (a!=0){
    s+=a;
    cin >> a;
    }
    cout << s<< endl;
    return 0;
}