#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int a[500][500];
int n;
void ReadFile(){
	FILE *f;
	f = fopen("MaTranKe.txt", "r");
	if(f == NULL){
		cout << "Khong the mo file";
	}else{
		fscanf(f, "%d", &n);
		for(int i = 0; i < n; i++){
			for(int j  = 0; j < n; j++){
				fscanf(f, "%d", &a[i][j]);
			}
		}
		fclose(f);
	}
}
void InFile(){
	cout << "So dinh " << n << endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << a[i][j] << " "; 
		}
		cout << endl;
	}
}

bool DoiXung(){
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i][j] != a[j][i]){
				return false;
			}
		}
	}
	return true;
}
bool Duong_Cheo_Chinh(){
	for(int i = 0; i < n; i++){
		if(a[i][i] != 0){
			return false;
		}
	}
	return true;
}
bool MaTran(){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(a[i][j] > 1){
				return false;
			}
		}
	}
	return true;
}
int main(){
	ReadFile();
	InFile();
	cout << endl;
	if(!DoiXung()){
		if(MaTran()){
			cout << "Don do thi co huong" << endl;
		}else{
			cout << "Da do thi co huong" << endl;
		}
	}else{
		if(!Duong_Cheo_Chinh()){
			cout << "Gia do thi";
		}else{
			if(MaTran()){
				cout << "Don do thi vo huong";
			}else{
				cout << "Da do thi vo huong";
			}
		}
	}
	return 0;
}
