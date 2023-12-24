#include<stdio.h>
#include<string.h>
struct taxi{
	char ma[100];
	char ten[100];
	char dcdon[100];
	int km;
	int soghe;
};
void nhap(struct taxi a[],int n){
	for(int i=0;i<n;i++){
		printf("\nnhap thong tin taxi %d\n",i+1);
		getchar();
		printf("\nma so : ");
		fgets(a[i].ma,sizeof(a[i].ma),stdin);
		a[i].ma[strlen(a[i].ma)-1]='\0';
		printf("\nten tai xe : ");
	    fgets(a[i].ten,sizeof(a[i].ten),stdin);
	    a[i].ten[strlen(a[i].ten)-1]='\0';
		printf("\ndia chi don : ");
		fgets(a[i].dcdon,sizeof(a[i].dcdon),stdin);
		a[i].dcdon[strlen(a[i].dcdon)-1]='\0';
		printf("\nso km da chay : ");
		scanf("%d",&a[i].km);
		printf("\nso ghe : ");
		scanf("%d",&a[i].soghe);
		
	}
}
void xuat(struct taxi a[],int n){
	printf("\n\t.... thong tin taxi \n");
	for(int i=0;i<n;i++){
		printf("\nma so : %s",a[i].ma);
		printf("ten tai xe : %s ",a[i].ten);
   	    printf("\ndia chi don :%s ",a[i].dcdon);
		printf("\nso km da chay : %d \n",a[i].km);
		printf("\nso ghe : %d\n ",a[i].soghe);
		
	}
}
void ktr(struct taxi a[],int n){
	char x[1000];
	printf("\n nhap ten tai xe can tim : ");
	fgets(x,sizeof(x),stdin);
	int c=1;
	for(int i=0;i<n;i++){
		c=1;
		if(strcmp(a[i].ten,x)==0){
			printf("\n da tim thay tai xe");
			break;
		}
		else{
			c=0;
		}
	}
	if(c==0){
		printf("\nkhong tim thay tai xe!");
	}
}
void ktr2(struct taxi a[],int n){
	char x[1000];
	int c;
	printf("\n nhap quan/huyen can tim taxi : ");
	fgets(x,sizeof(x),stdin);
	for(int i=0;i<n;i++){
		c=1;
		if(strstr(a[i].ten,x)!=NULL){
			printf("\n da tim thay taxi o %s",x);
			break;
		}
		else{
			c=0;
		}
	}
	if(c==0){
		printf("\n khong tim thay taxi o %s",x);
	}
}
int main(){
	int n;
	printf("nhap so luong taxi : ");
	scanf("%d",&n);
	struct taxi a[n];
	nhap(a,n);
	xuat(a,n);
	ktr(a,n);
	ktr2(a,n);
	return 0;
}