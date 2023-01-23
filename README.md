# AKS_PROJECT_04
Basic Calculator Using C Programming Language In DEV-C++ IDE.
Calculator Project In C Programming:
Created By : Atish Kumar Sahu
Start Date Of Project : 18 - Jan - 2023
End Date Of Project : 20 - Jan - 2023
Programming language : C Programming Language
File name: Calculator_In_C.c
Size: 416 KB
Lines Of Code: 300
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
In this C programming project you will see a basic calculator which have the capability to calculate arithmetic operation of integer and floating type data. In this program we use two user define function "IntegerArithmetic()", "FloatArithmetic()", "Power()", "SquareCube()" and the main() function which is mandatory function in C Programming. 

In this Project we use the following header file libraries they are as follows
#include<stdio.h> -> standard input output header file
#include<conio.h> -> console input output header file
#include<stdlib.h> ->  standard library header file
#include<windows.h> -> windows operation header file
#include<time.h> -> time operatio header file
#include<math.h> -> math header file for math function
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
How The Program Works:
--------------------------------
1. main():
----------
In main() function first it print the output of greetings "Welcome To The Calculator Project In C Programming Language.", After that it will show a instruction to press the enter key. 
In main() function we give a condition that if you press the enter button then it will go for further operation otherwise it will trying to stop the user to go for further.
After hit the enter key it will clear the screen using "system("Cls");" and go to the choise section to choose one option at a time.
We use the switch case statement to choose An Operation. The operation is as following:
If you press 1 then "Integer Arithmetic Operation" will happen
If you press 2 then "Floating Arithmetic Operation" will happen
If you press 3 then "Power Operation(A^n)" will happen
If you press 4 then "Square & Cube Root Operation" will happen
If you press any other key then it will show "Invalid Option!" after that it will take some millisecond using "Sleep(2000);" then, it will go back to the main() function again.
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
2. IntegerArithmetic():
--------------------------
This function will calculate the basic arithmetic operation between two integer type data. First it will show the greeting for entering into the integer arithemtic calculating section. 
After that it will give instruction to press the enter key. If you press enter then it will allow you for the further operation. Otherwise it will go back to the starting position of the IntegerArithmetic() function. 
After press the enter key it will take two input form the user, which are the operand or the input number value.
After taking the operand value i use the switch case statement to perform the appropriate operation. The operations are as follows
If you press 1 it will perform Addition (A + B)
If you press 2 it will perform Subtraction (A - B)
If you press 3 it will perform Multiplication (A * B)
If you press 4 it will perform Division (A / B)
If you press 5 it will perform Modulo (A % B) = it will give the remainder
If you press other key it will call the main() fucntion and you will go back to the main() function section.

During the case 1 to 5 after showing the result of appropriate operation it will sleep for some milliseconds using "Sleep(3000);", then it will clear the screen using "system("Cls");" and it again call the IntegerArithmetic() function again if you want to perform the arithmetic opertion again & again.
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
3. FloatArithmetic():
---------------------------
This function will calculate arithmetic operation between two floating point data. First it will show the greeting for entering into the float arithemtic calculating section. 
After that it will give instruction to press the enter key. If you press enter then it will allow you for the further operation. Otherwise it will go back to the starting position of the FloatArithmetic() function.
After press the enter key it will take two input form the user, which are the operand or the input number value.
After taking the operand value i use the switch case statement to perform the appropriate operation. The operations are as follows
If you press 1 it will perform Addition (A + B)
If you press 2 it will perform Subtraction (A - B)
If you press 3 it will perform Multiplication (A * B)
If you press 4 it will perform Division (A / B)
If you press 5 it will perform Modulo (A % B) = it will give the remainder
If you press other key it will call the main() fucntion and you will go back to the main() function section.

During the case 1 to 5 after showing the result of appropriate operation it will sleep for some milliseconds using "Sleep(3000);", then it will clear the screen using "system("Cls");" and it again call the FloatArithmetic() function again if you want to perform the arithmetic opertion again & again.
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
4. Power():
----------------
This function will calculate the power of a number. Example in (A)^n, "A" is the number which is called as base, "n" is the number which is called as exponent, if i take like this (2)^3 the answer will be 8.
First it will show the greeting message. After that it will give instruction to press the enter key. If you press enter then it will allow you for the further operation. Otherwise it will go back to the starting position of the Power() function.
It will take two input base and exponent value. After taking the input it will give instruction to choose an option. Here we use the switch case statement. The options are as follows
If you press 1 then it will calculate the operation (A)^n, take some time then it clear screen and again call the Power() function if you want to calculate again. 
If you press 2 then it will clear the screen and go back to the main() function page.
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
5. SquareCube():
----------------------
This function will find the square root and cube root of a number. 
Example: Square root of 4 = 2		Cube root of 8 = 2
First it will show the greeting message. After that it will give instruction to press the enter key. If you press enter then it will allow you for the further operation. Otherwise it will go back to the starting position of the SquareCube() function.
It will take one input which is the integer number value. After taking the input value it will go to the switch case for operation. The operations are as follows like 
If you press 1 then it will calculate the square root using "sqrt(num);" and calculate the cube root using "cbrt(num);", After giving the result it will take some time, then it clear the screen and again call the SquareCube() function if you want to calculate again.
If you press 2 then it will clear the screen and go back to the main() function page.
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
In github i already gave you the source(.c) file, executable(.exe) file, preprocessor(.i) file and object(.o) file you can check out the code and usee the executable file for practical knowledge.

Thanks For Visit. 
Name: Atish Kumar Sahu
Gmail = kumarsahuatish280301@gmail.com

NOTE:
"If you want to learn do not copy paste the code. Write the Code in your IDE so, that you will know that how the code is executing step by step."
