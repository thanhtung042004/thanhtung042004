#include <iostream>
using namespace std;
struct Node{
	int Data;
	Node *Next , *Prev;
};
typedef Node* List;
void insertFirst (int x , List &F , List &L ){
	List p = new(Node);
	p->Data=x;
	p->Next =p->Prev = NULL;
	if ( F==NULL){
		F = L =p;
	}else {
		p->Next =F ;
		F->Prev = p;
		F=p;
	}
}
void insertLast ( int x, List &F , List &L){
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
void delFirst( List &F , List &L){
	List p=F;
	if (F==L){
		F = L =NULL;
	}else {
		F=F->Next;
		F->Prev=NULL;
	}
	delete(p);
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
void printF ( List F){
	List p=F;
	while (p){
		cout<<"\nData : "<<p->Data;
		p=p->Next;
	}
}
void printL ( List L){
	List p=L;
	while (p){
		cout<<"\nData : "<<p->Data;
		p=p->Prev;
	}
}

main (){
	List F=NULL , L=NULL;
	while (1){
		int a ; cin >> a;
		if (a==0){
			cout<<"\n In tu dau :";
			printF(F) ;
			cout<<"\n In tu sau :";
			printL(L);
			break;
		}else if (a%2) {
			insertFirst ( a, F,L);
			
		} else {
			insertLast(a,F,L);
		}
	}
}
