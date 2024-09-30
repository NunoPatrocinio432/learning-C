 ## 1.1 - Getting Started
 - stdio.h -> Standard input/output library  

 - Every program must have a main somewhere  

 - One method of communicating data between functions is for the calling function to provide a list of values, called arguments, to the function it calls.  

 - \n -> newline character; \t -> Tab; \b -> Backspace; \ -> Double Quote; \\ -> Backslash


 ### Exercise 1-1
  - The error is almost always the expect some 'character' before some token

 ### Exercise 1-2
  - It gives a warning: unknown escape sequence: '\c', bue it still compiles and the output is c%.

  ## 1.2 - Variables and Arithmetic Expressions
  - /* */  // -> Comment
  
  - In C, all variables must be declared before they are used, usually at the beginning of the function before any executable statements.

  - 16-bits ints lie between -32768 and +32767.

  - A float number is typically a 32-bit quantity, with at least six significant digits and magnitude generally between about 10-38 and 1038.

  - Some Most Common Types:  
        - int -> Integer  
        - float -> Floating point  
        - char -> character (a single byte)  
        - short -> Short Integer  
        - long -> Long Integer  
        - double -> double-precision floating point  
  
  - The while loop operates as follows: The condition in parentheses is tested. If it is true, he body of the loop (the three statements enclosed in braces) is executed. When the test becomes false e loop ends, and execution continues at the statement that follows the loop.

  - C compilers do not care about how a program looks, proper indentation and spacing are critical in making programs easy for people to read. 

  - In C, as in many other languages, integer division truncates: any fractional part is discarded.

  - Each % construction in the first argument of printf is paired with the corresponding second argument, third argument, etc.; they must match up properly by number and type, or you will get wrong answers.

  - By the way, printf is not part of the C language; there is no input or output defined in C itself. printf is just a useful function from the standard library of functions that are normally accessible to C programs. The behaviour of printf is defined in the ANSI standard, however, so its properties should be the same with any compiler and library that conforms to the standard.

  - If we augment each %d in the printf statement with a width, the numbers printed will be right-justified in their fields.

  - Width and precision may be omitted from a specification: %6f says that the number is to be at least six characters wide; %.2f specifies two characters after the decimal point, but the width is not constrained; and %f merely says to print the number as floating point.

  - Some Print Types:  
        - %d -> Print as decimal integer  
        - %6d -> Print as decimal integer, at least 6 characters wide  
        - %f -> Print as floating point  
        - %6f -> Print as floating point, at least 6 characters wide  
        - %.2f -> Print as floating point, 2 characters after decimal point  
        - %6.2f -> Print as floating point, at least 6 wide and 2 after decimal point  
        - %o -> Octal  
        - %h -> Hexadecimal  
        - %c -> Character  
        - %s -> Character string  
        - %% -> Itself  


## 1.3 - The for statement
  - The for statement is a loop, a generalization of the while.If you compare it to the earlier while, its operation should be clear. 

  - The choice between while and for is arbitrary, based on which seems clearer. The for is usually appropriate for loops in which the initialization and increment are single statements and logically related, since it is more compact than while and it keeps the loop control statements together in one place.

  ## 1.4 Symbolic Constants
  - A #define line defines a symbolic name or symbolic constant to be a particular string of characters.

  -  Symbolic constant names are conventionally written in upper case so they can ber readily distinguished from lower case variable names. Notice that there is no semicolon at the end of a #define line.

  ## 1.5 Character Input and Output
  - he standard library provides several functions for reading or writing one character at a time, of which getchar and putchar are the simplest. Each time it is called, getchar reads the next input character from a text stream and returns that as its value.

  - The function putchar prints a character each time it is called. 




