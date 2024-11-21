#include <iostream>
using namespace std;
int dem=0;
void HN (int x, char A, char B, char C){
	if (x==1)
		cout<<"\n" <<++dem<<":"<<A<<"-->"<<C; 
		else {
			HN(x-1,A,B,C);
			HN(1,A,C,B);
			HN(x-1,B,C,A);
		
		}
	}
main(){
	HN(3,'A','C','B');
}