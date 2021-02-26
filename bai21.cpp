#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	
int a,b,c;

    cout <<"Moi nhap vao ba so ";
    cin >> a >> b >> c;  
    double p=(a+b+c)/2;
    double S=sqrt(double(p*(p-a)*(p-b)*(p-c)));
      if((a+b>c)&& (b+c>a)&&(a+c>b))
   cout <<"Dien tich tam giac la " << S;
   else cout << "Khong phai do dai ba canh cua 1 tam giac" << endl;
   
   return 0 ;
}

