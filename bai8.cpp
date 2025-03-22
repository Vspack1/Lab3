#include <iostream>
using namespace std;

int main() {
    // Khai báo mảng 2 chiều là một ma trận vuông cấp h (h >0)
    int h;
    cout << "Nhap chieu cao cua tam giac Pascal: ";
    cin >> h;
    
    if(h <= 0) {
        cout << "Chieu cao phai lon hon 0!" << endl;
        return 1;
    }
    
    // Sử dụng con trỏ để lưu trữ tam giác Pascal
    int **pascal = new int*[h];
    for(int i = 0; i < h; i++) {
        pascal[i] = new int[i + 1];
        
        // Các phần tử đầu và cuối của mỗi hàng đều là 1
        pascal[i][0] = pascal[i][i] = 1;
        
        // Tính các phần tử còn lại theo công thức Pascal
        for(int j = 1; j < i; j++) {
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
        }
    }
    
    // Xuất tam giác Pascal ra màn hình
    cout << "Tam giac Pascal voi chieu cao " << h << ":" << endl;
    for(int i = 0; i < h; i++) {
        // In khoảng trắng để căn giữa
        for(int space = 0; space < h - i - 1; space++) {
            cout << "  ";
        }
        
        // In các số trong hàng
        for(int j = 0; j <= i; j++) {
            cout << pascal[i][j] << "   ";
        }
        cout << endl;
    }
    
    // Giải phóng bộ nhớ
    for(int i = 0; i < h; i++) {
        delete[] pascal[i];
    }
    delete[] pascal;
    
    return 0;
}