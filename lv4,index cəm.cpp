#include<iostream>
using namespace std;

int main()
{
int a;
int b[100];
cout << "necə ədəd daxil edilsin " << endl;
cin >> a;
for (int I=0;a>I;I++){
cin >> b[I];}
int s=0,d=0;
for (int I=0;a>I;I++){
if(I%2==0)
s+=b[I];
else
d+=b[I];}
cout << "cut indexlerin cəmi " << d<<endl;
cout << "tək indexlerin cəmi " << s<<endl;
    return 0;
} 