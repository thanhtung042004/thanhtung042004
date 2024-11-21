#include <iostream>
using namespace std;

// Hàm kiểm tra năm nhuận
bool laNamNhuan(int nam) {
    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

int main() {
    int ngay, thang, nam;
    cin >> ngay >> thang >> nam;  // đây là phần input

    switch(thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: // những tháng có 31 ngày 
            if (ngay == 31) {
                ngay = 1;
                thang++;
            } else {
                ngay++;
            }
            if (thang == 13) {  // tức là chuyển từ tháng 12 sang tháng 1 năm sau thì năm + 1 
                thang = 1;
                nam++;
            }
            break;
        
        case 4: case 6: case 9: case 11: // những tháng có 30 ngày 
            if (ngay == 30) {
                ngay = 1;
                thang++;
            } else {
                ngay++;
            }
            break;
        
        case 2: // tháng 2  
            if (laNamNhuan(nam)) {
                if (ngay == 29) {
                    ngay = 1;
                    thang++;
                } else {
                    ngay++;
                }
            } else {
                if (ngay == 28) {
                    ngay = 1;
                    thang++;
                } else {
                    ngay++;
                }
            }
            break;

        default:     // nếu tháng không nằm từ tháng 1 đén tháng 12 thì sai  , chương trình kết thức
            cout << "thang khong hop le !" << endl;
            return 1;
    }

    // Xuất kết quả
    cout << ngay << " " << thang << " " << nam << endl;

    return 0;
}
