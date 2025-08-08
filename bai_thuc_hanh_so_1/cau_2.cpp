#include<bits/stdc++.h>
using namespace std;

class hcn {
private:
  float chieu_dai;
  float chieu_rong;
public:
  void nhap();
  void ve();
  void dien_tich();
  void chu_vi();
};

void hcn::nhap() {
  cout << "chieu dai: ";
  cin >> chieu_dai;
  cout << "chieu rong: ";
  cin >> chieu_rong;
}

void hcn::ve() {
  for(int i = 0; i < chieu_dai; i++) {
    for(int j = 0; j < chieu_rong; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

void hcn::dien_tich() {
  cout << "dien tich hcn: " << chieu_dai * chieu_rong << endl;
}

void hcn::chu_vi()  {
  cout << "chu vi hcn: " << (chieu_dai + chieu_rong) * 2 << endl;
}

int main() {
  hcn x;
  x.nhap();
  x.ve();
  x.dien_tich();
  x.chu_vi();
}
