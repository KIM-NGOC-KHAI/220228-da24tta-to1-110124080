#define SIZE 100
#include<stdio.h>
void nhapMang(int a[], int n);
void xuatMang(int a[], int n);
int tongMang(int a[], int n);
int tongPTDUONG(int a[], int n);
int tongVITRILE(int a[], int n);
int kiemtraSNT(int n);
int demPTSNT(int a[], int n);
int demPTAM(int a[], int n);
int demPTLE(int a[], int n);
int SNTdautien(int a[], int n);
void SODUONGLE(int a[], int n);
int GIATRIAM(int a[], int n);
int Xtrongmang(int a[], int n, int x);

int main()
{
	int A[SIZE]	;
	int n, kq, x;
	
	do
	{
		printf("\nNhap vao so phan tu: ");
		scanf("%d",&n);
	}while(n<=0||n>100);
	
	//Goi ham
	nhapMang(A,n);
	printf("\nCac phan tu trong mang la:\n ");
	xuatMang(A,n);
	printf("\nTong mang: %d\n", tongMang(A,n));
	//HOAC
	kq = tongMang(A,n);
	printf("\nTONG MANG: %d\n", kq);
	printf("\nTong cac phan tu duong trong mang: %d\n", tongPTDUONG(A, n));
	printf("\nTog cac phan tu tai vi tri le: %d\n", tongVITRILE(A, n));
	printf("\nSo cac phan tu nguyen to trong mang: %d\n", demPTSNT(A, n));
	printf("\nCac phan tu am trong mang: %d\n", demPTAM(A,n));
	printf("\nPhan tu le trong mang: %d\n", demPTLE(A, n));
	printf("\nSo nguyen to dau tien: %d\n", SNTdautien(A, n));
	SODUONGLE(A, n);
	printf("\n");
	GIATRIAM(A, n);
	if(kq = GIATRIAM(A, n)){	
		printf("\nTIM THAY GIA TRI AM TRONG MANG\n");
	}else{
		printf("\nKHONG TIM THAY GIA TRI AM TRONG MANG\n");
	}
	printf("\nNhap so X: ");
	scanf("%d", &x);
	if(Xtrongmang(A, n, x)==1){
		printf("\nTon tai X ");
		
	}else{
		printf("\nKhong ton tai X ");
	}
	return 0;
	return 0;
}
int Xtrongmang(int a[], int n, int x){
	for(int i = 0; i < n; i++){
		if(a[i]==x)
			return 1;
	}
	return 0;
}

int GIATRIAM(int a[], int n){
	for(int i = 0; i < n; i++){
		if(a[i] < 0){
			return 1;
		}
	}
	return 0;
}

void SODUONGLE(int a[], int n){
	printf("\nSo duong le trong mang la: ");
	for(int i = 0; i < n; i++){
		if(a[i] % 2 != 0 && a[i] > 0)
			printf("%2d ", a[i]);
	}
}

int SNTdautien(int a[], int n){
	for(int i= 0; i < n; i++){
		if(kiemtraSNT(a[i])==1)
			return a[i];
	}
	return 0;
}
int demPTLE(int a[], int n){
	int demLE = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 != 0)
			demLE++;
	}
	return demLE;
}

int demPTAM(int a[], int n){
	int demAM = 0;
	for(int i = 0; i < n; i++){
		if(a[i] < 0)
			demAM++;
	}
	return demAM;
}

int demPTSNT(int a[], int n){
	int i, demSNT = 0;
	for(i = 0; i < n; i++){
		if(kiemtraSNT(a[i])==1)
			demSNT++;
	}
	return demSNT;
}
int kiemtraSNT(int n){
	int i, dem = 0;
	if(i < 2)
		return 0;
	for(i = 1; i <= n; i++){
		if(n % i == 0){
			dem++;
		}
	}
	if(dem == 2){
		return 1;
	}
	return 0;
}

int tongVITRILE(int a[], int n){
	int tong = 0;
	int i;
	for(i = 0; i <= n-1; i++){
		if(i % 2 != 0){
			tong += a[i];
		}
	}
	return tong;
}

int tongPTDUONG(int a[], int n){
	int i, tong = 0;
	for(i = 0; i <= n - 1; i++){
		if(a[i] > 0){
			tong += a[i];
		}
	}
	return tong;
}

int tongMang(int a[], int n)
{
	int tong = 0;
	int i = 0;
	do
	{
		tong = tong + a[i];
		i++;
	}while(i<=n-1);
	
	return tong;
}

void xuatMang(int a[], int n)
{
	int i;
	for(i=0; i<=n-1; i++)
	{
		printf("%8d", a[i]);//*(a+i)
	}
}

void nhapMang(int a[], int n)
{
	int i;
	i = 0;
	while(i<=n-1)
	{
		printf("\nNhap a[%d]: ", i);
		scanf("%d", &a[i]);//a + i
		i++;
	}
}
