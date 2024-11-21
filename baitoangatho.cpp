#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    
    if (n % 2 != 0) {
        cout << -1 << endl;
        return 0;
    }

    
    int x = 2 * m - n / 2;
    int y = n / 2 - m;

    
    if (x < 0 || y < 0) {
        cout << -1 << endl;
    } else {
        cout << x << " " << y << endl;
    }

    return 0;
}
