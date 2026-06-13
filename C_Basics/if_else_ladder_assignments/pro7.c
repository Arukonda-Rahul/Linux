#include<stdio.h>
int main()
{
        float nou,bill,extrau,newuc;
        printf("enter nou:");
        scanf("%f",&nou);
        if(nou<=200)
        {
		bill=100.0;
        }
        if(nou>200)
	{
		if(nou<=400)
       		{
            		extrau=nou-200;
            		newuc=extrau*0.65;
            		bill=newuc+100.0;
	        }
	}
        if(nou>400)
	{
		if(nou<=600)
       		{
           	 	extrau=nou-400;
            		newuc=extrau*0.80;
            		bill=newuc+230.0;
        	}
	}
        if(nou>600)
        {
            extrau=nou-600;
            newuc=extrau*1.00;
            bill=newuc+390.0;
        }
        printf("Bill is:%f",bill);
        return 0;
}
