#include<stdio.h>
#include<string.h>
#define VAT 0.1 // ty le vat = 10%
struct SACH{
	char masach[20];
	char tensach[50];
	char tacgia[50];
	char nhaxuatban[50];
	int namxuatban;
	float dongia;
	int soluong;
	float thanhtien;
	float thuevat; // thue vat
	float thuctien; // thanh tien sau khi thue
};
// khai bao nguyen mau ham
void nhapsach(SACH *s);
void xuatsach(SACH *s);
void sapxepgiam(SACH *ds, int n);
void sachcothuctienmax(SACH *ds, int n);
int tongsoluong(SACH *ds, int n);

int main(){
	int n;
	printf("Nhap so luong sach: ");
	scanf("%d", &n);
	SACH ds[n];
	// goi ham
	// nhap danh sach
	for(int i = 0; i < n; i++){
		printf("\nNhap thong tin quyen thu %d", i + 1);
		nhapsach(&ds[i]);
	}
	printf("\n");
	// xuat danh sach
	printf("DANH SCAH CAC QUYEN SACH");
	printf("\n");
	for(int i = 0; i < n; i++){
		printf("    Quyen thu %d", i + 1);
		xuatsach(&ds[i]);
		printf("\n");
	}
	printf("\n");
	// sap xep nam san xuat theo thu tu giam dan 
	sapxepgiam(ds, n);
	printf("\nDANH SCAH CAC QUYEN SACH SAP XEP GIAM DAN:");
	for(int i = 0; i < n; i++){
		printf("\n");
		printf("	Quyen thu %d", i + 1);
		xuatsach(&ds[i]);
		printf("\n");
	}
	printf("\n");
	// quyen sach co thuc tien lon nhat
	sachcothuctienmax(ds, n);
	printf("\n");
	// tong so luong moi quyen sach
	printf("\nTong so luong cua quyen sach: %d", tongsoluong(ds, n));
	return 0;
} 
// tong so luong cua moi quyen sach
int tongsoluong(SACH *ds, int n){
	int tong = 0;
	for(int i = 0; i < n; i++){
		tong += ds[i].soluong;
	}
	return tong;
}
// quyen sach co thuc tien lon nhat
void sachcothuctienmax(SACH *ds, int n){
	float MAX = ds[0].thuctien;
	int vitri = 0;
	for(int i = 1; i < n; i++){
		if(ds[i].thuctien > MAX){
			MAX = ds[i].thuctien;
			vitri = i;
		}
	}
	printf("QUYEN SACH CO THUC TIEN LON NHAT");
	xuatsach(&ds[vitri]);
}
// sap xep nam xuat ban theo thu tu giam dan
void sapxepgiam(SACH *ds, int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(ds[i].namxuatban < ds[j].namxuatban){
				SACH sapxep = ds[i];
				ds[i] = ds[j];
				ds[j] = sapxep;
			}
		}
	}
}
// xuat sach 
void xuatsach(SACH *s){
	printf("\nMA SACH: %s", s->masach);
	printf("\nTEN SACH: %s", s->tensach);
	printf("\nTAC GIA: %s", s->tacgia);
	printf("\nNHA XUAT BAN: %s", s->nhaxuatban);
	printf("\nNAM XUAT BAN: %d", s->namxuatban);
	printf("\nDON GIA: %.2f", s->dongia);
	printf("\nSO LUONG: %d", s->soluong);
	printf("\nTHANH TIEN: %.2f", s->thanhtien);
	printf("\nVAT(10%%): %.2f", s->thuevat);
	printf("\nTHUC TIEN: %.2f", s->thuctien);
}
// nhap sach
void nhapsach(SACH *s){
	// nhap ma scah 
	printf("\nNhap ma sach: ");
	fflush(stdin);
	gets(s->masach);
	// nhap ten sach
	printf("Nhap ten sach: ");
	fflush(stdin);
	gets(s->tensach);
	// nhap ten tac gia
	printf("Nhap ten tac gia: ");
	fflush(stdin);
	gets(s->tacgia);
	// nhap nha xuat ban
	printf("Nhap nha xuat ban: ");
	fflush(stdin);
	gets(s->nhaxuatban);
	// nhap nam san xuat
	printf("Nhap nam xuat ban: ");
	scanf("%d", &s->namxuatban);
	// nhap don gia
	printf("Nhap don gia: ");
	scanf("%f", &s->dongia);
	// nhap so luong
	printf("Nhap so luong: ");
	scanf("%d", &s->soluong);
	// tinh tien cua quyen sach
	s->thanhtien = s->dongia * s->soluong;
	// thinh thue vat
	s->thuevat = s->thanhtien * VAT;
	// thuc tien cua quyen sach
	s->thuctien = s->thanhtien + s->thuevat; 
}
