#include <iostream>
#include <math.h>

using namespace std;

int main()
{ 
    int a,b;
    cout <<"Moi nhap vao 2 so nguyen ";
    cin >>a >>b;
    if ( (a % 7 == 0)&&(b % 7 == 0)) cout << "true";
       else cout <<"false";
}

