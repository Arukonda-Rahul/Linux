/*

4) read an integer and print it back in complete number name expansion with place values as below:

eg., 458
output : four hundred fifty eight

eg., 1458
output: two thousand four hundred fifty eight

*/


#include<stdio.h>
int main()
{
	int n,i,x,rem,rev=0;
	char *dm1[]={" ","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	char *dm2[]={" ","ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
	char *dm3[]={"Hundred","thuosand","lakh"};
	char *res[10];
	printf("Enter an integer:\n");
	scanf("%d",&n);
	x=n;
	rem=x%100000;
	x=x/100000;
	if(x!=0)
	{
		if(x<20)
			printf("%s ",dm1[x]);
		else
			printf("%s %s ",dm2[(x/10)],dm1[x%10]);
		printf("%s ",dm3[2]);
	}
	x=rem/1000;
	if(x!=0)
	{
		if(x<20)
			printf("%s ",dm1[x]);
		else
			printf("%s %s ",dm2[(x/10)],dm1[x%10]);
		printf("%s ",dm3[1]);
	}
	x=rem=rem%1000;
	x=x/100;
	if(x!=0)
	{
		printf("%s ",dm1[x]);
		printf("%s ",dm3[0]);
	}
	x=rem%100;
	if(x!=0)
	{
		if(x<20)
			printf("%s ",dm1[x]);
		else
			printf("%s %s ",dm2[(x/10)],dm1[x%10]);
	}
	printf("\n");
	return 0;
}

