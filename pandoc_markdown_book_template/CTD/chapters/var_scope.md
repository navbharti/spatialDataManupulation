# Scope rules in C
Scope of an identifier is the part of the program where the identifier may directly be accessible. In C, all identifiers are lexically(or statically) scoped. C scope rules can be covered under the following two categories.

There are basically 4 scope rules:

<table>
<tr>
<td> Scope</td> <td> Meaning</td>
</tr>

<tr>
<td> File Scope</td> <td> 	Scope of a Identifier starts at the beginning of the file and ends at the end of the file. It refers to only those Identifiers that are declared outside of all functions. The Identifiers of File scope are visible all over the file Identifiers having file scope are global
</td>
</tr>

<tr>
<td> Block Scope</td> <td> 	Scope of a Identifier begins at opening of the block / ‘{‘ and ends at the end of the block / ‘}’. Identifiers with block scope are local to their block
</td>
</tr>

<tr>
<td> Function Prototype Scope</td> <td> 	Identifiers declared in function prototype are visible within the prototype
</td>
</tr>

<tr>
<td> Function scope</td> <td> 	Function scope begins at the opening of the function and ends with the closing of it. Function scope is applicable to labels only. A label declared is used as a target to goto statement and both goto and label statement must be in same function
</td>
</tr>
</table>
	

Let’s discuss each scope rules with examples. 

**File Scope:** These variables are usually declared outside of all of the functions and blocks, at the top of the program and can be accessed from any portion of the program. These are also called the global scope variables as they can be globally accessed. 

Example 1:

```C
// C program to illustrate the global scope

#include <stdio.h>

// Global variable
int global = 5;

// global variable accessed from
// within a function
void display()
{
	printf("%d\n", global);
}

// main function
int main()
{
	printf("Before change within main: ");
	display();

	// changing value of global
	// variable from main function
	printf("After change within main: ");
	global = 10;
	display();
}
```
**Output:** 

```console
Before change within main: 5
After change within main: 10
```
Example 2:

```C
// filename: file1.c

int a;

int main(void)
{
a = 2;
}
```
```C
// filename: file2.c
// When this file is linked with file1.c, functions 
// of this file can access a

extern int a;

int myfun()
{
a = 2;
}
```
Note: To restrict access to the current file only, global variables can be marked as static.

**Block Scope:** A Block is a set of statements enclosed within left and right braces i.e. ‘{‘ and ‘}’ respectively. Blocks may be nested in C(a block may contain other blocks inside it). A variable declared inside a block is accessible in the block and all inner blocks of that block, but not accessible outside the block. Basically these are local to the blocks in which the variables are defined and are not accessible outside.

```C
#include <stdio.h>

// Driver Code
int main()
{
	{
		int x = 10, y = 20;
		{
			// The outer block contains
			// declaration of x and
			// y, so following statement
			// is valid and prints
			// 10 and 20
			printf("x = %d, y = %d\n", x, y);
			{
				// y is declared again, 
				// so outer block y is
				// not accessible in this block
				int y = 40;

				// Changes the outer block
				// variable x to 11
				x++;

				// Changes this block's 
				// variable y to 41
				y++;

				printf("x = %d, y = %d\n", x, y);
			}

			// This statement accesses
			// only outer block's
			// variables
			printf("x = %d, y = %d\n", x, y);
		}
	}
	return 0;
}
```
**Output:** 

```console
x = 10, y = 20
x = 11, y = 41
x = 11, y = 20
```
**Function Prototype Scope:** These variables range includes within the function parameter list. The scope of the these variables begins right after the declaration in the function prototype and runs to the end of the declarations list. These scopes don’t include the function definition, but just the function prototype. 

Example: 

```C
// C program to illustrate 
// function prototype scope

#include <stdio.h>

// function prototype scope
//(not part of a function definition)
int Sub(int num1, int num2);

// file scope
int num1;

// Function to subtract
int Sub(int num1, int num2)
{
	return (num1-num2);
}

// Driver method
int main(void)
{
	printf("%d\n", Sub(10,5));
	return 0;
}
```
**Output:** 

```console
5
```
**Function Scope:** A Function scope begins at the opening of the function and ends with the closing of it. Function scope is applicable to labels only. A label declared is used as a target to go to the statement and both goto and label statement must be in the same function. 

Example: 

```C
void func1()
{
	{
		// label in scope even
		// though declared later
		goto label_exec;

	label_exec:;
	}

	// label ignores block scope
	goto label_exec;
}

void funct2()
{

	// throwserror:
	// as label is in func1() not funct2()
	goto label_exec;
}
```
Now various questions may arise with respect to the scope of access of variables: 

**What if the inner block itself has one variable with the same name?**
If an inner block declares a variable with the same name as the variable declared by the outer block, then the visibility of the outer block variable ends at the point of the declaration by inner block.

**What about functions and parameters passed to functions?** 
A function itself is a block. Parameters and other local variables of a function follow the same block scope rules.

**Can variables of the block be accessed in another subsequent block?** 
No, a variable declared in a block can only be accessed inside the block and all inner blocks of this block. 

For example, the following program produces a compiler error. 

```C
int main()
{
{
	int x = 10;
}
{
	// Error: x is not accessible here
	printf("%d", x); 
}
return 0;
}
```
**Error:**

prog.c: In function 'main':
prog.c:8:15: error: 'x' undeclared (first use in this function)
  printf("%d", x); // Error: x is not accessible here
               ^
prog.c:8:15: note: each undeclared identifier is 
reported only once for each function it appears in
Example: 

```C
// C program to illustrate scope of variables

#include<stdio.h>

int main()
{
	// Initialization of local variables
	int x = 1, y = 2, z = 3;

	printf("x = %d, y = %d, z = %d\n",
	x, y, z);
	{

		// changing the variables x & y
		int x = 10;
		float y = 20;
		
		printf("x = %d, y = %f, z = %d\n",
		x, y, z);
		{

			// changing z
			int z = 100;
			printf("x = %d, y = %f, z = %d\n",
			x, y, z);
		}
	}
	return 0;
}
```
**Output:** 

```console
x = 1, y = 2, z = 3
x = 10, y = 20.000000, z = 3 
x = 10, y = 20.000000, z = 100
```