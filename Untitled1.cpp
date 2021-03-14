#include<stdio.h>
int main()
{
	int n,i,s;
	printf("nhap n:");
	scanf("%d",&n);
	s=0;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0) s+=i;
	}
	printf("%d",s);
	return s;
}
