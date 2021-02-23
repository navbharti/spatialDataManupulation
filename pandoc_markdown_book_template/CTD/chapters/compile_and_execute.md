# Compiling a C program:- Behind the Scenes
C is a mid-level language and it needs a compiler to convert it into an executable code so that the program can be run on our machine. 

**How do we compile and run a C program?** 
Below are the steps we use on an Ubuntu machine with gcc compiler.
![Terminal](/pandoc_markdown_book_template/CTD/images/compilation.png)
* We first create a C program using an editor and save the file as filename.c 
```console
$ vi filename.c
```
* The diagram on right shows a simple program to add two numbers.

![Terminal](/pandoc_markdown_book_template/CTD/images/compil31.png)
* Then compile it using below command.
```console
 $ gcc –Wall filename.c –o filename
 ```
* The option -Wall enables all compiler’s warning messages. This option is recommended to generate better code. 
The option -o is used to specify the output file name. If we do not use this option, then an output file with name a.out is generated.

![Terminal](/pandoc_markdown_book_template/CTD/images/compil21.png)
* After compilation executable is generated and we run the generated executable using below command. 
 ```console
 $ ./filename 
 ```
**What goes inside the compilation process?**
Compiler converts a C program into an executable. There are four phases for a C program to become an executable: 

1. Pre-processing
1. Compilation
1. Assembly
1. Linking
By executing below command, We get the all intermediate files in the current directory along with the executable.
```console
 $gcc –Wall –save-temps filename.c –o filename 
 ```
The following screenshot shows all generated intermediate files. 
![Terminal](/pandoc_markdown_book_template/CTD/images/compil4.png)
Let us one by one see what these intermediate files contain. 

**Pre-processing**

This is the first phase through which source code is passed. This phase include:  

* Removal of Comments
* Expansion of Macros
* Expansion of the included files.
* Conditional compilation
The preprocessed output is stored in the `filename.i`. Let’s see what’s inside filename.i: using 

```console
$vi filename.i  
```
In the above output, source file is filled with lots and lots of info, but at the end our code is preserved. 
**Analysis:** 

* printf contains now a + b rather than add(a, b) that’s because macros have expanded.
* Comments are stripped off.
* `#include<stdio.h>` is missing instead we see lots of code. So header files has been expanded and included in our source file.

**Compiling**

The next step is to compile `filename.i` and produce an; intermediate compiled output file `filename.s`. This file is in assembly level instructions. Let’s see through this file using 
```console
$vi filename.s  
```
![Terminal](/pandoc_markdown_book_template/CTD/images/image2.png)
The snapshot shows that it is in assembly language, which assembler can understand. 

**Assembly**
In this phase the filename.s is taken as input and turned into filename.o by assembler. This file contain machine level instructions. At this phase, only existing code is converted into machine language, the function calls like printf() are not resolved. Let’s view this file using 
```console 
$vi filename.o 
```
![Terminal](/pandoc_markdown_book_template/CTD/images/compil7.png)
**Linking**

This is the final phase in which all the linking of function calls with their definitions are done. Linker knows where all these functions are implemented. Linker does some extra work also, it adds some extra code to our program which is required when the program starts and ends. For example, there is a code which is required for setting up the environment like passing command line arguments. This task can be easily verified by using `$size filename.o` and `$size filename`. Through these commands, we know that how output file increases from an object file to an executable file. This is because of the extra code that linker adds with our program. 
![Terminal](/pandoc_markdown_book_template/CTD/images/compil8.png)
Note that GCC by default does dynamic linking, so `printf()` is dynamically linked in above program. Refer this, this and this for more details on static and dynamic linkings. 
