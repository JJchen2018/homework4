#include"stdio.h"
int main()
{
	int zhengShu;
	int n;
	int z1,z2,z3,z4,z5;

	printf("输入一个不多于5位的正整数 ");
	scanf("%d",&zhengShu);

	if(zhengShu>9999)
	{
	    n=5;
	}
	else if(zhengShu>999)
	{
		n=4;
	}
	else if(zhengShu>99)
	{
		n=3;
	}
	else if(zhengShu>9)
	{
		n=2;
	}
    else
	{
		n=1;
	}
	printf("它是%d位数\n",n);

	printf("每一位数为：");
	z1=zhengShu/10000;
	z2=(zhengShu-z1*10000)/1000;
    z3=(zhengShu-z1*10000-z2*1000)/100;
    z4=(zhengShu-z1*10000-z2*1000-z3*100)/10;
    z5=zhengShu-z1*10000-z2*1000-z3*100-z4*10;
	printf("%d,%d,%d,%d,%d\n",z1,z2,z3,z4,z5);

	printf("逆序数为：");
	if(n==1)
	{
		printf("%d\n",z5);
	}
	else if(n==2)
	{
		printf("%d,%d\n",z5,z4);
	}
	else if(n==3)
	{
		printf("%d,%d,%d\n",z5,z4,z3);
	}
	else if(n==4)
	{
		printf("%d,%d,%d,%d\n",z5,z4,z3,z2);
	}
	else if(n==5)
	{
		printf("%d,%d,%d,%d,%d\n",z5,z4,z3,z2,z1);
	}
	return 0;
}