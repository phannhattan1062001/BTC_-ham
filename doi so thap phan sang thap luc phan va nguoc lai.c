#include<string.h>
#include<stdio.h>
const char x[]=
{
	'1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'
};

char doiso (int k)
{
	char s[30];
	int i=0;
	int dem;
	while (k!=0)
	{
		dem=k%16;
		k/=16;
		s[i++]=x[dem];
	
	}
	s[i]='\0';
	strrev(s);
	puts(s);
}
int main()
{
	
	int m;
	printf("nhap k:");
	scanf("%d",&m);
	printf("so sau khi doi la:\n");
	doiso(m);
	
	return 0;
}
