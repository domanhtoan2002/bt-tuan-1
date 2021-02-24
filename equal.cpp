#include<iostream>

using namespace std ;

void nhap(int a,int b,int c){
   if (a == b && a == c) 
   cout << "true" ;
   else cout << "false" ;
}

int main ()
{
	int a ,b ,c ;
	cout << "nhap so a " ; 
	cin >> a ;
	cout << "nhap so b " ;
	cin >> b;
	cout << "nhap so c " ;
	cin >> c ;
	nhap(a,b,c);
	return 0 ;
}
