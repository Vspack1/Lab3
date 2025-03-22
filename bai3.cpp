#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Nhap hai so nguyen a, b: ";
    cin >> a >> b;
    
    // Sử dụng con trỏ để lưu trữ giá trị của 2 số nguyên
    int *p1 = &a;
    int *p2 = &b;
    
    // Thuật toán Euclid tìm UCLN
    int temp;
    while(*p2 != 0) {
        // Bước 1: Nếu b là 0 thì kết quả là a, ngược lại thì sang b2
        // Bước 2: tính d = số dư của phép chia a cho b
        temp = *p1 % *p2;
        // Bước 3: gán a = b, b = số dư ở b2. Quay trở lại b1
        *p1 = *p2;
        *p2 = temp;
    }
    
    cout << "UCLN: " << *p1 << endl;
    
    return 0;
}