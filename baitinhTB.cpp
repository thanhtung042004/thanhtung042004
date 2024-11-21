#include <iostream>
#include <cmath> // Để sử dụng hàm round
using namespace std;

double tinhTrungBinhCongSoChan(const int arr[], int N) {
    int tong = 0; // Tổng của các số chẵn
    int dem = 0;  // Số lượng số chẵn

    // Duyệt qua tất cả các phần tử của mảng
    for (int i = 0; i < N; ++i) {
        if (arr[i] % 2 == 0) { // Kiểm tra nếu phần tử là số chẵn
            tong += arr[i]; // Cộng vào tổng
            ++dem; // Tăng số lượng số chẵn
        }
    }

    // Tính trung bình cộng
    if (dem > 0) {
        return static_cast<double>(tong) / dem; // Trung bình cộng của các số chẵn
    } else {
        return 0.0; // Nếu không có số chẵn, trả về 0
    }
}

int main() {
    int N;
    cin >> N; // Nhập số lượng phần tử của mảng

    int* arr = new int[N]; // Cấp phát bộ nhớ cho mảng

    // Nhập các phần tử của mảng
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    // Tính trung bình cộng của các số chẵn
    double trungBinhCong = tinhTrungBinhCongSoChan(arr, N);

    // Làm tròn kết quả đến 2 chữ số thập phân
    double trungBinhCongTron = round(trungBinhCong * 100.0) / 100.0;

    // In kết quả với 2 chữ số thập phân
    cout << (trungBinhCongTron < 0.01 ? "0.00" : to_string(trungBinhCongTron).substr(0, to_string(trungBinhCongTron).find('.') + 3)) << endl;

    delete[] arr; // Giải phóng bộ nhớ đã cấp phát
    return 0;
}
