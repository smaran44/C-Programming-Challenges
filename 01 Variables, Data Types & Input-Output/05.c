/*Create a program that declares one variable of each of the fundemental
data types and prints their size using sizeof() operator*/

#include <stdio.h>

int main() {
  int integer;
  float decimal;
  double doub;
  char character;

  printf("\nThe size of int is %lu bytes", sizeof(integer));
  printf("\nThe size of float is %lu bytes", sizeof(decimal));
  printf("\nThe size of double is %lu bytes", sizeof(doub));
  printf("\nThe size of char is %lu bytes", sizeof(character));
}
/*In our program, we used %lu (for unsigned long) in the printf statements when printing the size of different data types using the sizeof() operator.
 This is because sizeof() returns a value of type size_t, which is an unsigned integer type.
Why not use %d?
%d is used for int, which is a signed integer.
sizeof() returns size_t, which is an unsigned type (typically unsigned long on many systems).
Using %d could cause a warning or even undefined behavior if size_t has a larger range than int.*/

/*
1. Signed Data Types
A signed data type can store both positive and negative numbers.
📌 Default Behavior
By default, int, char, and short are signed unless explicitly declared otherwise.
Example: int x; is the same as signed int x;

2. Unsigned Data Types
An unsigned data type can store only positive numbers, including zero.

Key Differences:
Feature	                     Signed	                            Unsigned
Stores	                     Positive & Negative	              Only Positive
Example Range(4-byte int)	  -2,147,483,648 to 2,147,483,647	    0 to 4,294,967,295
Example Range(1-byte char)	-128 to 127	                        0 to 255

Why Does sizeof() Return size_t, Which Is Unsigned?
sizeof() returns a size in bytes, which is always a non-negative value.
Since there’s no need for negative sizes, it makes sense to use an unsigned type (size_t).*/