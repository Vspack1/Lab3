#include <iostream>
using namespace std;

// Hàm nhập 1 mảng số nguyên r hàng và c cột
void inputArray(int **arr, int r, int c) {
    cout << "Nhap gia tri cho mang " << r << "x" << c << ":" << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }
}

// Hàm xuất 1 mảng số nguyên r hàng và c cột
void outputArray(int **arr, int r, int c) {
    cout << "Mang " << r << "x" << c << ":" << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

// Hàm đếm xem có bao nhiêu số nguyên tố trong mảng 2 chiều
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

int countPrimes(int **arr, int r, int c) {
    int count = 0;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(isPrime(arr[i][j])) {
                count++;
            }
        }
    }
    return count;
}

// Hàm đếm số nguyên tố trong mảng 2 chiều
void outputPrimes(int **arr, int r, int c) {
    cout << "Cac so nguyen to trong mang:" << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(isPrime(arr[i][j])) {
                cout << arr[i][j] << " tai vi tri [" << i << "][" << j << "]" << endl;
            }
        }
    }
}

int main() {
    int r, c;
    cout << "Nhap so hang: ";
    cin >> r;
    cout << "Nhap so cot: ";
    cin >> c;
    
    // Khai báo mảng 2 chiều sử dụng con trỏ
    int **arr = new int*[r];
    for(int i = 0; i < r; i++) {
        arr[i] = new int[c];
    }
    
    // Gọi các hàm đã định nghĩa
    inputArray(arr, r, c);
    outputArray(arr, r, c);
    
    int primeCount = countPrimes(arr, r, c);
    cout << "So luong so nguyen to trong mang: " << primeCount << endl;
    
    outputPrimes(arr, r, c);
    
    // Giải phóng bộ nhớ
    for(int i = 0; i < r; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    
    return 0;
}