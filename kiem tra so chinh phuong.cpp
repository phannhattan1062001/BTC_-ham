#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool kt (int n)
{
	int i=sqrt(n);	
	return (i*i==n);
}
void nhap(int*p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("so thu %d la: ",i);
		scanf("%d",p+i);
	}
}

void in (int *p, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",*(p+i));
	}
}

int main()
{
	int i,n, a[30];
	printf("nhap n:");
	scanf ("%d",&n);
	nhap(a,n);
	printf("day so vua nhap la:");
	in(a,n);
	printf("\ncac so chinh phuong la:");
	for(i=0;i<n;i++)
	{
		if(kt(a[i])) printf("%3d",a[i]);
	}

	return 0;
}
