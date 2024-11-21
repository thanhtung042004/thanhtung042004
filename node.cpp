#include <iostream>
using namespace std;
struct person {
	int data;
	person *next;
};
typedef person *list;
void insertFirst (int x, list &F){
	list p=new(person);
	p->data=x ;
	p->next=F;
	F      = p;
}
void insertLast (int x, list &F){
	list p=new(person);
	p->data=x;
	p->next=NULL;
	if (F==NULL){
		F=p;
		
	}else {
		list q=F;
		while (q->next){
	q=q->next;		
		}
		q->next =p;
		
	}
}
void delFirst(list &F){
	list p=F;
	F=F->next;
	delete (p);
}
void printF(list F){
	list p=F;
	while (p){
		cout<<"\nDATA : "<<p->data;
		p=p->next;
	}
}
main(){
	int a ;list F = NULL;
	while (1){
		cin>>a;
		if (a==0){
			printF(F);
			break;
		} else if ( a%2){
			insertFirst(a,F);	
		} else  {
			insertLast(a,F);
		}
		
	}
}


