#include<iostream>
using namespace std;
int a,b;
int main()
{
    cout <<"eded daxil edin" << endl;
    cin >> a;
    int b = a;
    string c ="";
    while (b>0){
    c = char((b%2)+'0')+c;
    b/=2;}
    cout << c << endl;

    return 0;
}