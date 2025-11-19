#include<iostream>
using namespace std;

int main()
{
int a,I=0;
int j[100];
    cout << "ədəd daxil edin" << endl;
    cin >> a;
    while (a!=0){
    cin >> a;
    j[I]=a;
    I++;
    }
        int s= j[0];

    for (int i=1;i<I;i++) {
 if (j[i] >s) {
   s= j[i];
        }
    }cout << "En boyuk element: " << s<< endl;
    return 0;
}