#include<bits/stdc++.h>
using namespace std;

class sach {
private:
  char ma_sach[5];
  char ten_sach[30];
  char nha_xuat_ban[30];
  int so_trang;
  float gia_tien;
public:
  void nhap();
  void xuat();
};

void sach::nhap() {
  cin.ignore();
  cout << "ma sach      :"; cin.getline(ma_sach, 5);
  cout << "ten sach     :"; cin.getline(ten_sach, 30);
  cout << "nha xuat ban :"; cin.getline(nha_xuat_ban, 30);
  cout << "so trang     :"; cin >> so_trang;
  cout << "gia_tien     :"; cin >> gia_tien;
}

void sach::xuat() {
  cout << left 
  << setw(10) << ma_sach
  << setw(15) << ten_sach
  << setw(20) << nha_xuat_ban
  << setw(10) << so_trang
  << setw(10) << gia_tien << endl;
}

int main() {
  int n;
  cout << "nhap vao so cuon sach: "; cin >> n;
  sach *y = new sach[n];
  for(int i = 0; i < n; i++) {
    cout << "cuon sach thu " << i + 1 << endl;
    y[i].nhap();
  }
  cout << left 
  << setw(10) << "MA_SACH"
  << setw(15) << "TEN_SACH"
  << setw(20) << "NHA_XUAT_BAN"
  << setw(10) << "SO_TRANG"
  << setw(10) << "GIA_TIEN" << endl;

  for(int i = 0; i < n; i++) {
    y[i].xuat();
  }

  delete[] y;
}
