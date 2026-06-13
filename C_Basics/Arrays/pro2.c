/*
2 Write the following program :
Declare a character array without size.
Initialize the array with characters of your name.
Print your name using for loop.
*/


#include <stdio.h>
int main()
{
  char a[]={'r','a','h','u','l'};
  int size = sizeof(a);
  for(int i=0;i<size;i++)
  {
      printf("%c\n",a[i]);
  }
    return 0;
}

