#include<iostream>
using namespace std;

int main()
{
int a,I=1,s=1;
    cout << "ədəd daxil edin" << endl;
    cin >> a;
    while (a>=I){
    s*=I;
    I++;
    }
    cout << s<< endl;
    return 0;
}