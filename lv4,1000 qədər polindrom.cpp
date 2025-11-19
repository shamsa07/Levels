#include<iostream>
using namespace std;
int main()
{
for(int I=1;I<1000;I++) {
int k=I;
int a=0;
while(k>0){
int b=k%10;
k/=10;
a=(a*10)+b;
}
if(I==a){
cout << I << endl;}
    }
    return 0;
}