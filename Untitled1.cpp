//cho số nguyên dương N ( 0<n<=10^9). hãy tính xem N có bao nhiêu chữ số bằng đệ quy 
// ví dụ : n=85973 
// ĐS : 5 
#include <iostream>
using namespace std;
int tong(int N) {
    // Nếu N nhỏ hơn 10, nó chỉ có 1 chữ số
    if (N < 10)
        return 1;
    // Nếu không, gọi đệ quy cho phần còn lại
    else
        return 1 + tong(N / 10);
}

int main() {
    int N;
    cout << "Nhap so nguyen duong N: ";
    cin >> N;

    if (N > 0) {
        int result = tong(N);
        cout << "So luong chu so cua N la: " << result << endl;
    } else {
        cout << "Vui long nhap so nguyen duong." << endl;
    }

    return 0;
}
