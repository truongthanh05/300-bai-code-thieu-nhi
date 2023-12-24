#include<stdio.h>
#include<string.h>
struct sinhvien{
	char ma[100];
	char ten[100];
	int toan;
	int ly;
	int hoa;
	char xeploai[20];
};
void nhap(struct sinhvien *a){
	printf("nhap ma so : ");
	scanf("%s",&a->ma);
	printf("\nnhap ten : ");
	scanf("%s",&a->ten);
	printf("\nnhap diem toan : ");
	scanf("%d",&a->toan);
	printf("\nnhap diem ly : ");
	scanf("%d",&a->ly);
	printf("\nnhap diem hoa : ");
	scanf("%d",&a->hoa);
}
float tb(struct sinhvien a[],int i){
float dtb=a[i].toan+a[i].ly+a[i].hoa;
	return dtb/3.0;
}
void xeploai(struct sinhvien *a, int i) {
    if (tb(a, i) <= 5) {
        strcpy(a[i].xeploai, "tb");
        printf("xep loai : %s\n",a[i].xeploai);
    } else if (tb(a, i) > 5 && tb(a, i) < 8) {
        strcpy(a[i].xeploai, "kha");
        printf("xep loai : %s\n",a[i].xeploai);
    } else {
        strcpy(a[i].xeploai, "gioi");
        printf("xep loai : %s\n",a[i].xeploai);
    }
    
}
void in(struct sinhvien a[],int n){
	for(int i=0;i<n;i++){
		printf("\nsv%s\n",a[i].ma);
		printf("%s\n",a[i].ten);
		printf("diem toan%d\n",a[i].toan);
		printf("diem ly%d\n",a[i].ly);
		printf("diem hoa%d\n",a[i].hoa);
		printf("diem trung binh : %0.2f\n",tb(a,i));
		xeploai(a,i);
	}
}

int main(){
	int n;
	printf("nhap so luong sinh vien");
	scanf("%d",&n);
	struct sinhvien a[n];
	for(int i=0;i<n;i++){
		printf("\n nhap thong tin nguoi thu %d \n",i+1);
		nhap(&a[i]);
	}
	in(a,n);
	return 0;
	
}