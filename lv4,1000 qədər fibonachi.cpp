#include<iostream>
using namespace std;

int main()
{
int a=0,b=1,c; 
cout <<a<< " " << b;
do{
c=a+b;
cout << " " << c;
a=b;
b=c;}
while(c<970);
    cout << endl;
    return 0;
}