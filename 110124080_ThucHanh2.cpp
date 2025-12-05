#include <bits/stdc++.h>
#include <stdio.h>
#define maxn 500
using namespace std;
int a[maxn][maxn];
int n;
void ReadFile(){
	FILE *f;
	f = fopen("ThucHanh2.txt", "r");
	if(f == NULL){
		cout << "Khong tim thay file" << endl;
	}else{
		fscanf(f, "%d", &n);
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				fscanf(f, "%d", &a[i][j]);
			}
		}
		fclose(f);
	}
}
void PrintFile(){
	cout << "So dinh " << n << endl;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << a[i][j] << " "; 
		}
		cout << endl;
	}
}
// ham ktr ma tran doi xung
bool DoiXung(){
	for(int i = 1; i <= n; i++){
		for(int j = i + 1; j <= n; j++){
			if(a[i][j] != a[j][i]){
				return false;
			}
		}
	}
	return true;
}

bool DuongCheoChinh(){
	for(int i = 1; i <= n; i++){
		if(a[i][i] != 0){
			return false;
		}
	}
	return true;
}
bool MaTran(){
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(a[i][j] > 1){
				return false;
			}
		}
	}
	return true;
}
int deg[maxn];
int degra[maxn];
int degvao[maxn];
int main(){
	ReadFile();
	PrintFile();
	int x;
	cout << "Nhap bac cua dinh can tinh x = ";
	cin >> x;
	if(DoiXung()){
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				if(i == j && a[i][j]){
					deg[i] += 2;
				}else{
					deg[i] += a[i][j];
				}
			}
		}
		cout << "Bac cua dinh x = " << x << " la: " << deg[x];
	}
	else{
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				degra[i] += a[i][j];
			}
		}
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				degvao[j] += a[i][j];
			}
		}
		cout << "bac ra cua x = " << x << " la: " << degra[x] << endl;
		cout << "bac vao cua x = " << x << " la: " << degvao[x] << endl;
		
	}
	return 0;
}
