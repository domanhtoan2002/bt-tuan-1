#include<iostream>
#include<math.h>

using namespace std ;

int main ()
{
	int x , y ;
	cout << "nhap gia tri x " ;
	cin >> x ;
	cout << "nhap gia tri y " ;
	cin >> y ;
double a=sqrt((x*x)+(y*y));
	cout << "khoang cach tu (x,y) den (0,0) la  " << a ;
	return 0 ;
}
