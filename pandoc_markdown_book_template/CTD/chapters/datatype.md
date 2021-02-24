# Data Types in C
Each variable in C has an associated data type. Each data type requires different amounts of memory and has some specific operations which can be performed over it. Let us briefly describe them one by one:
Following are the examples of some very common data types used in C:

* **char:** The most basic data type in C. It stores a single character and requires a single byte of memory in almost all compilers.
* **int:** As the name suggests, an int variable is used to store an integer.
* **float:** It is used to store decimal numbers (numbers with floating point value) with single precision.
* **double:** It is used to store decimal numbers (numbers with floating point value) with double precision. 

Different data types also have different ranges upto which they can store numbers. These ranges may vary from compiler to compiler. Below is list of ranges along with the memory requirement and format specifiers on 32 bit gcc compiler.

<table> 
<tr>
<td>Data Type </td> <td> Memory (bytes)</td> <td> Range</td> <td> Format Specifier</td>
</tr>

<tr>
<td>short int </td> <td> 2</td> <td> -32,768 to 32,767 </td> <td> %hd</td>
</tr>

<tr>
<td>unsigned short int </td> <td> 2</td> <td> 0 to 65,535</td> <td> %hu</td>
</tr>

<tr>
<td>unsigned int </td> <td> 4</td> <td> 0 to 4,294,967,295 </td> <td> %u</td>
</tr>

<tr>
<td>int </td> <td> 4</td> <td> -2,147,483,648 to 2,147,483,647</td> <td> %d</td>
</tr>

<tr>
<td>long int </td> <td> 4</td> <td> -2,147,483,648 to 2,147,483,647 </td> <td> %ld</td>
</tr>

<tr>
<td>unsigned long int</td> <td> 4</td> <td> 0 to 4,294,967,295 </td> <td> %lu</td>
</tr>

<tr>
<td>long long int  </td> <td> 8</td> <td> -(2^63) to (2^63)-1 </td> <td> %lld</td>
</tr>

<tr>
<td>unsigned long long int   </td> <td> 8</td> <td> 0 to 18,446,744,073,709,551,615  </td> <td> %llu</td>
</tr>

<tr>
<td>signed char  </td> <td> 1</td> <td> -128 to 127 </td> <td> %c</td>
</tr>

<tr>
<td>unsigned char  </td> <td> 1</td> <td> 0 to 255 </td> <td> %c</td>
</tr>

<tr>
<td>float  </td> <td> 4</td> <td>  </td> <td> %f</td>
</tr>

<tr>
<td>double  </td> <td> 8</td> <td>  </td> <td> %lf</td>
</tr>

<tr>
<td>long double (long long float)  </td> <td> 16</td> <td>  </td> <td> %Lf</td>
</tr>
</table>
We can use the sizeof() operator to check the size of a variable. See the following C program for the usage of the various data types:

```C
#include <stdio.h>
int main()
{
	int a = 1;
	char b = 'G';
	double c = 3.14;
	printf("Hello World!\n");

	// printing the variables defined 
	// above along with their sizes
	printf("Hello! I am a character. My value is %c and "
		"my size is %lu byte.\n",
		b, sizeof(char));
	// can use sizeof(b) above as well

	printf("Hello! I am an integer. My value is %d and "
		"my size is %lu bytes.\n",
		a, sizeof(int));
	// can use sizeof(a) above as well

	printf("Hello! I am a double floating point variable."
		" My value is %lf and my size is %lu bytes.\n",
		c, sizeof(double));
	// can use sizeof(c) above as well

	printf("Bye! See you soon. :)\n");

	return 0;
}
```
**Output:** 

```console
Hello World!
Hello! I am a character. My value is G and my size is 1 byte.
Hello! I am an integer. My value is 1 and my size is 4  bytes.
Hello! I am a double floating point variable. My value is 3.140000 and my size i
s 8 bytes.
Bye! See you soon. :)
```