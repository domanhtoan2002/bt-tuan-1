#include<iostream>

using namespace std ;

bool CheckYear(int n){
	if (n % 400 == 0) 
        return true; 
  
    if (n % 4 == 0 && n % 100 != 0) 
        return true;
 
    return false; 
}
int main (){
	int n; 
	cout << "Nhap so nam :" ;
	cin >> n ;
	if (CheckYear(n) == true)
	cout << "Nam nhuan" ;
	else cout<< "Khong phai nam nhuan" ;
	return 0 ;
}

	
