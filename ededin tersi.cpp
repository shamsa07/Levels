#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int a,b=0;
    cout << "ədədi daxil edin " << endl;
    cin >> a;
    while(a>0){
    int k=a%10;
    a/=10;
    b=b*10+k;
    }
    cout << "ədədin tərsi "<< b << endl;
    return 0;
}