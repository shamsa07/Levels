#include <iostream>
using namespace std;
int main() {
    int a,b,c= 0,k;
    cout << "Bir eded daxil et: ";
    cin >> a;
    b= a;
    while (a!= 0) {
    k=a%10;        
    c=c*10+k;  
    a/= 10;               
    }
    cout << "Ededin tersi: " <<c<< endl;
    if (b==c)
        cout << "Eded tersi ile berabedir" << endl;
    else
        cout << "Eded tersle ferqlidir." << endl;
    return 0;
}