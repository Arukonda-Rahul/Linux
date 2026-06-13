/*2 Note down the differences between Call by Value and Call by Reference and when to use what.


**Call by Value:**
1. In Call by Value, a copy of the actual argument's value is passed to the function parameter.
2. The function operates on the copy of the value, so any changes made to the parameter 
within the function do not affect the original argument outside the function.
3. Call by Value is simpler and safer, as the function cannot inadvertently modify the original value.
4. It is used when you want to ensure that the original value remains unchanged after the function call.
5. Primitive data types (int, float, char, etc.) are often passed by value.

**Call by Reference:**
1. In Call by Reference, a reference to the actual argument's memory location (address)
is passed to the function parameter.
2. The function can directly modify the original argument through this reference, and 
changes are reflected outside the function.
3. Call by Reference can lead to unintended modifications of the original data if not used carefully.
4. It is used when you want the function to modify the original data or when passing large 
data structures to avoid the overhead of copying.
5. Pointers are commonly used to implement Call by Reference in C.

**When to use what:**
1. Use Call by Value when you want to ensure that the original data remains unchanged after the function call. 
This is often the safer option, especially for simple data types.
2. Use Call by Reference when you want the function to modify the original data or 
when you are dealing with large data structures where copying would be inefficient.
This can lead to more efficient code execution.
3. If you use Call by Reference, make sure to properly document your code and
consider the potential side effects of modifying the original data.

In C, it's also worth noting that although C technically only supports Call by Value, 
you can achieve Call by Reference-like behavior by passing pointers as function arguments,
effectively passing the memory address of the data to the function.
This allows you to modify the original data within the function. 
However, this approach requires careful management of pointers to avoid memory-related issues
like segmentation faults or memory leaks.

*/
