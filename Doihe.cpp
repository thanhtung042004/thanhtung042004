#include <iostream>
using namespace std;
void NP(int x ){ //bien void nhi phan
	if (x>0){ // nếu x>0 
		NP(x/2);   // lấy x / 2
		cout<<x%2; // ỉn ra x chia hết cho 2 
	}
}
void DoiHe(int x , int he ){ // khai báo 2 biến x và biến hệ
	if (x>0){
		DoiHe(x/he, he ); //
		int  du=x%he;
		if (du<10)cout<<du;
		else cout <<(char)(du+55);
	} else cout<<"\n he "<< he <<" = ";
}
main (){
	int x=20 ; 
	DoiHe(x,2);
	DoiHe(x,4);
	DoiHe(x,8);
	DoiHe(x,16);
}