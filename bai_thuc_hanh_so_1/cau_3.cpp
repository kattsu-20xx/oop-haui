#include<bits/stdc++.h>
using namespace std;

class hang_hoa {
private:
  char ma_hang[10];
  char ten_hang[30];
  float don_gia;
  int so_luong;
public:
  void nhap();
  void xuat();
};

void hang_hoa::nhap() {
  cout << "ma hang hoa  :"; cin.getline(ma_hang, 10);
  cout << "ten hang hoa :"; cin.getline(ten_hang, 30);
  cout << "don gia      :"; cin >> don_gia;
  cout << "so luong     :"; cin >> so_luong;
}

void hang_hoa::xuat() {
  cout << left
    << setw(10) << "MA_HANG"
    << setw(20) << "TEN_HANG"
    << setw(10) << "DON_GIA"
    << setw(10) << "SO_LUONG" << endl;

  cout << left
    << setw(10) << ma_hang
    << setw(20) << ten_hang 
    << setw(10) << don_gia
    << setw(10) << so_luong << endl;
}

int main() {
  hang_hoa x;
  x.nhap();
  x.xuat();
}
