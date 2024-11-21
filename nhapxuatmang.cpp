#include <iostream>
using namespace std;
void nhap_mang (int a[], int n , char somang){
	cout<<"nhap mang "<<somang<<endl;
	for (int i=0 ;i < n ; i++)cin>>a[i];
}
void xuat_mang (int a[] , int n){
	for ( int i=0 ; i< n ; i++) cout<<a[i]<<" ";
}
main(){
	int a[100] , nA , b[100], nB;
	int nC =0 , c[100];
	cin>>nA;
	
	nhap_mang (a,nA, 'A');
	cout<<"nhap mang A :" <<endl;
	xuat_mang (a,nA);
	
	nhap_mang(b , nB,'B');
	cout<<"nhap mang B:" <<endl;
	xuat_mang(b,nB);
	for ( int i =0 ; i< a[]+b[];i++){
		cout<< C[i]<<endl;
	}
}