#include <iostream>
using namespace std;
struct Node{
	int Data;
	Node *Next , *Prev;
};
typedef Node* List;
void pushStack ( int x, List &F , List &L){
	List p= new(Node);
	p->Data=x;
	p->Next=p->Prev=NULL;
	if ( F==NULL){
		F=L=p;
	}else {
		p->Prev=L;
		p->Next=p;
		L=p;
	}
	 
}
void delLast(List &F , List &L){
	List p = L;
	if ( F == L){
		F == L == NULL;
	}else {
		L=L->Prev;
		L->Next= NULL;
	}
	delete(p);
}
void printL ( List L){
	List p=L;
	while (p){
		cout<<"\nData : "<<p->Data;
		p=p->Prev;
	}
}
main (){
	List F=NULL ,  L=NULL;
	while(1){
		cout<<"\n ------DEMO STACK------";
		cout<<"\n1. Push Stack ";
		cout<<"\n2. Pop Stack";
		cout<<"\n3. Top Stack";
		cout<<"\n4. print Stack";
		cout<<"\nEnter :"; char c ;cin>>c;
		if (c=='1'){
			int x ; cout <<"\nNhap x :";cin>>x;
			pushStack(x,F,L);
		} else if ( c=='2'){
			popStack(F,L);
		} else if (c=='3'){
			topStack(F,L);
		} else if (c=='4'){
			printL(L);
		} else {
			break;
		}
	}
}