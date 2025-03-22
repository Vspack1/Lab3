#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Nhap so hang: ";
    cin >> r;
    cout << "Nhap so cot: ";
    cin >> c;
    
    // Khởi tạo ngẫu nhiên giá trị của 2 mảng số nguyên theo dạng ma trận
    int **matrix1 = new int*[r];
    int **matrix2 = new int*[r];
    int **sum = new int*[r];
    
    for(int i = 0; i < r; i++) {
        matrix1[i] = new int[c];
        matrix2[i] = new int[c];
        sum[i] = new int[c];
        
        for(int j = 0; j < c; j++) {
            matrix1[i][j] = rand() % 100;  // Giá trị ngẫu nhiên từ 0-99
            matrix2[i][j] = rand() % 100;
            
            // Tính tổng tương ứng
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    // Xuất ma trận thứ nhất
    cout << "Ma tran 1:" << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << matrix1[i][j] << "\t";
        }
        cout << endl;
    }
    
    // Xuất ma trận thứ hai
    cout << "Ma tran 2:" << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << matrix2[i][j] << "\t";
        }
        cout << endl;
    }
    
    // Xuất ma trận tổng
    cout << "Ma tran tong:" << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }
    
    // Giải phóng bộ nhớ
    for(int i = 0; i < r; i++) {
        delete[] matrix1[i];
        delete[] matrix2[i];
        delete[] sum[i];
    }
    delete[] matrix1;
    delete[] matrix2;
    delete[] sum;
    
    return 0;
}