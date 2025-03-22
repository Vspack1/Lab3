#include <iostream>
using namespace std;

int main() {
    // a. Khai báo 1 mảng số nguyên tối đa 30 phần tử
    int arr[30];
    int n = 10; // Số phần tử thực tế sẽ sử dụng (ví dụ)
    
    // b. Khởi tạo 1 mảng số nguyên với giá trị ngẫu nhiên (các giá trị nhỏ hơn 10)
    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 10;
    }
    
    // c. Khai báo biến con trỏ p trỏ đến mảng vừa khởi tạo
    int *p = arr;
    
    // d. Dùng con trỏ và kỹ pháp đồ dời để xuất các giá trị đang lưu trữ trong mảng
    cout << "Cac gia tri trong mang (su dung ky phap do doi): " << endl;
    for(int i = 0; i < n; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;
    
    // e. Dùng con trỏ và kỹ pháp chỉ số để xuất các giá trị đang lưu trữ trong mảng
    cout << "Cac gia tri trong mang (su dung ky phap chi so): " << endl;
    for(int i = 0; i < n; i++) {
        cout << p[i] << " ";
    }
    cout << endl;
    
    return 0;
}