/*
4 Try experimenting with the below array syntaxes and see the results,
check their sizes, try to also read values for elements and print them:</br>
1)int arr[5] = {};
2)int arr[10] = {2.4,5.6,7.3};
3)int arr[3] = {1,2,3,4,5};
4)int arr[0] = {};
5)int arr[0] = {1,2,3,4,5};
6)int arr[] = {};
7)int arr[‘a’];
*/

1)
#include<stdio.h>
int main()
{
    int i,size;
    int arr[5] = {};
    size=sizeof(arr);
    printf("size is:%ld\n",size);
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
}

/*OUTPUT:
20
0
0
0
0
0*/

2)
#include<stdio.h>
int main()
{
    int i,size;
    size=sizeof(arr);
    printf("size is:\n%ld",size);
    int arr[10] = {2.4,5.6,7.3};
    for(i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
}

/*OUTPUT:
40
2
5
7
0
0
0
0
0
0
0
*/


3)

#include<stdio.h>
int main()
{
    int i,size;
    size=sizeof(arr);
    printf("size is:\n%ld",size);
    int arr[3] = {1,2,3,4,5};
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
}

/*OUTPUT:
main.c: In function ‘main’:
main.c:5:25: warning: excess elements in array initializer
    5 |     int arr[3] = {1,2,3,4,5};
      |                         ^
main.c:5:25: note: (near initialization for ‘arr’)
main.c:5:27: warning: excess elements in array initializer
    5 |     int arr[3] = {1,2,3,4,5};
      |                           ^
main.c:5:27: note: (near initialization for ‘arr’)
size is:
12
1
2
3
-1785536000
-106611259
*/



4)

#include<stdio.h>
int main()
{
    int i,size;
    size=sizeof(arr);
    printf("size is:%ld",size);
    int arr[0] = {};
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
}

/*OUTPUT:
size is
00
0
1034306304
838700927
1
0

*/


5)

#include<stdio.h>
int main()
{
    int i,size;
    int arr[0] = {1,2,3,4,5};
    size=sizeof(arr);
    printf("size is:%ld",size);
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
}

/*OUTPUT:
main.c: In function ‘main’:
main.c:5:19: warning: excess elements in array initializer
    5 |     int arr[0] = {1,2,3,4,5};
      |                   ^
main.c:5:19: note: (near initialization for ‘arr’)
main.c:5:21: warning: excess elements in array initializer
    5 |     int arr[0] = {1,2,3,4,5};
      |                     ^
main.c:5:21: note: (near initialization for ‘arr’)
main.c:5:23: warning: excess elements in array initializer
    5 |     int arr[0] = {1,2,3,4,5};
      |                       ^
main.c:5:23: note: (near initialization for ‘arr’)
main.c:5:25: warning: excess elements in array initializer
    5 |     int arr[0] = {1,2,3,4,5};
      |                         ^
main.c:5:25: note: (near initialization for ‘arr’)
main.c:5:27: warning: excess elements in array initializer
    5 |     int arr[0] = {1,2,3,4,5};
      |                           ^
main.c:5:27: note: (near initialization for ‘arr’)
size is
00
0
-65488640
170306404
1
0


*/



6)

#include<stdio.h>
int main()
{
    int i,size;
    int arr[] = {};
    size=sizeof(arr);
    printf("size is:%ld",size);
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
}

/*OUTPUT:
size is 
00
0
1819742464
-816021727
1
0

*/



7)
#include<stdio.h>
int main()
{
    int i,size;
    int arr[‘a’];
    size=sizeof(arr);
    printf("size is:%lu",size);
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
}

/*OUTPUT:
size:388
-164476800
32766
3
0
-164476816

*/







