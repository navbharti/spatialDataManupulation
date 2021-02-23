# Variables and Keywords in C

A **variable** in simple terms is a storage place which has some memory allocated to it. Basically, a variable used to store some form of data. Different types of variables require different amounts of memory, and have some specific set of operations which can be applied on them.

**Variable Declaration:** 
A typical variable declaration is of the form: 

```C
type variable_name; or 
//for multiple variables:
type variable1_name, variable2_name, variable3_name;
```
A variable name can consist of **alphabets** (both upper and lower case), **numbers** and the **underscore** `‘_’` character. However, the name must not start with a number.

**Difference b/w variable declaration and definition**
**Variable declaration** refers to the part where a variable is first declared or introduced before its first use. **Variable definition** is the part where the variable is assigned a memory location and a value. Most of the times, variable declaration and definition are done together.

See the following C program for better clarification:

```C
#include <stdio.h>
int main()
{
	// declaration and definition of variable 'a123'
	char a123 = 'a'; 
	
	// This is also both declaration and definition as 'b' is allocated
	// memory and assigned some garbage value. 
	float b; 
	
	// multiple declarations and definitions
	int _c, _d45, e; 
	
	// Let us print a variable
	printf("%c \n", a123);
	
	return 0;
}
```
**Output:**

```console
a
```
Is it possible to have separate declaration and definition? 
It is possible in case of extern variables and functions. See question 1 of this for more details. 

**Rules for defining variables**

A variable can have alphabets, digits, and underscore.
A variable name can start with the alphabet, and underscore only. It can’t start with a digit.
No whitespace is allowed within the variable name.
A variable name must not be any reserved word or keyword, e.g. int, goto , etc.
**Types of Variables in C** 
**1. Local Variable**
A variable that is declared and used inside the function or block is called local variable. 
It’s scope is limited to function or block. It cannot be used outside the block.Local variables need 
to be initialized before use. 

Example – 

```C
#include <stdio.h>
void function() {
    int x = 10; // local variable
}

int main()
{
    function();
}
```

In the above code x can be used only in the scope of function() . Using it in main function will give error.

**2. Global Variable**
A variable that is declared outside the function or block is called a global variable. 
It is declared at the starting of program. It is available to all the functions. 

Example –  

```C
#include <stdio.h>
int x = 20;//global variable
void function1()
{
	printf("%d\n" , x);
}
void function2()
{
	printf("%d\n" , x);
}
int main() {

	function1();
	function2();
	return 0;
}
```
**Output:** 

```console
20 
20
```

In the above code both the functions can use global variable x as we already global variables are accessible by all the functions.

**3. Static Variable**
A variable that retains its value between multiple function calls is known as static variable. 
It is declared with the static keyword. 

Example- 

```C
#include <stdio.h>
void function(){ 
	int x = 20;//local variable 
	static int y = 30;//static variable 
	x = x + 10; 
	y = y + 10; 
	printf("\n%d,%d",x,y); 
} 
int main() {

	function();
	function();
	function();
	return 0;
}
```
**Output:**

```console
30,40
30,50
30,60
```
In the above example , local variable will always print same value whenever function will be called whereas static variable will print the incremented value in each function call.

**4. Automatic Variable**
All variables in C that are declared inside the block, are automatic variables by default. We 
can explicitly declare an automatic variable using auto keyword.Automatic variables are similar as 
local variables. 

Example –  

```C
#include <stdio.h>
void function()
{
	int x=10;//local variable (also automatic) 
	auto int y=20;//automatic variable
}
int main() {

	function();
	return 0;
}
```
In the above example both x and y are automatic variables .The only difference is that variable y is explicitly declared with auto keyword.

**5. External Variable**
External variable can be shared between multiple C files.We can declare external variable using extern keyword.

Example: 

```C
myfile.h

extern int x=10;//external variable (also global)  

   
program1.c
#include "myfile.h"  
#include <stdio.h>  
void printValue(){  
printf("Global variable: %d", global_variable);  
}
```
In the above example x is an external variable which is used in multiple files.

**Keywords** are specific reserved words in C each of which has a specific feature associated with it. Almost all of the words which help us use the functionality of the C language are included in the list of keywords. So you can imagine that the list of keywords is not going to be a small one!

There are a total of 44 keywords in C (C89 – 32, C99 – 5, C11 – 7): 

<table>
<tr>
<td>auto</td> <td>extern</td> <td>short</td> <td>while</td>
</tr>
<tr>
<td>break</td> <td>float</td> <td>signed</td> <td>_Alignas</td>
</tr>
<tr>
<td>case</td> <td>for</td> <td>sizeof</td> <td>_Alignof</td>
</tr>
<tr>
<td>char</td> <td>goto</td> <td>static</td> <td>_Atomic</td>
</tr>
<tr>
<td>const</td> <td>if</td> <td>struct</td> <td>_Bool</td>
</tr>
<tr>
<td>continue</td> <td>inline</td> <td>switch</td> <td>_Complex</td>
</tr>
<tr>
<td>default</td> <td>int</td> <td>typedef</td> <td>_Generic</td>
</tr>
<tr>
<td>do</td> <td>long</td> <td>union</td> <td>_Imaginary</td>
</tr>
<tr>
<td>double</td> <td>register</td> <td>unsigned</td> <td>_Noreturn</td>
</tr>
<tr>
<td>else</td> <td>restrict</td> <td>void</td> <td>_Static_assert</td>
</tr>
<tr>
<td>enum</td> <td>return</td> <td>volatile</td> <td>_Thread_local</td>
</tr>
</table>

Most of these keywords have already been discussed in the various sub-sections of the C language, like Data Types, Storage Classes, Control Statements, Functions etc.

Let us discuss some of the other keywords which allow us to use the basic functionality of C:

const: const can be used to declare constant variables. Constant variables are variables which, when initialized, can’t change their value. Or in other words, the value assigned to them cannot be modified further down in the program. 
**Syntax:**

```C
const data_type var_name = var_value;
```
Note: Constant variables must be initialized during their declaration. const keyword is also used with pointers. Please refer the const qualifier in C for understanding the same.

**extern**: extern simply tells us that the variable is defined elsewhere and not within the same block where it is used. Basically, the value is assigned to it in a different block and this can be overwritten/changed in a different block as well. So an extern variable is nothing but a global variable initialized with a legal value where it is declared in order to be used elsewhere. It can be accessed within any function/block. Also, a normal global variable can be made extern as well by placing the ‘extern’ keyword before its declaration/definition in any function/block. This basically signifies that we are not initializing a new variable but instead we are using/accessing the global variable only. The main purpose of using extern variables is that they can be accessed between two different files which are part of a large program. 
**Syntax:** 

```C
extern data_type var_name = var_value;
```
**static:** static keyword is used to declare static variables, which are popularly used while writing programs in C language. Static variables have a property of preserving their value even after they are out of their scope! Hence, static variables preserve the value of their last use in their scope. So we can say that they are initialized only once and exist till the termination of the program. Thus, no new memory is allocated because they are not re-declared. Their scope is local to the function to which they were defined. Global static variables can be accessed anywhere within that file as their scope is local to the file. By default, they are assigned the value 0 by the compiler. 
**Syntax:**

```C
static data_type var_name = var_value;
```
**void:** void is a special data type. But what makes it so special? void, as it literally means, is an empty data type. It means it has nothing or it holds no value. For example, when it is used as the return data type for a function it simply represents that the function returns no value. Similarly, when its added to a function heading, it represents that the function takes no arguments. 
Note: void also has a significant use with pointers. Please refer to the void pointer in C for understanding the same.

**typedef:** typedef is used to give a new name to an already existing or even a custom data type (like a structure). It comes in very handy at times, for example in a case when the name of the structure defined by you is very long or you just need a short-hand notation of a per-existing data type.

Let’s implement the keywords which we have discussed above. Take a look at the following code which is a working example to demonstrate these keywords:  

```C
#include <stdio.h>

// declaring and initializing an extern variable
extern int x = 9; 

// declaring and initializing a global variable
// simply int z; would have initialized z with
// the default value of a global variable which is 0
int z=10;

// using typedef to give a short name to long long int 
// very convenient to use now due to the short name
typedef long long int LL; 

// function which prints square of a no. and which has void as its
// return data type
void calSquare(int arg) 
{
	printf("The square of %d is %d\n",arg,arg*arg);
}

// Here void means function main takes no parameters
int main(void) 
{
	// declaring a constant variable, its value cannot be modified
	const int a = 32; 

	// declaring a char variable
	char b = 'G';

	// telling the compiler that the variable z is an extern variable 
	// and has been defined elsewhere (above the main function)
	extern int z;

	LL c = 1000000;

	printf("Hello World!\n");

	// printing the above variables
	printf("This is the value of the constant variable 'a': %d\n",a);
	printf("'b' is a char variable. Its value is %c\n",b);
	printf("'c' is a long long int variable. Its value is %lld\n",c);
	printf("These are the values of the extern variables 'x' and 'z'"
	" respectively: %d and %d\n",x,z);

	// value of extern variable x modified
	x=2; 

	// value of extern variable z modified
	z=5; 

	// printing the modified values of extern variables 'x' and 'z'
	printf("These are the modified values of the extern variables"
	" 'x' and 'z' respectively: %d and %d\n",x,z);

	// using a static variable
	printf("The value of static variable 'y' is NOT initialized to 5 after the "
			"first iteration! See for yourself :)\n");

	while (x > 0)
	{
		static int y = 5;
		y++;
		// printing value at each iteration
		printf("The value of y is %d\n",y);
		x--;
	}

	// print square of 5
	calSquare(5); 

	printf("Bye! See you soon. :)\n");

	return 0;
}
```
**Output:**

```console
Hello World
This is the value of the constant variable 'a': 32
'b' is a char variable. Its value is G
'c' is a long long int variable. Its value is 1000000
These are the values of the extern variables 'x' and 'z' respectively: 9 and 10
These are the modified values of the extern variables 'x' and 'z' respectively: 2 and 5
The value of static variable 'y' is NOT initialized to 5 after the first iteration! See for yourself :)
The value of y is 6
The value of y is 7
The square of 5 is 25
Bye! See you soon. :)
```