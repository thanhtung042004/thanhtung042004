#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};

typedef node *list;

void themDau(int x, list &F) {
    list p = new(node);
    p->data = x;
    p->next = F;
    F = p;
}

void themCuoi(int x, list &F) {
    list p = new(node);
    p->data = x;
    p->next = NULL;
    if (F == NULL) {
        F = p;
    } else {
        list q = F;
        while (q->next) {
            q = q->next;
        }
        q->next = p;
    }
}

void xoaCuoi(list &F) {
    if (F == NULL) return;
    if (F->next == NULL) {
        delete F;
        F = NULL;
        return;
    }
    list p = F;
    while (p->next->next) {
        p = p->next;
    }
    delete p->next;
    p->next = NULL;
}

int demgiatriK(int K, list F) {
    int dem = 0;
    list p = F;
    while (p) {
        if (p->data == K) dem++;
        p = p->next;
    }
    return dem;
}

int demPhanTu(list F) {
    int dem = 0;
    list p = F;
    while (p) {
        dem++;
        p = p->next;
    }
    return dem;
}

int MAX(list F) {
    if (F == NULL) return -1; // Nếu danh sách rỗng
    int max = F->data;
    list p = F;
    while (p) {
        if (p->data > max) max = p->data;
        p = p->next;
    }
    return max;
}

int MIN(list F) {
    if (F == NULL) return -1; // Nếu danh sách rỗng
    int min = F->data;
    list p = F;
    while (p) {
        if (p->data < min) min = p->data;
        p = p->next;
    }
    return min;
}

bool KTR(list F) {
    if (F == NULL || F->next == NULL) return true;
    list p = F;
    while (p->next) {
        if (p->data > p->next->data) return false;
        p = p->next;
    }
    return true;
}



int main() {
    list F = NULL;
    int chon, x, K;
    while (1) {
       	cout << "------Danh Sach Lien Ket Don-----\n"; 
    cout << "1. Them 1 phan tu vao dau danh sach\n";
    cout << "2. Them 1 phan tu vao cuoi danh sach\n";
    cout << "3. Xoa 1 phan tu o cuoi danh sach\n";
    cout << "4. Dem phan tu co gia tri bang K\n";
    cout << "5. Dem so phan tu trong danh sach\n";
    cout << "6. Tim gia tri lon nhat trong danh sach\n";
    cout << "7. Tim gia tri be nhat trong danh sach\n";
    cout << "8. Kiem tra danh sach co tang dan khong\n";
    cout << "9. Thoat\n";
    cin>> chon ;
    
    if(chon==1){
    	cout<<"nhap gia tri :";
    	cin>>x ;
    	themDau(x,F);
	} else if ( chon==2){
		cout<<"nhap gia tri:";
		cin>>x;
		themCuoi(x,F);
	} else if (chon ==3){
		xoaCuoi(F);
		cout<<" da xoa phan tu o cuoi ";
	} else if (chon==4){
		cout<<"nhap gia tri K: ";
		cin>>K;
		cout<<"co "<<demgiatriK(K,F)<<"phan tu co gia tri bang  "<<K<<endl;
	} else if ( chon==5){
		cout<<" so phan tu co trong danh sach :"<<demPhanTu(F)<<endl;
		
	} else if ( chon==6){
		cout<<"gia tri lon nhat trong DS :"<<MAX(F)<<endl;
	} else if (chon==7){
		cout<<"gia tri be nhat trong DS :"<<MIN(F)<<endl;
	} else if (chon==8){
		if (KTR(F))
		cout<<"danh sach duoc sap xep tang dan \n";
		else 
		cout<<"danh sach khong duoc sap xe tang dan";
	} else if (chon==9){
		break;
	} else {
		cout<<"lua chon khong dung !\n";
	}
	
        }
    }
