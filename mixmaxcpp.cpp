#include<iostream>

using namespace std ;

void nhap(int a, int n[1000]){
	for(int i= 0 ;i < a; i++){
		cout<<"a["<<i<<"]: "; 
		cin >> n[i] ;
	}
}

int max(int a, int n[]){
	int max = n[0];
	for (int i = 0 ; i < a ;i++){
		if (max < n[i])
		max = n[i] ;
	}
	return max ;
}

int min(int a , int n[]){
	int min = n[0];
	for (int i = 0;i < a; i++){
		if(min > n[i])
		min = n[i];
	}
	return min ;
}
	 
float TrungBinh(int a[], int n)
{
	int i, tong=0, dem=0;
	for(i=0; i<n; i++)
		if(a[i]%2!=0)
		{
			tong = tong + a[i];
			dem = dem + 1;
		}
		return (float)tong/dem;
	return 1;
}

	 int main ()
{
	 int a,n[1000];
	 cin >> a ;
	 nhap(a,n);
	 cout << "Max : " << max(a,n) << endl ;
	 cout << "Min : " << min(a,n) << endl ;
	 cout << "Mean : " << TrungBinh(n,a) ;
	 return 0 ;	
	 }
