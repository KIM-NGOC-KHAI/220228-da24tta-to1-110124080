#define SIZE 100
#include<stdio.h>
void nhapmang(float a[], int n);
void xuatmang(float a[], int n);
float tinhtong(float a[], int n);
float TBCVITRILE(float a[], int n);
int demDUONG(float a[], int n);
void giatritaiVITRILE(float a[], int n);
float giatriMAX(float a[], int n);
int vitriMAX(float a[], int n);
int kiemtraSOAM(float a[], int n);
int sapxep(float a[], int n);
float vitricogiatrilakhong(float a[], int n);



int main(){
	float A[SIZE];
	int n, maxdautien;
	do{
		printf("Nhap phan tu n: ");
		scanf("%d", &n);
	}while(n <= 0||n > 100);
	nhapmang(A, n);
	printf("\nCac phan tu trong mang: ");
	xuatmang(A, n);
	printf("\n");
	printf("\nTong cac phan tu tren mang: %.2f", tinhtong(A, n));
	printf("\n");
	printf("\nTrung binh cong cac phan tu tai vi tri le: %.2f", TBCVITRILE(A, n));
	printf("\n");
	printf("\nSo phan tu duong trong mang: %d", demDUONG(A, n));
	printf("\n");
	giatritaiVITRILE(A, n);
	printf("\n");
	printf("\nGia tri lon nhat trong mang: %.2f", giatriMAX(A, n));
	printf("\n");
	printf("\nVi tri co gia tri lon nhat trong mang la a[%d]", vitriMAX(A, n));
	printf("\n");
	// gia tri lon dau tien
	maxdautien = vitriMAX(A, n);
	printf("\nVi tri co gia tri lon nhat dau tien la a[%d]", maxdautien);
	printf("\n");
	if(kiemtraSOAM(A, n)){
		printf("\nGIA TRI TRONG MANG TOAN SO AM");
	}else{
		printf("\nGIA TRI TRONG MANG KHONG TOAN SO AM");
	}
	printf("\n");
	sapxep(A, n);
	printf("\n");
	if(vitricogiatrilakhong(A, n)){
		printf("\nTRONG MANG CO GIA TRI LA 0");
	}else{
		printf("\nTRONG MANG KHONG CO GIA TRI LA 0 ");
	}
	return 0;
}
float vitricogiatrilakhong(float a[], int n){
	int i;
	float dem = 0;
	for(i = 0; i <= n -1; i++){
		if(a[i] == 0){
			dem++;
		}
	}
	if(dem == 0)
	return dem;
}
// sap xep theo thu tu tang dan
int sapxep(float a[], int n){
	int i, j;
	float dasapxep;
	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j <  n; j++){
			if(a[i] > a[j]){
				dasapxep = a[j];
				a[j] = a[i];
				a[i] = dasapxep;
			}
		}
	}
	printf("\nCac phan tu tang dan trong mang: ");
	for(i = 0; i < n; i++){
		printf("%8.2f ", a[i]);
	}
}
// kiem tra so am trong mang
int kiemtraSOAM(float a[], int n){
	int i;
	for(i = 0; i <= n - 1; i++){
		if(a[i] < 0){
			return 1;
		}
		return 0;
	}
}
// vi tri lon nhat trong mang
int vitriMAX(float a[], int n){
	int i = 0, vtmax = 0;
	float max = a[0];
	for(i = 0; i <= n - 1; i++){
		if(a[i] > max){
			max = a[i];
			vtmax = i;
		}
	}
	return vtmax;
}
// gia tri lon nhat trong mang
float giatriMAX(float a[], int n){
	int i = 0;
	float max = a[0];
	while(i <= n - 1){
		if(a[i] > max){
			max = a[i];
		}
		i++;
	}
	return max;
}
// gia tr tai vi tri le trong mang
void giatritaiVITRILE(float a[], int n){
	int i = 0;
	printf("\nCac gia tri tai vi tri le trong mang: ");
	do{
		if(i % 2 != 0){
			printf("%5.2f ", a[i]);
		}
		i++;
			
	}while(i <= n - 1);
}
// dem so phan tu duong trong mang A
int demDUONG(float a[], int n){
	int i, dem = 0;
	for(i = 0; i <= n - 1; i++){
		if(a[i] > 0){
			dem++;
		}
	}
	return dem;
}
// trung binh cong tai vi tri le
float TBCVITRILE(float a[], int n){
	int i;
	float tong = 0, dem = 0;
	for(i = 0; i <= n - 1; i++){
		if(i % 2 != 0){
			tong += a[i];
			dem++;
		}
	}
	return tong/dem;
}
// tinh tong ccac phan tu
float tinhtong(float a[], int n){
	int i = 0;
	float tong = 0;
	do{
		tong += a[i];
		i++;
	}while(i <= n -1);
	return tong;
}
// xuat mang
void xuatmang(float a[], int n){
	int i = 0;
	while(i <= n - 1){
		printf("%8.2f ", a[i]);
		i++;
	}
}
// nhap mang
void nhapmang(float a[], int n){
	int i;
	for(i = 0; i <= n - 1; i++){
		printf("Nhap a[%d]:", i);
		scanf("%f", &a[i]);
	}
}
