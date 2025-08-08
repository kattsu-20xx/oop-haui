#include<bits/stdc++.h>
using namespace std;

class sinhvien {
private:
  char masv[5];
  char hoten[30];
  char tuoi[5];
  float diem;
public:
  void nhap();
  void xuat();
};

void sinhvien::nhap() {
  cout << "ma sinh vien: ";
  cin.getline(masv, 5);

  cout << "ho va ten: ";
  cin.getline(hoten, 30);

  cout << "tuoi: ";
  cin.getline(tuoi, 5);

  cout << "diem gpa: ";
  cin >> diem;
}

void sinhvien::xuat() {
  cout << left << setw(15) << "MA_SINH_VIEN"
       << setw(20) << "HO_VA_TEN"
       << setw(15) << "TUOI"
       << setw(10) << "GPA" << endl;

  cout << left << setw(15) << masv
       << setw(20) << hoten
       << setw(15) << tuoi
       << setw(10) << diem << endl;
}

int main() {
  sinhvien x;
  x.nhap();
  x.xuat();
}
