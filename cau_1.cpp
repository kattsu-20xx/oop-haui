#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

class diemthi {
private:
    char madiemthi[30];
    char tendiemthi[30];
    char sophongthi[30];
    int sogiaovien;

public:
    void nhap();
    void xuat();
};

class lichthi {
private:
    char ngaythi[30];
    char buoi[10];
    char baithi[30];
    int thoigian;

public:
    void nhap();
    void xuat();
    friend class phieu;
};

void diemthi::nhap() {
    cin.ignore();
    cout << "nhap ma diem thi: ";
    cin.getline(madiemthi, 30);

    cout << "nhap ten diem thi: ";
    cin.getline(tendiemthi, 30);

    cout << "nhap so phong thi: ";
    cin.getline(sophongthi, 30);

    cout << "nhap so giao vien: ";
    cin >> sogiaovien;
}

void diemthi::xuat() {
    cout << "Ma de thi: " << madiemthi << setw(20) << "Ten diem thi: " << tendiemthi << endl;
    cout << "So phong thi: " << sophongthi << setw(25) << "So giao vien coi thi: " << sogiaovien << endl;
}

void lichthi::nhap() {
    cin.ignore();
    cout << "nhap ngay thi: ";
    cin.getline(ngaythi, 30);

    cout << "nhap buoi thi: ";
    cin.getline(buoi, 10);

    cout << "nhap bai thi: ";
    cin.getline(baithi, 30);

    cout << "nhap thoi gian: ";
    cin >> thoigian;
}

void lichthi::xuat() {
    cout << setw(15) << ngaythi
         << setw(15) << buoi
         << setw(20) << baithi
         << setw(15) << thoigian << endl;
}

class phieu {
private:
    diemthi x;
    lichthi* y;
    int n;
    char nguoilap[30];

public:
    void nhap();
    void xuat();
    void chen();
};

void phieu::nhap() {
    x.nhap();
    cout << "nhap so luong lich thi: ";
    cin >> n;

    y = new lichthi[n];
    for (int i = 0; i < n; i++) {
        cout << "Nhap lich thi thu " << i + 1 << ":\n";
        y[i].nhap();
    }

    cin.ignore();
    cout << "nguoi lap lich thi: ";
    cin.getline(nguoilap, 30);
}

void phieu::xuat() {
    cout << setw(40) << "LỊCH THI PTTH QUỐC GIA" << endl;
    x.xuat();
    cout << "Lich thi chi tiet\n";
    cout << setw(15) << "Ngay thi"
         << setw(15) << "Buoi"
         << setw(20) << "Bai thi"
         << setw(15) << "Thoi gian" << endl;

    int tong = 0;
    for (int i = 0; i < n; i++) {
        y[i].xuat();
        tong += y[i].thoigian;
    }

    cout << "\nTong thoi gian thi: " << tong << " phut" << endl;
    cout << "Nguoi lap lich thi: " << nguoilap << endl;
}

void phieu::chen() {
    // Tạo mảng mới có thêm 1 phần tử
    lichthi* tmp = new lichthi[n + 1];

    // Copy dữ liệu cũ
    for (int i = 0; i < n; i++) {
        tmp[i] = y[i];
    }

    // Nhập ngày thi mới
    cout << "\nNhap ngay thi moi can chen:\n";
    tmp[n].nhap();

    // Giải phóng mảng cũ
    delete[] y;

    // Gán lại con trỏ
    y = tmp;
    n++;
}

int main() {
    phieu a;
    a.nhap();

    cout << setw(40) << "--- PHIEU TRUOC KHI CHEN ---\n";
    a.xuat();

    a.chen(); // Chèn thêm ngày thi

    cout << "\n--- PHIEU SAU KHI CHEN ---\n";
    a.xuat();

    return 0;
}
