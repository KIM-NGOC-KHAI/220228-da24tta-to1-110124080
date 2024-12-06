#include<stdio.h>
// dinh nghia thanh vien
struct phanso{
	int tuso;
	int mauso;
};
typedef struct phanso ps;
// khai bao nguyen mau ham
void nhapphanso(phanso *ps);
void xuatphanso(phanso ps);
void rutgon(phanso *ps);
phanso congphanso(phanso ps1, phanso ps2);
phanso truphanso(phanso ps1, phanso ps2);
phanso nhanphanso(phanso ps1, phanso ps2);
phanso chiaphanso(phanso ps1, phanso ps2);
int main(){
	phanso ps1, ps2, kq;
	
	printf("Nhap phan so thu nhat");
	nhapphanso(&ps1);
	printf("\nNhap phan so thu hai ");
	nhapphanso(&ps2);
	printf("\nPhan so thu nhat: ");
	xuatphanso(ps1);
	printf("\nPhan so thu hai: ");
	xuatphanso(ps2);
	printf("\n");
	printf("\n");
	printf("\nKET QUA CAC PHEP TOAN");
	// cong 2 phan so
	kq = congphanso(ps1, ps2);
	printf("\nCong hai phan so =  ");
	xuatphanso(kq);
	// tru hai phan so
	kq = truphanso(ps1, ps2);
	printf("\nTru hai phan so =  ");
	xuatphanso(kq);
	// nhan hai phan so
	kq = nhanphanso(ps1, ps2);
	printf("\nNhan hai phan so =  ");
	xuatphanso(kq);
	// chia hai phan so
	kq = chiaphanso(ps1, ps2);
	printf("\nChia hai phan so =  ");
	xuatphanso(kq);
	return 0;
}
// chia hai phan so
phanso chiaphanso(phanso ps1, phanso ps2){
	phanso kq;
	kq.tuso = ps1.tuso * ps2.mauso;
	kq.mauso = ps1.mauso * ps2.tuso;
	return kq;
}
// nhan hai phan so
phanso nhanphanso(phanso ps1, phanso ps2){
	phanso kq;
	kq.tuso = ps1.tuso * ps2.tuso;
	kq.mauso = ps1.mauso * ps2.mauso;
	return kq;
}
// tru 2 phan so
phanso truphanso(phanso ps1, phanso ps2){
	phanso kq;
	kq.tuso = ps1.tuso * ps2.mauso - ps2.tuso * ps1.mauso;
	kq.mauso = ps1.mauso * ps2.mauso;
	return kq;
}
// cong 2 phan so
phanso congphanso(phanso ps1, phanso ps2){
	phanso kq;
	kq.tuso = ps1.tuso * ps2.mauso + ps2.tuso * ps1.mauso;
	kq.mauso = ps1.mauso * ps2.mauso;
	return kq;
}
// rut gon phan so 
void rutgon(phanso *ps){
	int a = ps->tuso;
	int b = ps->mauso;
	int UCLN = 1;
	// TH 1
	if(a == 0||b == 0){
		UCLN = (a + b);
	}else{
		// TH 2
		while(a != b){
			if(a > b){
				a = a - b;
			}else{
				b = b - a;
			}
		}
		UCLN = a;
	}
	ps->tuso /= UCLN;
	ps->mauso /= UCLN;
}
// xuat phan so
void xuatphanso(phanso ps){
	if(ps.tuso < 0){
		ps.tuso *= -1;
	}
	rutgon(&ps);
	if(ps.mauso == 1){
		printf("%d", ps.tuso);
	}else{
		printf("%d/%d", ps.tuso, ps.mauso);
	}
}
// nhap phan so
void nhapphanso(phanso *ps){
	printf("\nNhap tu so: ");
	scanf("%d", &ps->tuso);
	do{
		printf("Nhap mau so: ");
		scanf("%d", &ps->mauso);
	}while(ps->mauso == 0);
}
