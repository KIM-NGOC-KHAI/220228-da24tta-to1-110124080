#include<stdio.h>

int main(){
	FILE *f;
	char path[50];
	int n;
	int a[n];
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("\nNhap phan tu thu %d: ", i + 1);
		scanf("%d", a + i);
	}
	printf("\nNhap duong dan: ");
	fflush(stdin);
	gets(path);
	f = fopen(path, "w");
	if(f == NULL){
		printf("Khong tim thay file ");
	}else{
		fprintf(f, "so luong phan tu trong mang la: %d", n);
		for(int i = 0; i < n; i++){
			fprintf(f, "\na[%d] = %d", i + 1, a[i]);
		}
	}
	fclose(f);
	return 0;
}
