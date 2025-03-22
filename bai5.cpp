#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so Fibonacci can tinh: ";
    cin >> n;
    
    if(n <= 0) {
        cout << "n phai la so nguyen duong!" << endl;
        return 1;
    }
    
    // Dùng con trỏ để tính số Fibonacci thứ n
    int *a = new int;
    int *b = new int;
    int *result = new int;
    
    *a = 0;
    *b = 1;
    
    if(n == 1) {
        *result = *a;
    } else if(n == 2) {
        *result = *b;
    } else {
        for(int i = 3; i <= n; i++) {
            *result = *a + *b;
            *a = *b;
            *b = *result;
        }
    }
    
    cout << "So Fibonacci thu " << n << " la: " << *result << endl;
    
    // Giải phóng bộ nhớ
    delete a;
    delete b;
    delete result;
    
    return 0;
}