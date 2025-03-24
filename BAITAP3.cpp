#include<stdio.h>
void ghifile();
void docfile();
void saochepfile(int m);

int main(){
	ghifile();
	docfile();
	int m;
	printf("\nNhap so luong phan tu can sao chep: ");
	scanf("%d", &m);
	saochepfile(m);
	
	return 0;
}
// ham sao chep m phan tu
void saochepfile(int m){
	FILE *file0 = fopen("f0", "rb");
	FILE *file1 = fopen("f1", "wb");
	if(file0 == NULL || file1 == NULL){
		printf("Loi mo file!\n");
		return;
	}
	int songuyen;
	for(int i = 1; i <= m; i++){
		if(fread(&songuyen, sizeof(int), 1, file0)){
			fwrite(&songuyen, sizeof(int), 1, file1);
		}else{
			break;
		}
	}
	fclose(file0);
	fclose(file1);
}
// ham doc du lieu tu tap tin va in ra man hinh
void docfile(){
 	FILE *file = fopen("f0", "rb");
	if(file == NULL){
		printf("Loi mo file!\n");
		return;
	}
	int songuyen;
	while(fread(&songuyen, sizeof(int), 1, file)){
		printf("%d ", songuyen);
	}
		printf("\n");
		fclose(file);
}
// ham ghi du lieu tu file vao tap tin f0
void ghifile(){
	FILE *file = fopen("f0", "wb");
	if(file == NULL){
		printf("Loi mo file!\n");
		return;
	}
	int n;
	int songuyen;
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		printf("Nhap so nguyen thu %d: ", i);
		scanf("%d", &songuyen);
		fwrite(&songuyen, sizeof(int), 1, file);
	}
	fclose(file);
}

