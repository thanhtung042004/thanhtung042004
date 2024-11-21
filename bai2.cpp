// cho 2 số nguyên dương a và b hãy tìm ước chung lớn nhất của 2 số đó bằng đệ quy 
//ví dụ : 10 6 
// đáp số : 2 
#include <iostream>
using namespace std;
int UCLN ( int a , int b){
	if (b==0){
		return a ;
		
	}else {
		return UCLN(b,a%b);
	}
}
main ( ){
	int a,b;
	cout<<"nhap a:";
	cin>>a;
	cout<<"nhap b:";
	cin>>b;
	cout<<"ket qua :"<<UCLN(a,b)<<endl;
	
}