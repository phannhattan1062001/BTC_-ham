#include<stdio.h>

int kiemtra(int n)
{
	int dem;
	int i;
	while (n>2)
	{
		dem=0;
		for(i=2;i<n/2;i++)
		{
			if(n%i==0) dem=1;
		}
	    if(dem==0) return 1;
	}
	return 0;
}
int main()
{
	int i,n;
	int s[30];
	printf("nhap n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("s[%d]=",i);
		scanf("%d",&s[i]);
	}
	printf("so nguyen to la:\n");
	for(i=0;i<n;i++){
		if(kiemtra(s[i])) printf("%3d",s[i]);
		
	}
	return 1;
}
