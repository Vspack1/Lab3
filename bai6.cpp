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
    // Dùng con trỏ viết hàm đảo ngược 1 mảng 1 chiều lưu trữ số nguyên
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    
    int *arr = new int[n];
    
    cout << "Nhap " << n << " phan tu: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Đảo ngược mảng sử dụng con trỏ
    int *start = arr;
    int *end = arr + n - 1;
    
    while(start < end) {
        // Hoán đổi giá trị
        int temp = *start;
        *start = *end;
        *end = temp;
        
        // Di chuyển con trỏ
        start++;
        end--;
    }
    
    cout << "Mang sau khi dao nguoc: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Kiểm chứng mảng có phải là số nguyên tố
    cout << "Kiem tra tung phan tu co phai so nguyen to: " << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << ": " << (isPrime(arr[i]) ? "la so nguyen to" : "khong phai so nguyen to") << endl;
    }
    
    // Giải phóng bộ nhớ
    delete[] arr;
    
    return 0;
}