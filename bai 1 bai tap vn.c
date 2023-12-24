#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct toado{
	int x;
	int y;
};
void nhap(struct toado *a){
	printf("nhap toa do x : ");
	scanf("%d",&a->x);
	printf("nhap toa do y : ");
	scanf("%d",&a->y);
}
void in(struct toado a){
	printf("\n\tM(%d , %d)",a.x,a.y);
}
void ktr(struct toado a){
	if(a.x==0 && a.y==0){
		printf("\nnam o goc toa do");
	}
	else if(a.x==0){
		printf("\nnam tren truc tung ");
	}
	else if(a.y==0){
		printf("\nnam tren truc hoang ");
	}
}
void kc(struct toado a,int *h,int *k){
	float d;
	printf("\n nhap diem N(a,b)");
	scanf("%d%d",h,k);
	d=sqrt(pow(*h-a.x,2)+pow(*k-a.y,2));
	printf("\nkhoang cach giua 2 diem M(%d , %d ) va N(%d , %d ) : %.f",a.x,a.y,*h,*k,d);
}
void ktr2(struct toado a,int h,int k){
	if(a.x==-h && a.y==-k){
		printf("\nhai die doi xung qua truc toa do");
	}
	else if(a.x==-h){
		printf("\n doi xung qua truc tung");
	}
	else if(a.y==-k){
		printf("\n doi xung qua truc hoanh");
	}
}
int main(){
	struct toado a;
	int h,k;
	nhap(&a);
	in(a);
	ktr(a);
	kc(a,&h,&k);
	ktr2(a,h,k);
	return 0;
}