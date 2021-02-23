# C/C++ Tokens
A token is the smallest element of a program that is meaningful to the compiler. Tokens can be classified as follows:  

1. Keywords
1. Identifiers
1. Constants
1. Strings
1. Special Symbols
1. Operators

**1. Keywords:** Keywords are pre-defined or reserved words in a programming language. Each keyword is meant to perform a specific function in a program. Since keywords are referred names for a compiler, they can’t be used as variable names because by doing so, we are trying to assign a new meaning to the keyword which is not allowed. You cannot redefine keywords. However, you can specify the text to be substituted for keywords before compilation by using C/C++ preprocessor directives. C language supports 32 keywords which are given below: 
<table>
auto         double      int        struct
break        else        long       switch
case         enum        register   typedef
char         extern      return     union
const        float       short      unsigned
continue     for         signed     void
default      goto        sizeof     volatile
do           if          static     while
</table>
While in C++ there are 31 additional keywords other than C Keywords they are: 

<table>
asm          bool        catch          class
const_cast   delete      dynamic_cast   explicit 
export       false       friend         inline 
mutable      namespace   new            operator 
private      protected   public         reinterpret_cast
static_cast  template    this           throw
true         try         typeid         typename 
using        virtual     wchar_t 
</table>

**2. Identifiers:** Identifiers are used as the general terminology for the naming of variables, functions and arrays. These are user-defined names consisting of an arbitrarily long sequence of letters and digits with either a letter or the underscore(_) as a first character. Identifier names must differ in spelling and case from any keywords. You cannot use keywords as identifiers; they are reserved for special use. Once declared, you can use the identifier in later program statements to refer to the associated value. A special kind of identifier, called a statement label, can be used in goto statements. 

**There are certain rules that should be followed while naming c identifiers:**
 
* They must begin with a letter or underscore(_).
* They must consist of only letters, digits, or underscore. No other special character is allowed.
* It should not be a keyword.
* It must not contain white space.
* It should be up to 31 characters long as only the first 31 characters are significant.
* **main**: method name.
* **a**: variable name.

**3. Constants:** Constants are also like normal variables. But, the only difference is, their values can not be modified by the program once they are defined. Constants refer to fixed values. They are also called literals. 
Constants may belong to any of the data type

**Syntax:**
```C
const data_type variable_name; (or) 
const data_type *variable_name; 
```
Types of Constants: 

1. Integer constants – Example: 0, 1, 1218, 12482
1. Real or Floating-point constants – Example: 0.0, 1203.03, 30486.184
1. Octal & Hexadecimal constants – Example: octal: (013 )8 = (11)10, Hexadecimal: (013)16 = (19)10
1. Character constants -Example: ‘a’, ‘A’, ‘z’
1. String constants -Example: “GeeksforGeeks”

**4. Strings:** Strings are nothing but an array of characters ended with a null character (‘\0’). This null character indicates the end of the string. Strings are always enclosed in double-quotes. Whereas, a character is enclosed in single quotes in C and C++.Declarations for String: 
 

* char string[20] = {‘g’, ’e’, ‘e’, ‘k’, ‘s’, ‘f’, ‘o’, ‘r’, ‘g’, ’e’, ‘e’, ‘k’, ‘s’, ‘\0’};
* char string[20] = “geeksforgeeks”;
* char string [] = “geeksforgeeks”;
* when we declare char as “string[20]”, 20 bytes of memory space is allocated for holding the string value.
* When we declare char as “string[]”, memory space will be allocated as per the requirement during the execution of the program.

**5. Special Symbols:** The following special symbols are used in C having some special meaning and thus, cannot be used for some other purpose.[] () {}, ; * = # 
 

* **Brackets[]:** Opening and closing brackets are used as array element reference. These indicate single and multidimensional subscripts.
* **Parentheses():** These special symbols are used to indicate function calls and function parameters.
* **Braces{}:** These opening and ending curly braces mark the start and end of a block of code containing more than one executable statement.
* **Comma ( , ):** It is used to separate more than one statements like for separating parameters in function calls.
* **Colon( : ):** It is an operator that essentially invokes something called an initialization list.
* **Semicolon( ; ):** It is known as a statement terminator.  It indicates the end of one logical entity. That’s why each individual statement must be ended with a semicolon.
* **Asterisk ( * ):** It is used to create a pointer variable.
* **Assignment operator( = ):** It is used to assign values.
* **Pre-processor ( # ):** The preprocessor is a macro processor that is used automatically by the compiler to transform your program before actual compilation.

**6. Operators:** Operators are symbols that trigger an action when applied to C variables and other objects. The data items on which operators act upon are called operands. 
Depending on the number of operands that an operator can act upon, operators can be classified as follows: 
 

**Unary Operators:** Those operators that require only a single operand to act upon are known as unary operators.For Example increment and decrement operators
**Binary Operators:** Those operators that require two operands to act upon are called binary operators. Binary operators are classified into : 

1. Arithmetic operators
1. Relational Operators
1. Logical Operators
1. Assignment Operators
1. Conditional Operators
1. Bitwise Operators