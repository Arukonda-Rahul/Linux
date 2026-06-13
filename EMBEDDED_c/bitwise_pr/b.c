#include<stdio.h>
#define SET_(a,p) (a|(0x1<<p))
#define CLEAR_(a,p) (a&(~(0x1<<p)))
#define TOGGLE_(a,p) (a^(0x1<<p))
#define CHECK_(a,p) (a&(0x1<<p))
int main()
{
	int a,p;
	printf("enter a\n");
	scanf("%d",&a);
	printf("enter position\n");
	scanf("%d",&p);
	printf("after Set:%d\n",SET_(a,p));
	printf("after Clear:%d\n",CLEAR_(a,p));
	printf("after Toggle:%d\n",TOGGLE_(a,p));
	printf("ON/OFF:%d",CHECK_(a,p));
	return 0;
}

