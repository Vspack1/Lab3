#include <iostream>
using namespace std;

bool isPrime(int num) {
    if(num <= 1) return false;
    if(num <= 3) return true;
    if(num % 2 == 0 || num % 3 == 0) return false;
    
    for(int i = 5; i * i <= num; i += 6) {
        if(num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    // Dùng con trỏ viết hàm tìm kiếm 1 số nguyên có tồn tại trong mảng 1 chiều lưu trữ số nguyên hay không?
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    
    int *arr = new int[n];
    
    cout << "Nhap " << n << " phan tu: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Tìm số nguyên tố đầu tiên trong mảng
    int *p = arr;
    int *found = NULL;
    
    for(int i = 0; i < n; i++) {
        if(isPrime(*(p + i))) {
            found = p + i;
            break;
        }
    }
    
    if(found != NULL) {
        cout << "Tim thay so nguyen to dau tien: " << *found << " tai vi tri " << (found - arr) << endl;
    } else {
        cout << "Khong tim thay so nguyen to trong mang!" << endl;
    }
    
    // Giải phóng bộ nhớ
    delete[] arr;
    
    return 0;
}