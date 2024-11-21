#include <iostream>
using namespace std;

struct Node{
    int Data;
    Node *Next, *Prev;
};
typedef Node* List;

void pushQueue(int x, List &F, List &L){
    List p = new(Node);
    p->Data = x;
    p->Next = p->Prev = NULL;
    if (F == NULL){
        F = L = p;
    }
    else {
        L->Prev = p;
        p->Next = L;
        L = p;
    }
}
void delFirst( List &F , List &L){
	List p=F;
	if (F==L){
		F = L =NULL;
	}else {
		F=F->Next;
		F->Prev=NULL;
		delete(p);
	}
}
bool emptyQueue ( List F , List L ){
	if (  F==NULL || L==NULL ){
		return 1 ; 
	} else {
		return 0;
	}
	
}
void popQueue(List &F, List &L){
      if (emptyQueue(F,L)== 0){
     cout<<F->Data<<endl;
       delFirst(F,L);
    }
    else {
        cout << "\nEmpty Queue"<<endl;
        
    }
}


void topQueue(List F , List L){
    if (emptyQueue(F,L)== 0){
        cout<<F->Data<<endl;
    }
    else {
        cout << "\nEmpty Queue"<<endl;
        
    }
}

void printF(List F){
    List p = F;
    while (p){
        cout << "\nData : " << p->Data<<endl;
        p = p->Next;
    }
}

main(){
  	List F=NULL ,  L=NULL;
	while(1){
		cout<<"\n ------DEMO QUEUE------";
		cout<<"\n1. pushQueue ";
		cout<<"\n2. popQueue ";
		cout<<"\n3. TopQueue";
		cout<<"\n4. printQueue";
		cout<<"\nEnter :"; char c ;cin>>c;
		if (c=='1'){
			int x ; cout <<"\nNhap x :";cin>>x;
			pushQueue(x,F,L);
		} else if ( c=='2'){
			popQueue(F,L);
		} else if (c=='3'){
			topQueue(F,L);
		} else if (c=='4'){
			printF(F);
		} else {
			break;
		}
	}
}