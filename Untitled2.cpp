#include<stdio.h>
void nhap(int*p,int n);
void in(int *p,int n);
float tb (int *p,int n);
int main()
{
	int n, a[30];
	printf("nhap n:");
	scanf("%d",&n);
	nhap(a,n);
	printf("\nday nhap nhap la:\n");
	in(a,n);
	printf("\ngia tri trung binh cua day la :%0.2f", tb(a,n));
	if(tb(a,n)>0) printf("\nday la so duong");
	else printf("\nday la so am");
	return 1;
}
void nhap (int*p, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("phan tu thu %d la: ",i);
		scanf("%d",p+i);
	}
}

void in (int *p, int n )
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",*(p+i));
	}
}

float tb(int *p, int n)
{
	int i;
	int tong=0;
	for(i=0;i<n;i++)
	{
		tong+=*(p+i);
	}
	return (tong/n);
}
