#include<stdio.h>
#include<math.h>
float tinhe(int a);
float tinhsinx(int b);
float tinhcosx(int d);

int main(){
	int x;
	float m,n,p;
	printf("nhap x: ");
	scanf("%d",&x);
	m=tinhe(x);
	printf("gia tri cua e^x=%f",m);
	n=tinhsinx(x);
	printf("\ngia tri cua sinx=%f",n);
	p=tinhcosx(x);
	printf("\ngia tri cua cosx=%f",p);
	return 1;		
}
float tinhe( int a)
{
	float y;
	y=exp(a);
	return y;
}

float tinhsinx(int b)
{
	float c;
	b=b*3.14/180;
	c=sin(b);
	return c;
	
}

float tinhcosx(int d)
{
	float e;
	d=d*3.14/180;
	e=cos(d);
    return e;
}
