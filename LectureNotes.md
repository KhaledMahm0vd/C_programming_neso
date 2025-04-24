Neso Academy:

c is procedural language.

Middle level language

- direct access to memory though pointers.

- bit manipulation using bitwise operators.

- writing assembly code within c code.

wide variety of built-in functions, standard libraries and header files.

  

Variables:

declaration: announcing the properties of the variable to the compiler.

Properties:

1. size of the variable.

2. name of the variable.

int var;

datatype: how much space a variable is going to occupy In memory.

Var: name of the variable.

  

Size of integer:

depends on machine:

2 bytes: 16 bits.

4 bytes: 32 bits.

To know the size programatically:

use sizeof operator:

sizeof is a unary operator and not a function.

```
#include <stdio.h>

  

int main()

{

printf(“%d”, sizeof(int));

return 0;

}

```
  

range of integer:

at 2 bytes (16 bits machine)

unsigned range: 0 to 65535 (2^n -1)

signed range: -32768 to +32767

2’s complement range -(2^(n-1)) to +(2^(n-1) -1)

  

at 4 bytes (32 bits machine)

unsigned range: 0 to 4294967295

signed range: -2147483648 to +21147483647

  

int modifiers:

long and short:

if integer is 4 bytes, short int may be 2 bytes.

```
#include <stdio.h>

  

int main()

{

printf(“%d”, sizeof(short int));

return 0;

}
```

if integer is 4 bytes, long int may be 8 bytes.

```
#include <stdio.h>
int main()
{
printf(“%d”, sizeof(long int));
return 0;
}
```

  

Note: by default int some_variable_name; is signed integer variable.

unsigned int some_variable_name; allows only positive values.

1. sizeof(short) <= sizeof(int) <= sizeof(long).

2. writing signed int some_variable_name; is equivalent to int some_variable_name;

3. %d is used to print "signed integer".

4. %u is used to print "unsigned integer".

5. %ld is used to print "long integer" equivalent to "signed long integer".

6. %lu is used to print "unsigned long integer".

7. %lld is used to print "long long integer".

8. %llu is used to print "unsigned long long integer".

  

Exceeding the valid range of datatypes returns wrong values.

  

Character data type:

char some_variable_name = “N”;

  

```
#include <stdio.h>

int main()

{

char var = 65; // assigns character based on ASCII code.

printf(“%c\n”, var);

return 0;

}
```

  

size and range of character:

size: 1 byte = 8 bits.

Range: unsigned 0:255

signed: -128:+127

in traditional ASCII table, each character requires 7 bits.

In extended ASCII table, each character requires 8 bits.

  

Float → 4 bytes = 32 bits. 4 bytes (ubuntu 22.04 x64)

Double → 8 bytes = 64 bits. 8 bytes (ubuntu 22.04 x64)

Long Double → 12 bytes = 96 bits. 16 bytes (ubuntu 22.04 x64)

Size of these data types totally depends from system to system.

  

Float → IEEE 754 Single precision floating point.

Double → IEEE 754 Double Precision floating point.

Long Double → Extended Precision Floating point.

  

  

  

  

```
#include <stdio.h>
int main()
{
float var1 = 3.1415926535897932;
double var2 = 3.1415926535897932;
long double var3 = 3.1415926535897932;
printf("%ld\n", sizeof(float));
printf("%ld\n", sizeof(double));
printf("%ld\n", sizeof(long double));
printf("%.16f\n", var1);
printf("%.16f\n", var2);
printf("%.21Lf\n", var3);
}
```

  

```
#include <stdio.h>

int main()

{

int var = 4/9;

printf("%d\n", var); // 0

float var1 = 4/9;

printf("%.2f\n", var1); //0.00

float var2 = 4.0/9.0;

printf("%.2f\n", var2); //0.44

}
```

  

Question 001:

```
#include <stdio.h>

  

int main(){

printf("%d", printf("%s", "Hello World!\n")); //prints Hello World and Count.

return 0;

}

```
  

%s is used to print “String of Characters”.

Printf not only prints the content on the screen. It also returns the number of characters that it successfully prints on the screen.

  
```

#include <stdio.h>

  

int main(){

printf("%10s", "Hello"); //prints hello preceeded by 5 spaces.

return 0;

}
```

  

```
#include <stdio.h>

  

int main(){

char c = 255;

c = c +10;

printf("%d", c); //prints 9

return 0;

}
```

  

correct definitions of integer:

I. signed int n;

II. signed n;

III. Unsigned n;

IV. long n;

V. long int n;

VI. long long n;

  

```
#include <stdio.h>

  

int main(){

unsigned i = 1;

int j = -4;

printf("%u", i+j); //prints integer value depends from machine to machine.

return 0;

}
```

  

-3 in 2s complement representation:

step 1: take 1s complement of 3

3 = 00000000 00000000 00000000 00000011

1s complement of 3 = 11111111 11111111 11111111 11111100

step 2: add 1 to the result. It will give:

11111111 11111111 11111111 11111101 = 4294967293

  

Scope:

scope = lifetime.

The area under which a variable is applicable or alive.

Strict Defintion:

a block or a region where a variable is declared, defined and used and when a block or a region ends, variable is automatically destroyed.

  

```
#include <stdio.h>

int main()

{

int var = 34;

printf("%d", var); // scope of this variable is within main() function only. Therefore called Local to main() function.

return 0;

}

int fun()

{

printf("%d", var); // trying to access variable “var” outside main() function.

}
```

```
#include <stdio.h>

  

int main()

{

int var = 3;

int var = 4; // raises an error because var is already defined in same scope.

printf("%d\n", var);

printf("%d", var);

return 0;

}
```

  

another program:

#include <stdio.h>

  

int main()

{

int var = 3;

{

int var = 4;

printf("%d\n", var);

}

printf("%d", var);

return 0;

}

the above program prints 4 then 3

  

#include <stdio.h>

int fun();

  

int var = 10; // global variable.

  

int main()

{

int var = 3; // local variable.

printf("%d\n", var);

fun();

return 0;

}

int fun()

{

printf("%d", var);

} // prints 3 then 10

  

Auto Modifier:

Auto means automatic:

Variables declared inside a scope by default are automatic variables.

Syntax: auto int some_var_name;

#include <stdio.h> #include <stdio.h>

int main(){ int main(){

int var; auto int var;

return 0; return 0;

} }

1. if you won’t initialize auto variable, by default it will be initialized with some garbage (random) value.

  

#include <stdio.h>

  

int main(){

auto int var;

printf("%d\n", var); // prints random number.

return 0;

}

  

2. on the other hand, global variables by default initialized to 0.

#include <stdio.h>

  

int var; // always initialized to 0;

int main(){

printf(“%d”, var);

return 0;

}

  

Extern Modifier:

  

int var; extern int var;

declaration and definition declaration

  

- extern is short name for external.

- used when a particular file needs to access a variable from another file.

  

- when we write extern some_data_type some_variable_name; no memory is allocated. Only property of variable is announced.

- multiple declarations of extern variable is allowed within the file. This is not the case with automatic variables.

- extern variables says to compiler “go outside from my scope and you will find the definition of the variable that I declared”.

- compiler believes that whatever the extern variable said is true and produce no error. Linker throws an error when it finds no such variable exist.

- when an external variable is initialized, then memory for this variable is allocated and it will be considered defined.

  

13. Variable Modifiers:

Memory:

Register memory very small memory but fastest.

cache memory

main memory → primary memory.

Magnetic disks → auxillary memory

magnetic tapes → auxillary memory. Slowest memory.

  

Register modifier:

syntax: register some_data_type some_variable_name

  

  

  

  

#include <stdio.h>

int main(){

register int var;

return 0;

}

  

What’s register modifier?

- register keyword hints the compiler to store a variable in register memory.

- this is done because access time reduces greatly for most frequently referred variables.

- this is the choice of compiler whether it puts the given variable in register or not.

- usually compiler themselves do the necessary optimizations.

  

- The static variable remains in memory even it’s declared within a block, on the other hand automatic variable is destroyed after the completion of function in which it was declared.

- static variable if declared outside the scope of any function will act like global variable but only within the file in which it was declared.

- you can only assign a constant literal or value to a static variable.

  

Constants in C:

Constant once defined can’t be modified later in the code.

-- Defining Constants:

→ using #define syntax: #define NAME value

NAME → also called Macro, job of preprocessor to replace NAME with value.

→ using const

  

example:

#include <stdio.h>

#define PI 3.14159 // do not add semicolon at the end.

  

int main(){

printf(“%.5f”, PI);

return 0;

}

  

takeways of constants:

1. do not add semicolon at the end of constant.

2. choosing capital letters for NAME is good practice.

3. Whatever inside double quotes “” won’t get replaced.

4. we can use macros like function.

  

Example:

#include <stdio.h>

#define add(x, y) x+y

  

int main() {

printf(“addition of two numbers: %d”, add (4,3));

return 0;

}

  

5. we can write multiple lines using \

  

#include <stdio.h>

#define greater(x, y) if(x > y)\

printf(“%d is greater than %d”, x, y);\

else\

printf(“%d is lesser than %d”, x, y);

int main(){

greater (5 ,6);

return 0;

}

  

6. First expansion then evaluation:

#include <stdio.h>

#define add(x, y) x+y

  

int main(){

printf(“result of expression a * b + c is: %d”, 5 * add(4, 3)); // answer is 23.

}

  

7. some predefined macros like __DATE__, __TIME__ can print current date and time.

#include <stdio.h>

  

int main(){

printf(“Date: %s\n”, __DATE__); // date of compilation.

printf(“Time: %s\n”, __TIME__); // time of compilation.

return 0;

}

  

Constants part 2:

Define Constants using const.

Syntax:

const some_data_type some_variable_name

  

#include <stdio.h>

  

int main()

{

int var = 67;

var = 57; // var will change to 57.

printf(“%d”, var);

}

  

------------------------------------------------------------

#include <stdio.h>

  

int main()

{

const int var = 67;

var = 60; // will raise an error: assignment of read-only variable.

printf(“%d”, var);

}

  

  

#include <stdio.h>

  

int main(){

int var = 052; // preceeding 0 converts the number to octal.

printf(“%d”, var); // will print to 42 in decimal.

return 0;

}

=================================================

  

#include <stdio.h>

  

int main(){

int var = 052;

printf(“%o”, var); // will print 52 in octal.

return 0;

}

======================================

  

#include <stdio.h>

  

#define STRING "%s\n"

#define NESO "Welcome to neso academy!"

  

int main(){

printf(STRING, NESO); //prints: Welcome to neso academy!

return 0;

}

  

======================================

  

scanf:

stands for scan formatted string

accept character, string and numeric data from the user using standard input – keyboard.

scanf also use format specifiers like printf

for example:

%d to accept input of integer type.

%c to accept input of character type.

%s to accept a string.

  

Example:

int var;

scanf(“%d”, &var); // do not forget the ampersand symbol.

  

Why &?

while scanning the input, scanf needs to store that input data somewhere.

To store this input data, scanf needs to know the memory location of a variable.

& is also called as address-of operator.

&var == address-of var

  

#include <stdio.h>

  

int main()

{

int a, b;

printf("Enter first number\n");

scanf("%d", &a);

printf("Enter second number\n");

scanf("%d", &b);

printf("%d + %d = %d\n", a, b, a+b);

return 0;

}

  

===================================

#include <stdio.h>

  

int main(){

int var = 0x43FF; //0x is a prefix for hexadecimal.

printf("%x", var); //will print 43FF.

return 0;

}

======================================

#include <stdio.h>

  

int main()

{

int var = 0X43FF; //0X --> prefix for hexadecimal.

printf("%d", var); //will print decimal.

return 0;

}

===========================================

#include <stdio.h>

  

static int i;

static int i = 27;

static int i;

int main(){

static int i;

printf("%d", i); // will print 0

return 0;

}

==========================================

  

Memory layout of C program:

Two memory segments:

1. text/code segment: Contains machine code of the compiled program.

2. Data segment:

a. initialized: Global, extern, static (both local and global) const global variables.

I. Read only.

II. Read Write.

b. Uninitialized: uninitialized global, static (both local and global) constant global variables.

: uninitialized data segment also have read-only and read write sections.

(bss – Block started by symbol).

c. stack

d. heap.

  

20. Introduction to operators in c:

arithmetic operators → +,-,*,/,%

Increment / decrement operators → ++, --

Relational operators → ==, !=, <=, >=, < , >

Logical operators → &&, ||, !

Bitwise operators → &, ^, |, ~, >>, <<

Assignment operators → = , +=, -=, *=, /=, %=, <<=, >>=, &=, ^=, |=

other operators → ?= & * sizeof() ,

  

21. **Arithmetic operators:**

arithmetic operators → +,-,*,/,%

all are binary operators → means two operands are required to perform operation.

  

#include <stdio.h>

  

int main(){

int a , b;

printf(“enter the first number\n”);

scanf(“%d”, &a);

printf(“Enter the second number\n”);

scanf(“%d”, &b);

  

printf(“a / b = %d\n”, a/b);

printf(“a / b = %d\n”, a%b);

return 0;

}

  

operator precedence and associativity:

|   |   |   |
|---|---|---|
  
|Precedence|Operators|Associativity|
|Highest|*, /, %|Left to right|
|Lowest|+, -|Left to right|

  

Note: Associativity is used only when two or more operators are of same precedence.

For example: +, -

Same precedence therefore, we use associativity.

  
```
#include <stdio.h>

  

int main(){

int a = 2, b = 3, c = 4, d = 5;

printf("a * b / c = %d\n", a*b/c);

printf("a + b - c = %d\n", a+b-c);

printf("a + b * d - c %% a = %d\n", a+b*d-c%a);

return 0;

}
```
  

22. **Increment and decrement in C:**

# Increment operator is used to increment the value of a variable by one.

Similarly, decrement operator is used to decrement the value of a variable by one.

  

Increment: Decrement:

int a = 5; int a = 5;

a++; a--;

  

a = 6 a = 4

  

**# increment and decrement operators:**

* Both are unary operators:

- because they are applied on single operand. a++; not a++a;

* pre and post:

- pre-increment operator: ++a;

- post-increment operator: a++;

- pre-decrement operator: --a;

- post-decrement operator: a--;

* you cannot use **rvalue** before or after increment / decrement operator.

Example:

(a+b)++; → error! ++(a+b); → error!

  

Lvalue (left value): simply means an object that has an identifiable location in memory (i.e. having an address).

- in any assignment statement “lvalue” must have the capability to hold the data.

- lvalue must be a variable because they have the capability to store the data.

- lvalue cannot be a function, expression (like a+b) or a constant (like 3,4 etc).

  

Rvalue (right value): simply means an object that has no identifiable location in memory.

  

- Anything which is capable of returning a constant expression or value.

- Expressions like a +b will return some constant value.

  

Difference between pre & post increment and decrement:

pre- means first increment / decrement then assign it to another variable.

Post- means first assign it to another variable then increment/decrement.

  

  

What is the output of the following C program?

  

#include <stdio.h>

  

int main(){

int a =4, b = 3;

printf(“%d”, a+++b);

return 0;

}

  

# Token Generation:

* lexical analysis is the first phase in the compilation process.

* Lexical analyzer (scanner) scans the whole source program and when it finds the meaningful sequence of characters (lexemes) then it converts it into a token.

* Token: lexeme mapped into token-name and attribute-value.

Example: int → <keyword, int>

* it always matches the longest character sequence.

int a = 5; → int, a, =, 5, ;

  

so, a+++b → will be a++ then +b

* post increment / decrement in context of equation:

- first use the value in the equation and then increment the value.

* pre increment / decrement in context of equation:

- first increment the value and then use in the equation after completion of the equation.

  

24. Relational Operators:

== → equal to

!= → not equal to

<= → less than or equal to

>= → greater than or equal to

< → less than

> → greater than

  

* All relational operators will return either True or False.

  

4==5 is equivalent to is 4 == 5?

4!=5 is equivalent to is 4 != 5?

  

**025 . Logical operators:**

&& → and

|| → or

! → not

  

&& and || are used to combine two conditions.

&&-returns TRUE when all conditions under consideration are true and return FALSE when any one or more than one condition is false.

  

  

  

  

  

  

For example:

  

int a = 5;

  

if (a == 5 && a != 6 && a <= 56 && a > 4)

{

printf(“Welcome to this beautiful world of operators”);

}

  

|| - returns TRUE when one or more than one condition under consideration is true and returns FALSE when all conditions are false.

  

For example:

  

int a = 5;

if (a != 5 || a == 6 || a >= 56 || a > 4)

{

printf(“Welcome to this beautiful world of operators”);

}

  

! operator is used to complement the condition under consideration.

  

!- returns TRUE when condition is FALSE and returns FALSE when condition is true.

  

For example:

  

int a = 5;

if (!(a == 6))

{

printf(“Welcome to this beautiful world of operators”);

}

  

Concept of short circuit in logical operators:

  

Short circuit in case of &&: simply means if there is a condition anywhere in the expression that returns false, then the rest of the conditions after that will not be evaluated.

  

#include <stdio.h>

  

int main() {

int a = 5, b = 3;

int incr;

  

incr = (a < b) && (b++);

printf(“%d\n”, incr);

printf(“%d”, b);

return 0;

}

  

  

Short circuit in case of ||: simply means if there is a condition anywhere in the expression that returns True, then the rest of the conditions after that will not be evaluated.

  

#include <stdio.h>

  

int main() {

int a = 5, b = 3;

int incr;

  

incr = (a > b) && (b++);

printf(“%d\n”, incr);

printf(“%d”, b);

return 0;

}

  

**026 – Bitwise operators in C : part 001**

* it does bitwise manipulation.

& → AND

| → OR

~ → NOT

<< → left shift

>> → Right shift

^ → XOR

  

Bitwise AND (&) operator:

* it takes two bits at a time and perform AND operation.

* AND is binary operator. It takes two numbers and performs bitwise AND.

* Result of AND is 1 when both bits are 1.

  

Bitwise OR (|) operator:

* it takes two bits at a time and perform OR operation.

* OR (|) is binary operator. It takes two numbers and performs bitwise OR.

* Result of OR is 0 when both bits are 0.

  

Bitwise NOT (~) operator:

* NOT is a unary operator.

* it’s job is to complement each bit one by one.

* Result of NOT is 0 when bit is 1 and 1 when bit is 0.

  

**Difference between bitwise and logical operators:**

#include <stdio.h>

  

int main(){

char x = 1, y = 2; //x = 1 (0000 0001), y = 2 (0000 0010)

if(x&y) //1&2 = 0 (0000 0000)

printf("Result of x&y is 1\n"); //will not print

else

printf("Result of x&y is 0\n"); //will print

if(x&&y) //1&&2 = TRUE && TRUE = TRUE = 1

printf("Result of x&&y is 1\n");

return 0;

}

**027 – Bitwise operators in c – part 002**

Left shift operator:

first operand << second operand

whose bits get left shifted Decides the number of places to shift the bits.

  

* when bits are shifted left then trailing positions are filled with zeros.

How left shift works?

Var << 1

left shift by 1 position

var = 3

3 = 0000 0011 → 0000 011_ → 0000 0110 = 6

  

* left shifting is equivalent to multiplication by

2 ^ right operand

example:

var = 3;

var << 1 output: 6 = [3x2^1]

var << 4 output: 48 = [3x2^4]

  

**028 – Bitwise operators in c – part 003**

Right shift operator:

first operand >> second operand

whose bits get right shifted Decides number of places to shift the bits.

  

* when bits are right shifted then leading positions are filled with zeros.

  

#include <stdio.h>

  

int main(){

char var = 3; // Note: 3 in binary = 0000 0011

printf("%d", var >> 1); //prints 1

return 0;

}

  

* How right shift works?

Var >> 1 var = 3

3 = 0000 0011

right shift by 1 position _000 0001

leading position filled with zero 0000 0001

  

* Right shifting is equivalent to division by 2 ^ right operand

  

example:

var = 3; var >> 1 output: 1 [3 / 2^1]

var = 32; var >> 4 output: 2 [3/2^4]

  

**029 – Bitwise operators in C – Bitwise XOR operator:**

  

Inclusive OR:

* either A is 1 or B is 1 or both are 1, then the output is 1.

* Including Both.

  

|   |   |   |
|---|---|---|
  
|A|B|A OR B|
|0|0|0|
|0|1|1|
|1|0|1|
|1|1|1|

  

Exclusive OR – XOR

* either A is 1 or B is 1 then the output is 1 but when both are 1 then output is 0

* Excluding both:

  

  

|   |   |   |
|---|---|---|
  
|A|B|A OR B|
|0|0|0|
|0|1|1|
|1|0|1|
|1|1|0|

  

* bitwise XOR (^) is binary operator. It takes two numbers and performs bitwise XOR.

* result of XOR is 1 when two bits are different otherwise the result is 0.

#include <stdio.h>

  

int main(){

int a = 4, b = 3;

a = a ^ b;

b = a ^ b;

a = a ^ b;

  

printf("after XOR, a = %d and b = %d\n", a,b);

return 0;

}

  

  

**030 – Assignment Operators in C:**

  

Values to a variable can be assigned using assignment operator.

Requires two values – L-value and R-value

the operator copies R-Value to L-value.

Var = 5;

  

Shorthand assignment operators:

  

+= first addition then assignment.

-= first subtraction then assignment.

*= first multiplication then assignment.

/= first division then assignment.

  

Example: a += 1 is equivalent to a = a + 1

similar concept for other shorthand assignment operators as well:

%= first modulus then assignment

<<= first bitwise left shift then assignment

>>= first bitwise right shift then assignment

&= first bitwise AND then assignment

|= first bitwise OR then assignment

^= first bitwise XOR then assignment

  

#include <stdio.h>

  

int main(){

char a = 7;

a ^= 5;

printf("%d\n", printf("%d\n", a+=3));

return 0;

}

  

  

**031 – Conditional Operator in C:**

? :

char result; char result;

int marks; int marks;

if (marks > 33) result = (marks > 33) ? “p” : “f”;

{

result = “p”;

}

else

{

result = “f”

}

  

---------------------------------------------------------------------------------------------

result = (marks > 33) ? “p” : “f”;

(marks > 33) is a boolean expression, therefore it will return either TRUE or FALSE.

(marks > 33) ? “p” : “f”; is a conditional expression, which is after all an expression, therefore it is an r-value and result is l-value.

  

* Conditional operator is the only ternary operator available in the list of operators in C language.

* As in [Expression 1 ? Expression 2 : Expression 3], expression1 is the boolean expression. If we simply write 0 instead of some boolean expression than that simply means FALSE and therefore expression3 will get evaluated.

  

Example:

int result;

result = 0 ? 2 : 1

  

#include <stdio.h>

  

int main(){

int var = 75;

int var2 = 56;

int num;

  

num = sizeof(var) ? (var2 > 23 ? ((var == 75) ? 'A' : 0) : 0) : 0;

  

printf("%d\n", num);

return 0;

}

  

  

**032.Comma operator in C:**

1. comma operator can be used as a “separator”.

Example:

int a = 3, b=4, c=8; //multiple definition in a single line.

  

2. comma operator can be used as an “operator”.

int a = (3,4,8);

printf(“%d”, a); //output: 8

  

Comma operator returns the **rightmost** operand in the expression and it simply evaluates the rest of the operands and finally rejects them.

  

Example:

int var = (printf(“%s\n”, “HELLO!”), 5);

printf(“%d”, var);

  

Output: HELLO!

5

#include <stdio.h>

  

int main(){

int var = (printf("%s\n", "HELLO!"), 5);

printf("%d\n", var);

return 0;

}

  

3. comma operator is having least precedence among all the operators available in C language.

  

Example 1:

int a = 3, 4, 8;

printf(“%d”, a) // output : 3

  

int a;

(a = 3), 4, 8;

printf(“%d”, a); //output: 3

  

Comma operator acts like a separator within function calls and definitions, variable declarations and enum declarations.

  

#include <stdio.h>

  

int main(){

int var;

int num;

  

num = (var = 15, var + 35);

printf("%d\n", num); // will print 50.

return 0;

}

  

**033. Precedence and associativity of operators:**

  

# Precedence of operators:

* Precedence of operators come into picture when in an expression we need to decide which operator will be evaluated first.

* operator with higher precedence will be evaluated first.

Example: 2 + 3 * 5 → 17

  

# Associativity of operators:

* Associativity of operators came into picture when precedence of operators are same and we need to decide which operator will be evaluated first.

  

Example: 10 / 2 * 5

- left to right: (10/2)*5 = 25

- right to left: 10 / (2 * 5) = 1

  

|   |   |   |
|---|---|---|
  
|Category|Operators|Associativity|
|Parenthesis/brackets|() [] -> . ++ -- post fix|Left to right|
|Unary|! ~ **++ --** **prefix** + - * & (type) sizeof|Right to left|
|Multiplicative|* / %|Left to right|
|Additive|+ -|Left to right|
|Bitwise shift|<< >>|Left to right|
|Relational|< <= > >=|Left to right|
|Equality|“==” “!=”|Left to right|
|Bitwise AND|&|Left to right|
|Bitwise XOR|^|Left to right|
|Bitwise OR|\||Left to right|
|Logical AND|&&|Left to right|
|Logical OR|\||Left to right|
|Conditional|? :|Right to left|
|Assignment|“=” “+=” “-=” “*=” “/=” “%=” “&=” “^=” “\|=” “<<=” “>>=”|Right to left|
|Comma|,|Left to right|

  

() - parenthesis in function calls.

Example: int var =fun();

= operator is having less precedence as compared to () therefore, () belongs to fun and fun will be treated as a function.

  

Member Access operators (-> .)

- they are used to access members of structures.

  

Postfix Increment / Decrement (++, --)

precedence of postfix increment / decrement operator is greater than prefix increment / decrement.

Associativity of postfix is also different from prefix. Associativity of postfix operators is from **left to right** and that of **prefix** operators is from **right to left**.

  

* Associativity can only help if there are two or more operators of same precedence and not when there is just one operator.

  

  

#include <stdio.h>

int fun1();

int fun2();

int main(){

int a;

a = fun1() + fun2();

printf("%d\n", a);

return 0;

}

int fun1()

{

printf("Hello");

return 1;

}

int fun2()

{

printf("World!\n");

return 1;

}

  

# it is not defined whether fun1() will be called first or whether fun2() will be called. Behaviour is undefined and output is compiler dependent.

  

Note: Here Associativity will not come into picture as we have just one operator and which function will be called first is undefined. Associativity will only work when we have more than one operators of same precedence.

  

**034. Operators in C:**

#include <stdio.h>

  

int main()

{

int i = 5;

int var = sizeof(i++);

printf("%d %d", i, var); // 5 4

return 0;

}

  

According to C99 standard:

the sizeof operator yields the size (in bytes) of its operand, which may be an expression or a parenthesized name of a type. The size is determined from the type of the operand.

if the type of the operand is a variable length array type, then the operand is evaluated; otherwise, the operand is not evaluated and the result is an integer constant.

  

  

035_operators in C:

#include <stdio.h>

  

int main(){

int a = 1;

int b = 1;

int c = ++a || b++; //because of short circuit, b++ will never get excuted.

int d = b-- && --a;

  

printf("%d %d %d %d" ,d,c,b,a); // 1101

return 0;

}

  

38. conditionals: switch:

  

switch is a great replacement to long else if constructs.

  

Example:

  

#include <stdio.h> // using if-else

  

int main(){

int x = 2;

  

if (x == 1)

printf("x is 1");

else if(x == 2 )

printf("x is 2");

else if(x == 3)

printf("x is 3");

else

printf("x is another number");

return 0;

}

  

#include <stdio.h> //using switch

  

int main(){

int x = 2;

switch(x)

{

case 1: printf("x is 1");

break;

case 2: printf("x is 2");

break;

case 3: printf("x is 3");

break;

default: ("x is another number");

break;

}

}

# facts related to switch:

1. you’re not allowed to add duplicate cases.

2. only those expressions are allowed in switch which results in an integral constant value.

#include <stdio.h>

  

int main(){

int a = 1, b =2 , c =3;

switch(a+b*c)

{

case 1: printf("Choice 1");

break;

case 2: printf("choice 2");

break;

default: printf("default");

break;

}

return 0;

}

  

3.float value is not allowed as a constant value in case label. Only integer constants / constant expressions are allowed in case label.

#include <stdio.h>

int main(){

int x = 23;

switch(x)

{

case 3+3: printf("choice 1");

break;

case 3+4*5: printf("choice 2");

break;

default: printf("default");

break;

}

return 0;

}

  

4. Variable expressions are not allowed in case labels. Although macros are allowed.

  

5. Default can be placed anywhere inside switch. It will still get evaluated if no match is found.

#include <stdio.h>

  

int main(){

int x = 2;

switch(x)

{

default: printf("default case");

break;

case 1: printf("Number is 1");

break;

case 2: printf("Number is 2");

break;

}

return 0;

}

  

**039. for and while loops:**

  

while loops:

syntax:

while(expression)

{

statement1;

statement2;

}

  

example:

int i = 3;

while (i > 0)

{

printf(i);

i--;

}

  

#include <stdio.h>

  

int main(){

int i = 3;

while (i > 0)

{

printf("%d\n", i);

i--;

}

return 0;

}

  

# for loop:

for(initialization; condition; increment/decrement)

{

statements;

}

  

#include <stdio.h>

  

int main(){

for (int i = 3; i > 0; i--)

{

printf("%d\n", i);

}

return 0;

}

  

**040_do-while_loop:**

Difference between while loop and do-while loop:

while do-while

int i = 0; int I =0;

while(i > 0) do

{ {

printf(“%d”, I); printf(“%d”, I);

i--; i--;

} }while(i>0);

  

  

Output: No Output. Output : 0

  

41. Loop control statements:

Break: used to terminate from the loop.

Example: program to allow user to enter integers until a negative number or zero is entered.

  

#include <stdio.h>

  

int main(){

int n;

printf("Enter a number\n");

scanf("%d", &n);

  

while(n != 0){

if(n<0)

break;

printf("Enter a number\n");

scanf("%d", &n);

}

}

  

  

Continue:

- similar to break but instead of terminating from the loop, it forces to execute the next iteration of the loop.

Example: program to print all odd numbers from 1 to 20

  

//program to print all odd numbers from 1 to 20

  

#include <stdio.h>

  

int main(){

int i, n = 2;

for(i=1; i<=20; i++)

{

if(i==n)

{

n = n + 2;

continue;

}

printf("%d\n", i);

}

}

  

**043.**

#include <stdio.h>

  

int main(){

int i;

for(i=0; i<20; i++)

{

switch(i)

{

case 0: i += 5;

case 1: i += 2;

case 5: i += 5;

default: i += 4; //there is no break after cases, all cases will get evaluated.

}

printf("%d\n", i); //will print 16, 21.

}

}

  

  

044.

#include <stdio.h>

  

int main()

{

int i = -5;

while(i <= 5 )

{

if(i >= 0)

break;

else

{

i++;

continue;

}

printf("test\n"); // will print 0 times

}

}

  

another fragment: will print “one”

#include <stdio.h>

  

int main()

{

int i = 0;

for(printf("one\n"); i < 3 && printf(""); i++)

{

printf("Hi! \n");

}

return 0;

}

  

  

**047_pyramid of stars:**

to create a pyramid of stars, you need two variables, one for rows and one for columns.

If n is no. of rows, then 2n-1 will be no of columns.

  

#include <stdio.h>

  

int main()

{

int n, i, j;

printf("How many rows you want in your pyramid?\n");

scanf("%d\n", &n);

  

for(i=1; i<=n; i++)

{

for(j=1; j <= 2*n-1; j++)

{

if(j >= n-(i-1) && j <= n+(i-1))

{

printf("*");

}

else

printf(" ");

}

printf("\n");

}

return 0;

}

  

  

**048. Palindromes**

  

basics:

What is a palindrome?

A number or a word or a phrase if read backwards gives the same number or a word or a phrase as it is being read forward.

  

Example: 1221, racecar. 24542.

  

Idea: make last number the first number, 2nd last number the second number and so on.

That means you need to reverse the number and if the reserved number is equal to the actual number than we can say that the number is palindrome.

  

#include <stdio.h>

  

int main(){

int n, result = 0, q, rem;

printf("Please enter the number: ");

scanf("%d", &n);

  

q = n;

while(q!=0)

{

rem = q%10;

result = result * 10 + rem;

q = q / 10;

}

if(result == n)

printf("It's a palindrome");

else

printf("No! it is not a palindrome");

return 0;

}

  

  

**049_Armstrong Number:**

Armstrong number: An armstrong number of order n is a number in which each digit when multiplied by itself n number of times and finally added together results the same number.

  

For example:

371 is a 3 digit number. Therefore its order is 3

Now here, each digit is multiplied by itself 3 times and finally added together and results in our original number

example:

3*3*3 + 7*7*7 + 1*1*1 = 27 +343 + 1 = 371

  

How to write a program which checks whether a number is an Armstrong number or not?

  

Step #1 – first find out, how many digits are there in your number?

  

Count = 0;

while(q != 0)

{

q = q / 10;

count++;

}

  

371/10 = 37 → count = 1.

37/10 = 3 → count = 2.

3/10 = 0 → count = 3

  

Step #2: Multiply each digit n times (in our example, n= 3) and add them.

  

Cnt = count, result = 0;

while(q != 0)

{

rem = q%10;

while(cnt!=0)

{

mul = mul * rem;

cnt--;

}

result = result + mul;

cnt = count;

q = q / 10;

mul = 1;

}

  

Step #3 – check whether the calculated result is equal to the actual number or not.

  

if(result == number)

printf(“%d is an Armstrong number”, number);

else

printf(“%d is not an Armstrong number”, number);

//incorrect output

#include <stdio.h>

  

int main(){

int number, count = 0, result = 0, mul = 1, cnt, rem;

printf("Please enter a number:");

scanf("%d", &number);

  

int q = number;

while(q != 0)

{

q = q / 10;

count++;

}

cnt = count;

q = number;

  

while(q != 0)

{

rem = q%10;

while(cnt != 0)

{

mul = mul * rem;

cnt--;

}

result = result * mul;

cnt = count;

q = q /10;

mul = 1;

}

if(result == number)

{

printf("%d is an Armstrong number", number);

}

else

{

printf("%d is not an Armstrong number", number);

}

return 0;

}

  

**050. Strong Number:**

Write a program to check whether a number is a strong number?

Strong Number: is a number in which the sum of factorial of individual digits of a number is equal to the original number.

  

For example:

145 = 1! + 4! + 5! = 1 + 24 + 120 = 145

  

Factorial basics:

Definition: Factorial of a positive integer n, Is the number which is obtained by multiplying all positive integers less than or equal to n.

  

3! = 3 * 2 * 1 = 6

5! = 5 * 4 * 3 * 2 * 1 = 120

  

in general,

n! = n * (n-1) * (n – 2) * …. * 3 * 2 * 1

  

Steps :

Step #1 – Calculate the factorial of each digit of a number and add them:

q = n, fact = 1, result = 0;

while(q != 0)

{

rem = q%10;

for(i=1; i<= rem; i++)

{

fact = fact * I;

}

result = result + fact;

fact = 1;

q = q / 10;

}

  

step #2 – Check whether the calculated result is equal to the actual number or not.

  

if(result == number)

printf(“%d is a strong number”, number);

else

printf(“%d is not a strong number”, number);

  

//check whether a number is a strong number.

#include <stdio.h>

  

int main()

{

int n, q, rem, fact =1, i, result =0;

printf("Please enter a number: ");

scanf("%d", &n);

  

q = n;

while(q != 0)

{

rem = q %10;

for(i = 1; i<= rem; i++)

{

fact = fact * i;

}

result = result + fact;

fact = 1;

q = q / 10;

}

if(result == n)

printf("%d is a strong number\n", n);

else

printf("%d is not a strong number", n);

  

return 0;

}

  

**051. prime numbers:**

prime number – A number greater than 1 is called a prime number, if it has only two factors, namely and the number itself.

Example: 2,3,5,7,11

Composite number – A composite number is a positive integer which is not prime i.e. which has factors other than 1 and itself.

Example: 4,6,8,9,10

  

Question – Is 1 a prime number?

Solution – No. it is not a prime number because according to the definition of prime numbers – A prime number is a number which has exactly two divisors, 1 & itself. But 1 has only one divisor i.e. itself. Therefore it is not a prime number.

  

Another reason – it violates the fundamentals theorem of arithmetic.

According to this theorem – every positive integer greater than one can be written uniquely as the product of primes.

  

In order to find whether a number is prime or not.

We first need to calculate the square root of that number and then we divide that number by numbers less than or equal to the square root of that number. If it is divisible by any of the numbers than we can say that the number is not a prime number else it is a prime number.

  

Example: suppose we need to find whether 23 is a prime number or not.

Step 1: take square root of 23. which is nearly 4.7958 = 5

step 2: divide 23 by numbers greater than 2 and less than or equal to 5. if it is divisible by any of those numbers than it is not prime else it is prime.

  

As 23 is not divisible by any of those numbers therefore, 23 is a prime number.

  

gcc 051.prime_number.c -lm -o 051_prime_number

Note that `-lm` appears after the name of the source file (or the object file if you compile the source to object before linking.

#include <math.h>

#include <stdio.h>

  

int main()

{

int x;

int i, val1, val2, count=0;

printf("Please enter a number (only positive integers): ");

scanf("%d", &x);

  

val1 = ceil(sqrt(x));

val2 = x;

  

for(i=2; i<= val1; i++)

{

if(val2%i == 0)

count=1;

}

if((count==0 && val2 != 1) || val2 == 2 || val2 == 3)

printf("%d is a prime number", val2);

else

printf("%d is not a prime number", val2);

return 0;

}

  

part1 : finding the square root:

  

#include <math.h>

int main()

{

int x, val1;

val1 = ceil(sqrt(x));

}

  

* sqrt means square root

* available in math.h library

syntax: double sqrt(double x)

  

* ceil function returns a samllest integer greater than or equal to x.

* available in math.h library

syntax: double ceil(double x)

  

example: sqrt(2) = 1.414

ceil(1.414) = 2

  

**052_ addition without operator (part1):**

write a program to add two numbers without using “+” operator.

Idea: is to use increment and decrement operators.

  

X = 3, y=4

Algorithm:

step 1: x++; y--;

step 2: repeat step 1 until y becomes 0.

  

//program to add two numbers without plus operator.

#include <stdio.h>

int main()

{

int x , y;

printf("Enter the two numbers you want to add: ");

scanf("%d %d", &x, &y);

  

while(y != 0)

{

x++;

y--;

}

printf("Sum of two values is %d", x);

return 0;

}

  

**053. addition without + operator – part 2:**

write a program to add two numbers without using “+” operator.

Idea is to use half adder logic.

  

Half adder basics:

|   |   |   |   |
|---|---|---|---|
   
|A|B|S|C|
|0|0|0|0|
|0|1|1|0|
|1|0|1|0|
|1|1|0|1|

  

S = A XOR B

C = A AND B

  

Implementation:

while (b != 0)

{

sum = a^b;

carry = (a&b)<<1;

a = sum;

b = carry;

}

  

5 → 0101

10 → 1010

---------------

15 → 1111

  

sum 1111 carry 0000

  

//program to add two numbers without using the plus sign using half adder.

  

#include <stdio.h>

int main()

{

int sum , carry, a, b;

printf("Enter the two numbers: ");

scanf("%d %d", &a, &b);

  

while(b != 0)

{

sum = a ^ b;

carry = (a & b) <<1;

a = sum;

b = carry;

}

printf("Sum of two numbers is: %d", sum);

return 0;

}

  
  

**054_ Fibionacci series:**

write a program to print Fibionacci series upto n number of terms.

The term Fibionacci comes from the name of an italian Mathematician Leonadro of pisa, known as Fibionacci.

  

What is Fibionacci Series?

In fibionacci series, next term is obtained by taking sum of previous two terms:

  

|   |   |   |   |   |   |   |
|---|---|---|---|---|---|---|
      
|N|1|2|3|4|5|6|
|fib(n)|0|1|1|2|3|5|

  

Mathematically,

fib(n) = fib(n-1) + fib(n-2)

  

//program to print fibionacci series up to n.

  

#include <stdio.h>

int main()

{

int a, b, result, n, i;

printf("Enter the number: ");

scanf("%d", &n);

  

a=0;

b=1;

  

for (i=1; i<=n; i++)

{

printf("%d\n", a);

result = a + b;

a = b;

b = result;

}

}

  

**055_Floyd’s triangle:**

  

Floyd’s triangle (named after a computer scientist – robert w. floyd) is a right—angled triangular array of natural numbers.

It is filled by natural numbers consecutively starting with 1 in the top left corner.

  

For example: A floyd’s triangle with 5 rows

1

2 3

4 5 6

7 8 9 10

11 12 13 14 15

  

//program to print Floyd's tringle on the screen.

#include <stdio.h>

int main()

{

int i, j, rows, n=1;

printf("Enter the number of rows: ");

scanf("%d", &rows);

  

for(i=1; i<=rows; i++)

{

for(j= 1; j<=i; j++)

{

printf("%d ", n);

n++;

}

printf("\n");

}

return 0;

}

  

**056_binary to decimal conversion:**

//program to convert binary to decimal.

#include <stdio.h>

int main()

{

int binary, decimal, weight, rem;

printf("Enter the binary number: ");

scanf("%d", &binary);

  

decimal = 0; weight =1;

while(binary != 0)

{

rem = binary % 10;

decimal = decimal + rem * weight;

binary = binary / 10;

weight = weight * 2;

}

printf("decimal number is %d\n", decimal);

}

  

**057_calculating power of an integer:**

  

a ^ b = a x a x a .. b times, where a and b are integers.

  

// calculating power of an integer.

  

#include <stdio.h>

int main()

{

int base, exponent, expo, power=1;

double power1 = 1.0;

printf("Enter the base: ");

scanf("%d", &base);

printf("Enter the exponent: ");

scanf("%d", &exponent);

  

expo = exponent;

if(exponent > 0)

{

while(exponent != 0)

{

power = power * base;

exponent--;

}

printf("%d to the power of %d is %d", base, expo, power);

}

else{

while(exponent != 0)

{

power1 = power1 * (1.0/base);

exponent++;

}

printf("%d to the power of %d is %0.10f", base, expo, power1);

}

}

  

**058_leap_year:**

  

basics:

Leap year is a year having 366 days.

The extra day is the 29th february.

Leap year arrives after 4 years.

Note:

every year that is exactly divisible by 4 is a leap year, except the centurial year that is exactly divisible by 100. but these centurial years are leap year if they are exactly divisible by 400.

  

#include <stdio.h>

  

int main()

{

int year;

printf("Enter the year: ");

scanf("%d", &year);

  

if(year % 400 == 0)

printf("%d is a leap year", year);

else if(year % 100 == 0)

printf("%d is not a leap year", year);

else if(year % 4 == 0)

printf("%d is a leap year", year);

else

printf("%d is not a leap year", year);

return 0;

}

  

**059_perfect number:**

  

what is a perfect number?

Perfect number is a positive integer that is equal to the sum of all its proper positive divisors excluding the number itself.

  

For example:

6 is a perfect number, because the proper positive divisors of 6 are 1, 2,3 (excluding 6)

and sum of all its positive divisors i.e. 1+2+3 = 6

//program to check whether a number is a perfect number or not.

#include <stdio.h>

  

int main()

{

int number;

printf("Enter the number: ");

scanf("%d", &number);

  

int i, rem, sum=0;

for(i =1; i<number; i++)

{

rem = number % i;

if(rem == 0)

{

sum = sum + i;

}

}

if(sum == number)

printf("%d is a perfect number\n", number);

else

printf("%d is not a perfect number\n", number);

return 0;

}

  

**060_Introduction to functions in C:**

basics of function:

Definition:

Function is basically a set of statements that takes takes inputs, perform some computation and produces output.

  

Syntax:

Return_type function_name(set_of_inputs)

inputs provided to the function

  

#include <stdio.h>

  

int areaOfRect(int length, int breadth)

{

int area;

area = length * breadth;

return area;

}

int main()

{

int l =10, b = 5;

int area = areaOfRect(l, b);

printf("%d\n", area);

}

  

**061_ Function Declaration:**

Function declaration (also called function prototype) means declaring the properties of a function to the compiler.

For example:

int fun(int, char);

  

properties:

1. name of function: fun 2. Return type of function int

  

* it is not necessary to put the name of the parameters in the function prototype.

For example:

int fun(int var1, char var2);

  

#include <stdio.h>

  

char fun(); // function prototype

int main()

{

char c = fun();

printf("character is: %c", c);

}

  

char fun()

{

return 'a';

}

  

**062_ Function definition in C:**

Function Definition:

it consists of block of code which is capable of performing some specific task.

For example:

int add(int a, int b)

{

int sum;

sum = a + b;

return sum;

}

  

#include <stdio.h>

int add(int, int);

int main()

{

int m = 20, n = 30, sum;

sum = add(m, n);

printf("sum is %d", sum);

return 0;

}

  

int add(int a, int b)

{

return (a+b);

}

  

Parameter: is a variable in the declaration and definition of the function.

Argument: is the actual value of the parameter that gets passed to the function.

  

Parameter is also called as Formal Parameter and argument is also called actual parameter.

  

  

**063_ Functions – call by value and call by reference:**

**call by value:**

Here values of actual parameters will be copied to formal parameters and these two different parameters store values in different locations

  

int fun(int x, int y)

{

x=20;

y=10;

}

int x =10, y=20;

fun (x, y);

printf(“x = %d, y = %d”, x, y);

  

output: x = 10, y = 20

  

**call by reference:**

here both actual and formal parameters refers to same memory location. Therefore, any changes made to the formal parameters will get reflected to actual parameters.

  

int fun(int *ptr1, int *ptr2)

{

*ptr1 = 20;

*ptr2 = 10;

}

int x =10, y=20;

fun (&x, &y);

printf(“x = %d, y = %d”, x, y);

  

output: x = 20, y = 10

  

**064_ Functions solved question 1**

#include <stdio.h>

int func(int num);

int main() {

int number = 435;

int result = func(number);

printf("The number of set bits in the binary representation of %d is: %d\n", number, result);

return 0;

}

  

int func(int num) {

int count = 2;

while (num) {

count++;

num >>= 2;

}

return count;

}

  

  

**065_Functions Solved Question**

#include <stdio.h>

  

void f1(int a, int b)

{

int c;

c = a; a = b; b = c;

}

void f2(int *a, int *b)

{

int c;

c = *a; *a = *b; *b = c;

}

int main()

{

int a = 4, b = 5, c = 6;

f1(a, b);

f2(&b, &c);

printf("%d", c-a-b);

return 0;

}

  

**066_ Functions Solved Question:**

#include <stdio.h>

  

int fun()

{

static int num = 16;

return num--;

}

  

int main()

{

for(fun();fun();fun())

printf("%d", fun());

return 0;

}

  

**067_ Static Functions in C:**

Basics:

* In C, functions are global by default.

* this means if we want to access the function outside from the file where it is declared, we can access it easily.

* Now if we want to restrict this access, then we make our function static by simply putting a keyword **static** in front of the function.

  

  

**068_ static and dynamic scoping: part_1:**

* stack is a container (or memory segment) which holds some data.

* Data is retrieved in Last In First Out (LIFO) fashion.

* Two operations: push and pop

* Activation Record: is a portion of a stack which is generally composed of:

1. locals of the callee.

2. Return address to the caller.

3. Parameters of the callee.

  

**# Static Scoping:**

In static scoping: (or lexical scoping), definition of a variable is resolved by searching its containing block or function. If that fails, then searching the outer containing block and so on.

  

**# Dynamic Scoping:**

in dynamic scoping, definition of a variable is resolved by searching its containing block and if not found, then searching its calling function and if still not found then the function which called that calling function will be searched and so on.

  

# Important takeaways:

1. in most programming languages, static scoping is followed instead of dynamic scoping.

2. Languages, including Algol, Pascal, C, Haskell, ..etc, are statically scoped.

3. Some languages including APL, LISP, are dynamically scoped.

4. As C follows static scoping, therefore it is not possible to see programmatically, how dynamic scoping works in c.

  

074_ Recursion in C:

Recursion is a process in which a function calls itself directly or indirectly.

For example:

  

int fun()

{

…

fun();

}

  

int fun(int n)

{

if( n== 1)

return 1;

else

return 1 + fun(n-1);

}

  

int main(){

int n=3;

printf("%d", fun(n));

return 0;

}

  

**075_How to write a recursive program:**

Idea:

1. divide the problem into smaller sub-problems.

2. Specify the base condition to stop the recursion.

  

Types of recursion:

  

1. direct recursion:

a function is called direct recursion if it calls the same function again:

  

Structure of direct recursion:

fun(){

//some code

fun();

//some code

}

  

2. indirect recursion:

A function (let say fun) is called indirect recursive if it calls another function (let say fun2) and then fun2 calls fun directly or indirectly.

  

Structure of indirect recursion:

fun(){

//some code

fun2();

//some code

}

fun2(){

//some code

fun();

//some code

}

  

3. tail recursion.

4. non-tail recursion.

  

077_
