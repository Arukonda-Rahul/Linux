#include<stdio.h>

int old = 5;
extern int new_var __attribute__((alias("old")));  // Alias 'new_var' to 'old'

int main()
{
    printf("value of new name is: %d\n", new_var);  // Access 'new_var', which refers to 'old'
    return 0;
}

/*
 
 why extern is required here:
 ----------------------------

Alias declaration: 
------------------
When you declare extern int new_var __attribute__((alias("old")));, 
you are not defining the variable new_var (i.e., you're not allocating memory for it).
Instead, you're telling the compiler that new_var is an alias for old.
The alias only needs to be known by the linker, 
and the declaration with extern informs the compiler that this variable will exist elsewhere.

Linkage: 
--------
The extern keyword ensures that the linker resolves new_var to the symbol old (since the alias is defined at the linking stage).
The __attribute__((alias("old"))) tells the linker that any reference to new_var should refer to old. 
Without extern, new_var would be treated as a new and independent symbol.

No memory allocation:
---------------------
When you declare extern,you are not allocating space for new_var in the program. 
Instead, you rely on the linker to resolve new_var to refer to old.
The linker will set up the necessary aliasing so that accessing new_var will actually refer to old.

 */
