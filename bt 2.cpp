#include<stdio.h>
#include<stdbool.h>
int snt(int n);
int sdn(int n);
int sdx( int n);
bool shh( int n);
int ucln(int a, int b);
int bcnn(int a, int b);
int uclnm(int a[], int n);
int bcnnm( int a[],int n);
void lietke(int *p,int n);
void nhap (int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("so thu %d la:",i);
		scanf("%d",p+i);
	}
}

void in (int *p, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf ("%d",*(p+i));
	}
}
int main()
{
	int x,n,i,a[30];
	printf("nhap n:");
	scanf("%d%d",&n,&x);
	printf("\nmang can nhap la:\n");
	nhap(a,n);
	printf("\ncac so nguyen to la:");
	lietke(a,n);
	printf("\nso doi xung la:  ");
	for(i=0;i<n;i++)
	{
		if(sdx(a[i])==1) printf("%2d",a[i]);
	}
	printf("\nso dao nguoc la:  ");
    for(i=0;i<n;i++)
    {
    printf("%3d",sdn(a[i]));
    }
    printf("\nso hoan hao la:  ");
    for(i=0;i<n;i++)
    {
    if(shh(a[i]) )
        printf("%d la so hoan hao.",a[i]);
    else
        printf("\n%d khong phai la so hoan hao.",a[i]);
    }
    printf("\nuoc chung lon nhat la");
   	printf("%d", uclnm(a,n));
   	
    printf("\nboi chun gnho nhat");
	printf("%d",bcnnm(a,n));
		return 0;
}

void lietke(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(snt(*(p+i))==1) printf("%2d",*(p+i));
	}
}

int snt( int n)
{
	int i;
	if(n<2) return 0;
	for(i=2;i<=n/2;i++)
	   if(n%i==0) return 0;
	return 1;
}

int sdx(int n)
{
	int a,i;
	i=n;
	a=0;
	while(i>0)
	{
		a=a*10+i%10;
		i/=10;
	}
	if(a==n) return 1;
	return 0;
}

int sdn(int n)
{
	int i,s;
	s=0;
	i=n;
	while(i>0)
    {
    	s=s*10+i%10;
    	i/=10;
	}
    return s;
}

bool shh(int n){
    int sum = 0;//khai bao biem sum
    for(int i=1;i<=n/2;i++){
        if(n%i==0) 
            sum+=i;
    }
    if(sum==n) return true; // tra ve true
    return false;
    }
    
int ucln(int a, int b)
{
	float r;
	while(b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int uclnm(int a[], int n)
{
	int d=ucln(a[0],a[1]);
	int i;
	for(i=2;i<n;i++)
	{
		d=ucln(d,a[i]);
	}
	return d;
}

int bcnn(int a,int b)
{
	return(a*b/ucln(a,b));
}

int bcnnm(int a[], int n)
{
	int d=bcnn(a[0],a[1]);
	int i;
	for(i=0;i<n;i++)
	{
		d=bcnn(d,a[i]);
	}
	return d;
}
