#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct date{
	int ngay;
	int thang;
	int nam;	
};


typedef struct SINH_VIEN{
	char mssv[20];
	char Hoten[100];
	date ngaysinh;
	float dtb;	
}SINH_VIEN;
typedef struct SINH_VIEN SV;

// goi ham 
void nhapmang(SV a[], int n);
void xuatmang(SV a[], int n);
void BubbleSort(SV a[], int n);
void InsertionSort(SV a[], int n);
void QuickSort(SV a[], int low, int high);
void SelectionSort(SV a[], int n);
void InterchangeSort(SV a[], int n);

int main(){
	int n;
	int choice;
	SV a[n];
	printf("Nhap so luong sinh vien: ");
	scanf("%d", &n);
	nhapmang(a, n);	
	xuatmang(a, n);
	printf("\n");
	printf("CHON THUAT TOAN SAP XEP \n");
	printf("1.Bubble Sort\n");
	printf("2.Insertion Sort\n");
	printf("3.Quick Sort\n");
	printf("4.Selection Sort\n");
	printf("5.Interchange Sort\n");
	printf("Nhap lua chon cua ban: ");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			BubbleSort(a, n);
			break;
		case 2:
			InsertionSort(a, n);
			break;
		case 3:
			QuickSort(a, 1, n);
			break;
		case 4:
			SelectionSort(a, n);
			break;
		case 5:
			InterchangeSort(a, n);
			break;
		default:
			printf("Lua chon khong hop le!\n");
			return 1;	
	}
	printf("\n");
	//BubbleSort(a, n);
	//InsertionSort(a, n);
	//QuickSort(a, 1, n);
	//SelectionSort(a, n);
	//InterchangeSort(a, n);
	
	xuatmang(a, n);
	
	return 0;
}
// sap xep theo kieu interchange sort
void InterchangeSort(SV a[], int n){
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (a[i].dtb > a[j].dtb) {
                SV t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}

// sap xep theo kieeu selection sort
void SelectionSort(SV a[], int n){
    for (int i = 1; i <= n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j <= n; j++) {
            if (a[j].dtb < a[minIdx].dtb) {
                minIdx = j;
            }
        }
        if (minIdx != i) {
            SV temp = a[i];
            a[i] = a[minIdx];
            a[minIdx] = temp;
        }
    }
}
// sap xep thoe kieu uick sort
void QuickSort(SV a[], int low, int high){
    if (low < high) {
        int pivot = a[high].dtb;
        int i = (low - 1);
        for (int j = low; j < high; j++) {
            if (a[j].dtb <= pivot) {
                i++;
                SV temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        SV temp = a[i + 1];
        a[i + 1] = a[high];
        a[high] = temp;
        QuickSort(a, low, i);
        QuickSort(a, i + 2, high);
    }
}

// sap xep kieu insertion sort
void InsertionSort(SV a[], int n){
    for (int i = 2; i <= n; i++) {
        SV key = a[i];
        int j = i - 1;
        while (j >= 1 && a[j].dtb > key.dtb) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}
// sap xep kieu bubble sort 
void BubbleSort(SV a[], int n){
    for (int i = 1; i <= n - 1; i++) {
        for (int j = 1; j <= n - i; j++) {
            if (a[j].dtb > a[j + 1].dtb) {
                SV temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

// ham xuat thong tin sinh vien 
void xuatmang(SV a[], int n){
	printf("                    THONG TIN SINH VIEN            \n");
	printf("   MSSV\t\t\tHO VA TEN\t\tNAM SINH\tDTB\n");
	for(int i = 1; i <= n ; i++){
		printf("%s\t\t%s\t\t%d / %d / %d\t%.1f ", a[i].mssv, a[i].Hoten, a[i].ngaysinh.ngay, a[i].ngaysinh.thang, a[i].ngaysinh.nam, a[i]. dtb);
		printf("\n");
	}
}
// ham nhap thong tin sinh vien 
void nhapmang(SV a[], int n){
	printf("       NHAP THONG TIN SINH VIEN         \n");
	for(int i = 1; i <= n; i++){
		fflush(stdin);
		printf("Nhap mssv: ");
		gets(a[i].mssv);
		fflush(stdin);
		printf("Nhap ho va ten: ");
		gets(a[i].Hoten);
		printf("Nhap ngay thang nam sinh: ");
		scanf("%d %d %d", &a[i].ngaysinh.ngay, &a[i].ngaysinh.thang, &a[i].ngaysinh.nam);
		printf("Nhap diem trung binh: ");
		scanf("%f", &a[i]. dtb);
		printf("\n");
	}
}
