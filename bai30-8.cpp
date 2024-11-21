// cho 6 số a0,a1,a2,a3,a4,a5,
// sau đó nhập 1 số x . hãy xem x trùng với a mấy ?
#include <iostream>
using namespace std;

int kiemtra(int x, int a) {
    if (x == a) {
        cout << "Trung A" << a << endl;
        return true;
    }
    return false;
}

int main() {
    int a0, a1, a2, a3, a4, a5, x;

    cout << "Nhap 6 so a0, a1, a2, a3, a4, a5: ";
    cin >> a0 >> a1 >> a2 >> a3 >> a4 >> a5;

    cout << "Nhap so  x: ";
    cin >> x;

    if (kiemtra(x, a0)) return 0;
    if (kiemtra(x, a1)) return 0;
    if (kiemtra(x, a2)) return 0;
    if (kiemtra(x, a3)) return 0;
    if (kiemtra(x, a4)) return 0;
    if (kiemtra(x, a5)) return 0;

    cout << "khong co so trung " << x << endl;

    return 0;
}
