#include <iostream>
using namespace std;

int doanTangDaiNhat(const int A[], int n) {
    if (n == 0) return 0; // Nếu mảng rỗng, trả về 0

    int dainhat = 1; // Độ dài lớn nhất của đoạn tăng liên tục
    int dodai = 1; // Độ dài hiện tại của đoạn tăng liên tục

    for (int i = 1; i < n; ++i) {
        if (A[i] > A[i - 1]) {
            dodai++; // Tăng độ dài đoạn tăng hiện tại
        } else {
            if (dodai > dainhat) {
                dainhat = dodai; // Cập nhật độ dài lớn nhất nếu cần
            }
            dodai = 1; // Bắt đầu đoạn mới
        }
    }

    if (dodai > dainhat) {
        dainhat = dodai; // Kiểm tra đoạn cuối cùng
    }

    return dainhat;
}

int main() {
    // Khai báo và khởi tạo mảng
    const int n = 12;
    int A[n] = {6,7,2,2,5,9,10,3,4,19,33,2};

    cout << " co " << doanTangDaiNhat(A, n) << " phan tu" << endl;

    return 0;
}
