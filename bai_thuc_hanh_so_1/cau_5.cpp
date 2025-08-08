#include <bits/stdc++.h>
using namespace std;

class MyArray {
private:
  int *arr;
  int n;
public:
  void nhap();
  void sapxep();
  void xuat();
};

void MyArray::nhap() {
  cout << "Nhap n: ";
  cin >> n;
  arr = new int[n];
  for (int i = 0; i < n; i++) {
    cout << "Phan tu thu " << i + 1 << ": ";
    cin >> arr[i];
  }
}

void MyArray::sapxep() {
  int tmp = 0;
  for(int i = 0; i < n - 1; i++) {
    for(int j = i + 1; j < n; j++) {
      if(arr[i] > arr[j]) {
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
      }
    }
  }
}

void MyArray::xuat() {
  cout << "Mang sau khi sap xep: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  MyArray x;
  x.nhap();
  x.sapxep();
  x.xuat();
  return 0;
}

