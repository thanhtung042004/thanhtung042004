#include <iostream>
using namespace std;

int main() {
 
    double a1 = 1, b1 = 1, c1 = 2;          // Phương trình 1: x + y = 2
    double a2 = 58, b2 = 60, c2 = 5838.2;    // Phương trình 2: 58x + 60y = 5838.2

    // Tính toán định thức
    double D = a1 * b2 - a2 * b1;           
    double Dx = c1 * b2 - c2 * b1;           
    double Dy = a1 * c2 - a2 * c1;        

   
    if (D == 0) {
        if (Dx == 0 && Dy == 0)
            cout << "He phuong trinh co vo so nghiem." << endl;
        else
            cout << "He phuong trinh vo nghiem." << endl;
    } else {
      
        double x = Dx / D;
        double y = Dy / D;
        cout << "Nghiem cua he phuong trinh la:" << endl;
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }

    return 0;
}
