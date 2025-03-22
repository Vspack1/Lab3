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
    // Nhập vào 1 mảng 1 chiều lưu trữ số nguyên tối đa 30 phần tử
    int arr[30];
    int n;
    
    cout << "Nhap so phan tu cua mang (toi da 30): ";
    cin >> n;
    if(n > 30) n = 30;
    
    cout << "Nhap " << n << " phan tu: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Dùng con trỏ và kỹ pháp đồ dời để xuất ra các phần tử nào là số lẻ trong mảng
    int *p = arr;
    cout << "Cac so le trong mang: ";
    for(int i = 0; i < n; i++) {
        if(*(p + i) % 2 != 0) {
            cout << *(p + i) << " ";
        }
    }
    cout << endl;
    
    // Trả về địa chỉ của giá trị phần tử lớn nhất trong mảng (giả sử các giá trị trong mảng không trùng nhau)
    int max_index = 0;
    for(int i = 1; i < n; i++) {
        if(*(p + i) > *(p + max_index)) {
            max_index = i;
        }
    }
    
    cout << "Dia chi cua phan tu lon nhat: " << (p + max_index) << endl;
    cout << "Gia tri lon nhat: " << *(p + max_index) << endl;
    
    return 0;
}