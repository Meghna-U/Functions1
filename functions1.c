#include<stdio.h>
int lcm(int a,int b);
int main()
{
	int x,y;
	printf("Input first number:");
	scanf("%d",&x);
	printf("Input second number:");
	scanf("%d",&y);
	int z=lcm(x,y);
	printf("LCM of %d and %d=%d",x,y,z);
	return 0;
}
int lcm(int p,int q)
{
	static int t=1;
	if(t%p==0 && t%q==0)
	{
		return t;
	}
	else
	{
		t++;
		lcm(p,q);
		return t;
	}
}
