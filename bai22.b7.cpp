#include<stdio.h>
#include<stdlib.h>
void nhapgiatri(int a[], int n);
void xuatgiatri(int a[], int n);
int tonggiatri(int a[], int n);
int GTLN(int a[], int n);
int demsomax(int a[], int n);
int demgiatriX(int a[], int n, int x);
int tontaiSoDuong(int a[], int n);
void xeptang(int a[], int n);
int main(){
	int *p, n, x;
	// nhap so luong phan tu 
	do{
		printf("Nhap so nguyen duong n: ");
		scanf("%d", &n);
	}while(n <= 0||n > 50);
	p = (int*)malloc(n* sizeof(int ));
	nhapgiatri(p, n);
	printf("\n");
	xuatgiatri(p, n);
	printf("\n");
	printf("\nTong cac gia tri: %d", tonggiatri(p, n));
	printf("\n");
	printf("\nGia tri lon nhat: %d", GTLN(p, n));
	printf("\n");
	printf("\nSo lan xuat hien gia tri lon nhat la: %d", demsomax(p, n));
	printf("\n");
	printf("\nNhap x: ");
	scanf("%d", &x);
	printf("So lan xuat hien cua gia tri %d la %d", x, demgiatriX(p, n, x));
	printf("\n");
	if(tontaiSoDuong(p, n)){
		printf("TRONG MANG CO TON TAI SO DUONG");
	}else{
		printf("TRONG MANG KHONG TON TAI SO DUONG");
	}
	printf("\n");
	printf("\nSap xep gia tri theo thu tu tang dan: ");
	xeptang(p, n);
	xuatgiatri(p, n);
	return 0;
}
// sap xep tang
void xeptang(int a[], int n){
	int i, j, daxep;
	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			if(a[j] < a[i]){
				daxep = a[j];
				a[j] = a[i];
				a[i] = daxep;
			}
		}
	}
}
// trong mnag co ton tai so duong hay khong
int tontaiSoDuong(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		if(a[i] > 0)
			return 1;
		return 0;
	}
}
// dem cac gia tri x
int demgiatriX(int a[], int n, int x){
	int i, dem = 0;
	for(i = 0; i < n; i++){
		if(x == a[i]){
			dem++;
		}
	}
	return dem;
}
// dem cac gi tri max
int demsomax(int a[], int n){
	int i, dem = 0;
	for(i = 0; i < n; i++){
		if(a[i] == GTLN(a, n)){
			dem++;
		}
	}
	return dem;
}
// tim gia tri lon nhat
int GTLN(int a[], int n){
	int i, max = 0;
	for(i = 0; i < n; i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	return max;
}
// tong cac gia tri
int tonggiatri(int a[], int n){
	int i, tong = 0;
	for(i = 0; i < n; i++){
		tong += a[i];
	}
	return tong;
}
// xuat gia tri
void xuatgiatri(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%5d ", a[i]);
	}
}
// nhap gia tri
void nhapgiatri(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("Nhap a[%d]: ", i + 1);
		scanf("%d", &a[i]);
	}
}
