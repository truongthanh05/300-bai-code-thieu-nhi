#include<stdio.h>
#include <conio.h>
	#include <string.h>
#define n1 100
#include<string.h>
struct nhanvien{
	char maso[100];
	char ten[100];
	int ngaycong;
	int luongngay;
	char chucvu[100];
	int phucap;
};
void nhap(struct nhanvien *a){
	printf("nhap ma so ");
	scanf("%s",a->maso);
	getchar();
	printf("nhap ten ");
    fgets(a->ten, sizeof(a->ten), stdin);
    a->ten[strlen(a->ten) - 1] = '\0';
	printf("nhap so ngay cong ");
	scanf("%d",&a->ngaycong);
	printf("nhap luong 1 ngay ");
	scanf("%d",&a->luongngay);
	printf("nhap chuc vu ");
	getchar();
    fgets(a->chucvu, sizeof(a->chucvu), stdin);
    a->chucvu[strlen(a->chucvu) - 1] = '\0';
}
void luong(struct nhanvien a[],int n){
	int luong1;
	for(int i=0;i<n;i++){
		luong1=a[i].ngaycong*a[i].luongngay;
	printf("\nluong cua %s : %d \n",a[i].ten,luong1);
	}
}
void thuong(struct nhanvien a[],int n){
	for(int i=0;i<n;i++){
		if(a[i].ngaycong>=24){
			printf("tien thuong cua %s : 50 \n",a[i].ten);
	}
	}}
void phucap1(struct nhanvien a[],int n){
	for(int i=0;i<n;i++){
		if (strcmp(a[i].chucvu, "giam doc") == 0){
		    a[i].phucap=100;
			printf("tien phu cap cua %s : 100 \n",a[i].ten);
	}
	else if(strcmp(a[i].chucvu, "pho giam doc") == 0){
	    a[i].phucap=80;
			printf("tien phu cap cua %s : 80 \n",a[i].ten);
	}
	}}
void thuclanh(struct nhanvien a[],int n){
	int tong=0;
	for(int i=0;i<n;i++){
	    int thuong3=0;
	    if(a[i].ngaycong>=24){
	         thuong3=50;}
	tong+=a[i].ngaycong*a[i].luongngay+thuong3+a[i].phucap;
	printf("thuc lanh cua %s : %d \n",a[i].ten,tong);
	}
	
	}
int main(){
	int n;
	struct nhanvien a;
	printf("so luong nhan vien\n");
	scanf("%d",&n);
	struct nhanvien b[n1];
	for(int i=0;i<n;i++){
		printf("\nNhap thong tin cho nhan vien thu %d:\n", i + 1);
		nhap(&b[i]);
		}
	luong(b,n);
	thuong(b,n);
	phucap1(b,n);
	thuclanh(b,n);
	getch();
	return 0;
}