#include<stdio.h>
//001
void soGapDoi()
{
	int a;
	scanf("%d", &a);
	printf("%d*2=%d\n",a,2*a);
}
//002
void phepTinh1()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%d\n", (a-b)*c);
	
}
//003
void kyTuMoi()
{
	char a;
	scanf("%c",&a);
	printf("%c\n",a-32);
}
//004
void soSoHang()
{
	int a,i,count;
	scanf("%d",&a);
	count=0 ;
	for (i=a;i>=0;i--)
	{
		if	(i>=(a+1)/2)
		{
		count=count+1;
		}
		else
		{
		count=count	;
		}
	}
	printf("%d",count);
	
}
//005
void soSoHang2()
{
	int a,i,count;
	scanf("%d",&a);
	count=0;
	for (i=1;i<=a*a;i++)
	{
		if(i>=(a+1))
		{
			count=count+1;
		}
		else
		{
			count=count+0;
		}
	}
	printf("%d",count);
}
//007
void phepTinhPhucTap()
{
	int a,b;
	printf("Nhap hai so a va b\n");
	scanf("%d%d",&a,&b);
	printf("Tong cong tich cua hai so do la %d",a+b+a*b);
}
//008
void kyTuCu()
{
	char a;
	printf("Nhap chu cai in thuong\n");
	scanf("%c",&a);
	printf("Chu cai in hoa %d",a+32);
}
//009
void vongTronChu()
{
	int b;
	char a;
	scanf("%c%d",&a,&b);
	printf("%c",a+b);
}
//010
void chuCaiLienTruoc()
{
	char a;
	scanf("&c",&a);
	printf("&c",a-33);
}
//014
void chuCaiNamGiua()
{
	char a,b;
	scanf("%c",&a);
	scanf("%c",&b);
	printf("%d",a-b-1);
}
//017
void lailatamgiac()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a+b)>=c||(a+c)>=b||(b+c)>=a)
	{
		printf("yes")
	}
	else
	{
		printf("no")
	}
}

	 

int main(){
	soGapDoi();
	phepTinh1();
	kyTuMoi();
	soSoHang();
	soSoHang2();
	chuCaiNamGiua();
	return 0;
}

