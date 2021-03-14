#include<stdio.h>
#include<math.h>
int chuyen2sang10(int n)
{
	int p=0;
	int s=0;
	while(n>0)
   {	s+= n%10 *pow(2,p);
	    p++;
	    n/=10;
   }
   return s;
}
int chuyen10sang2(int a)
{
	int p=0;
	int s=0;
	while(a>0)
	{
		s+= a%2 * pow(10,p);
		p++;
		a/=2;
	}
	return s;
}

int main()
{
	int m,a;
	printf("nhap m,a:");
	scanf ("%d%d",&m,&a);
	printf("so can tim la: %d",chuyen2sang10(m));
	printf("\n so can tim la: %d", chuyen10sang2(a));
	return 1;
}
