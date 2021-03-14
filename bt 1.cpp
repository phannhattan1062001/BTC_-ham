#include<stdio.h>
void nhap(int*p,int n);
void in (int*p, int n);
int dem(int *p, int n);
int tong(int *p, int n);
int kt (int *p,int n, int x);
void xoa(int *p, int &n, int x);
int csc( int *p, int n);
void sapxep(int *p,int n);

int main()
{
	int n, s[30],x;
	printf("nhap n,x:");
	scanf("%d%d",&n,&x);
	printf("day so can nhap la:\n");
	nhap(s,n);
	printf("%d",tong(s,n));
	printf("\nday sau khi xoa la:  ");
	xoa(s,n,x);
	in(s,n);
    csc(s,n);
    
}

void nhap(int *p, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("so thu %d la: ",i);
		scanf("%d",p+i);
	}
}

void in(int *p, int n)
{
	int i;
	for(i=0;i<n;i++)
	    printf("%d",*(p+i));
}

int dem(int *p,int n)
{
	int i;
	int dem=0;
	for(i=0;i<n;i++)
	{
		if(*(p+i)%5==0) dem++;
	}
	return dem;
}

int tong(int *p,int n)
{
	int i;
	int s=0;
	for(i=0;i<n;i++)
	{
		if(*(p+i)%2==0) s+=*(p+i);
	}
	return s;
}

int kt(int *p, int n, int x)
{
	int i;
	int k=0;
	for(i=0;i<n;i++)
	   if(*(p+i)==x) k=1;
	if(k==0) printf("khong co phan tu x trong mang");
	else printf("co phan tu x trong mang");
    return k;
}

void xoa(int *p,int &n,int x)
{
	int i,j;
	for(i=0;i<n;i++)
	    if(*(p+i)==x)
	    	for(j=i;j<n;j++)
	    	{
	    		*(p+j)=*(p+j+1);
	    		n--;
			}
}

int csc(int s[],int n)
{
	int i;
	int k=0;
	int d=s[1]-s[0];
	for(i=0;i<n;i++)
	    if(s[i]-s[i-1]==d) k=1;
	if(k==0) printf("day khong phai la day csc");
	else printf("day la day csc");
	return k;
}

void sapxep(int *p, int n)
{
	int i,j;
	int tg;
	for(i=0;i<n-1;i++)
	   for(j=i+1;j<n;j++)
	      if(*(p+i)>*(p+j))
	    {
	       tg=*(p+i);
	       *(p+i)=*(p+j);
	       *(p+j)=tg;
	    }
}

