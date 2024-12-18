#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int n;
	FILE *f;
	char path[20];
	strcpy(path, "bai28.txt");
	f = fopen(path, "rt");
	fscanf(f, "%d", &n);
	int *p = (int*)malloc(n*sizeof(int));
	for(int i = 0; i < n; i++){
		fscanf(f, "%d", &p[i]);
	}
	printf("\n              CAC GIA TRI VUA DOC LA\n ");
	printf("%d ", n);
	for(int i = 0; i < n; i++){
		printf("%d ", p[i]);
	}
	fclose(f);
	free(p);
	return 0;
	
}
