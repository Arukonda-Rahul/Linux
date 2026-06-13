/*8) void strcpy ( char d[] . char s[]);
copies all characters from source string (char s[]) to destination string( char d[]) , upto null character ( including null character).*/

#include<stdio.h>
void mystrcpy( char d[], char s[])
{
	int i = 0;
	while( s[i] != '\0')
	{
		d[i] = s[i];
	i++;
	}
	d[i] = '\0';
	printf("After cpy:%s",d);
}
int main()
{
	char s[100];
	char d[100];
	printf("enter string1:\n");
	scanf("%s",s);
	printf("enter string2:\n");
	scanf("%s",d);
	mystrcpy(d,s);
	return 0;
}
	
	
