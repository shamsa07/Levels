#include<iostream>
using namespace std;

int main()
{
    cout << "necə emeliyyat yerinə yetireceksiniz?" << endl;
    int a,k,c,b;
    cin >> a;
    cout << "ədədi daxil edin" << endl;
    cin >> k;
    for(int I=1;a>=I;I++){
    cout << "digər ədədi daxil edin" << endl;
    cin >> b;
     cout << "emeliyyat daxil edin (*,+,-,/)" << endl;}
     char x;
     cin >> x;
     switch (x){
     case '*':
     c=a*b;
     break;
     case '+':
     c=a+b;
     break;
     case '-':
     c=a-b;
     break ;
     case '/':
     c=a/b;
     break ;
     }
     a=c;
     
    b=0;
    return 0;
}