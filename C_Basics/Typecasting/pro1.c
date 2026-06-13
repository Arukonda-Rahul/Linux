#include<stdio.h>
int main()
{
    short int a1=1;
    unsigned short int a2=3;
    int a3=2;
    unsigned a4=2;
    long int a5=3;
    unsigned long int a6=55;
    char c1='a';
    unsigned char c2='b';
    float f=2.1f;
    long l=2222.21;
    long double dl=2323.2;
    printf("%lu\n",sizeof(short int));
    printf("%lu\n",sizeof(unsigned short int));
    printf("%lu\n",sizeof(int));    
    printf("%lu\n",sizeof(unsigned int));  
    printf("%lu\n",sizeof(long int));
    printf("%lu\n",sizeof(unsigned long int));
    printf("%lu\n",sizeof(char));    
    printf("%lu\n",sizeof(unsigned char));  
    printf("%lu\n",sizeof(float));
    printf("%lu\n",sizeof(long));
    printf("%lu\n",sizeof(double));
    printf("%lu\n",sizeof(a1));
    printf("%lu\n",sizeof(a2));
    printf("%lu\n",sizeof(a3));    
    printf("%lu\n",sizeof(a4));  
    printf("%lu\n",sizeof(a5));
    printf("%lu\n",sizeof(a6));
    printf("%lu\n",sizeof(c1));    
    printf("%lu\n",sizeof(c2));  
    printf("%lu\n",sizeof(f));
    printf("%lu\n",sizeof(l));
    printf("%lu\n",sizeof(dl)); 
    printf("%lu\n",sizeof(1));
    printf("%lu\n",sizeof(24));
    printf("%lu\n",sizeof(3223));    
    printf("%lu\n",sizeof(34343));  
    printf("%lu\n",sizeof(3432));
    printf("%lu\n",sizeof(2444));
    printf("%lu\n",sizeof('a'));    
    printf("%lu\n",sizeof('b'));  
    printf("%lu\n",sizeof(0.22f));
    printf("%lu\n",sizeof(133.33));
    printf("%lu\n",sizeof(2324.3234));
    printf("%lu\n",sizeof(a1+a2));
    printf("%lu\n",sizeof(a1-a2));
    printf("%lu\n",sizeof(c1+c2)); 
    printf("%lu\n",sizeof(a1+a2+a3+a4));
 
    
    return 0;
}
