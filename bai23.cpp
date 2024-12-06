#include<stdio.h>
#include<string.h>
struct CONNGUOI{
	char hoten[30], diachi[100],gioitinh[4];
	int tuoi;
	float thunhap;
};

void nhap(CONNGUOI *a);//Truyen tham bien
void xuat(CONNGUOI a);//Truyen tham tri

int main()
{
	CONNGUOI a, b;
	//Nhap thong tin
	nhap(&a);//Truyen dia chi tham so thuc
	//Xuat thong tin
	printf("\nTHONG TIN CA NHAN ");
	xuat(a);
	
	return 0;
}
void xuat(CONNGUOI a)
{
	printf("\nHo ten: %s", a.hoten);
	printf("\nTuoi: %d", a.tuoi);
	printf("\nGioi tinh: %s", a.gioitinh);
	printf ("\nDia chi: %s", a.diachi);
	printf("THu nhap: %.3f", a.thunhap);
	
}
void nhap(CONNGUOI *a)
{
	// nhap ho ten
	printf("\nNhap vao ho ten: ");
	fflush(stdin);
	gets(a->hoten);
	// nhap tuoi
	printf("Nhap vao tuoi: ");
	scanf("%d", &a->tuoi);
	// nhap gioi tinh
	printf("Nhap vao gioi tinh: ");
	scanf("%s", &a->gioitinh);
	getchar();
	// nhap diachi
	printf("Nhap vao dia chi: ");
	fgets(a->diachi, sizeof(a->diachi), stdin);
	// thu nhap
	printf("Nhap vao thu nhap: ");
	scanf("%f", &a->thunhap);
}
