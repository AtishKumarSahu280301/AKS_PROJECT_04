/*
Calculator Project 
Created By : Atish Kumar Sahu
Start Date Of Project : 18 - Jan - 2023
End Date Of Project : 20 - Jan - 2023
Programming language : C Programming Language
File name: Calculator_In_C.c
Size: 416 KB
Lines Of Code: 300
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<math.h>

int Variable; 
void IntegerArithmetic()
{
	int num1, num2, option;
	
	printf("=============================================================\n");
	printf("Calculator For Integer Arithmetic Operation\n");
	printf("=============================================================\n");
	printf("Press Enter For Calculation.");
	
	Variable = getch();
	if(Variable != 13)
	{
		printf("\n\nPlease Press Enter. You Will Go Back To The Integer Arithmetic Calculator Page.");
		Sleep(2000);
		system("Cls");
		IntegerArithmetic();
	}
	printf("\n\n");
	
	printf("Enter First Input : ");
	scanf("%d",&num1);
	
	printf("Enter Second Input : ");
	scanf("%d",&num2);
	
	printf("\nEnter An Operation For Arithmetic Operation\n");
	printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulo\n\nOption: ");
	scanf("%d",&option);
	
	while(1)
	{
		switch(option)
		{
			case 1:
				printf("\nResult : %d",(num1 + num2));
				Sleep(4000);
				system("Cls");
				IntegerArithmetic();
				break;
			case 2:
				printf("\nResult : %d",(num1 - num2));
				Sleep(4000);
				system("Cls");
				IntegerArithmetic();
				break;
			case 3:
				printf("\nResult : %d",(num1 * num2));
				Sleep(4000);
				system("Cls");
				IntegerArithmetic();
				break;
			case 4:
				printf("\nResult : %d",(num1 / num2));
				Sleep(4000);
				system("Cls");
				IntegerArithmetic();
				break;
			case 5:
				printf("\nResult : %d",(num1 % num2));
				Sleep(4000);
				system("Cls");
				IntegerArithmetic();
				break;
			default:
				printf("\nInvalid Option! You Will Go Back To The Main Page.\n");
				Sleep(3000);
				system("Cls");
				main();
				break;
		}
	}
}
void FloatArithmetic()
{
	float num3, num4 ;
	int Option;
	
	printf("=============================================================\n");
	printf("Calculator For Float Arithmetic Operation\n");
	printf("=============================================================\n");
	
	printf("Press Enter For Calculation.");
	
	Variable = getch();
	if(Variable != 13)
	{
		printf("\n\nPlease Press Enter. You Will Go Back To The Float Arithmetic Calculator Page.");
		Sleep(2000);
		system("Cls");
		FloatArithmetic();
	}
	printf("\n\n");
	
	printf("Enter First Input : ");
	scanf("%f",&num3);
	
	printf("Enter Second Input : ");
	scanf("%f",&num4);
	
	printf("\nEnter An Operation For Arithmetic Operation\n");
	printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulo\n\nOption: ");
	scanf("%d",&Option);
	
	while(1)
	{
		switch(Option)
		{
			case 1:
				printf("\nResult : %f",(num3 + num4));
				Sleep(4000);
				system("Cls");
				FloatArithmetic();
				break;
			case 2:
				printf("\nResult : %f",(num3 - num4));
				Sleep(4000);
				system("Cls");
				FloatArithmetic();
				break;
			case 3:
				printf("\nResult : %f",(num3 * num4));
				Sleep(4000);
				system("Cls");
				FloatArithmetic();
				break;
			case 4:
				printf("\nResult : %f",(num3 / num4));
				Sleep(4000);
				system("Cls");
				FloatArithmetic();
				break;
			case 5:
				printf("\nResult : %f",fmod(num3,num4));
				Sleep(4000);
				system("Cls");
				FloatArithmetic();
				break;
			default:
				printf("\nInvalid Option! You Will Go Back To The Main Page.\n");
				Sleep(3000);
				system("Cls");
				main();
				break;
		}
	}
}
void Power()
{
	int base, exponent, result, Var;
	printf("=============================================================\n");
	printf("Calculator For Power(A^n) Operation\n");
	printf("=============================================================\n");
	
	printf("Press Enter For Calculation.");
	
	Variable = getch();
	if(Variable != 13)
	{
		printf("\n\nPlease Press Enter. You Will Go Back To The Power(A^n) Operation Calculator Page.");
		Sleep(2000);
		system("Cls");
		Power();
	}
	
	printf("\nEnter Base Value : ");
	scanf("%d",&base);
	printf("Enter Exponent Value : ");
	scanf("%d",&exponent);
	
	printf("\n1. Calculation\n2. Exit");
	printf("\n\nChoose An Option : ");
	scanf("%d",&Var);
	
	while(1)
	{
		switch(Var)
		{
			case 1:
				result = pow(base,exponent);
				printf("Result : %d",result);
				Sleep(5000);
				system("Cls");
				Power();
				break;
			case 2:
				printf("Go Back To Main Page.");
				Sleep(3000);
				system("Cls");
				main();
				break;
		}
	}	
}
void SquareCube()
{
	int num, Var1;
	printf("=============================================================\n");
	printf("Calculator For Square Root & Cube Root Operation\n");
	printf("=============================================================\n");
	printf("Press Enter For Calculation.");
	
	Variable = getch();
	if(Variable != 13)
	{
		printf("\n\nPlease Press Enter. You Will Go Back To The Square Root & Cube Root Operation Calculator Page.");
		Sleep(2000);
		system("Cls");
		SquareCube();
	}
	
	printf("\nEnter Value Of Num : ");
	scanf("%d",&num);

	printf("\n1. Calculation\n2. Exit\n");
	printf("Choose An Operation : ");
	scanf("%d",&Var1);
	
	switch(Var1)
	{
		case 1:
			printf("\nSquare Root Of %d : %.2lf\n",num, sqrt(num));
			printf("Cube Root Of %d : %.2lf\n",num,cbrt(num));
			Sleep(5000);
			system("Cls");
			SquareCube();
			break;
		case 2:
			printf("Go Back To Main Page.");
			Sleep(3000);
			system("Cls");
			main();
			break;
	}
}
int main()
{
	int opt;	
	printf("=============================================================\n");
	printf("Welcome To The Calculator Project In C Programming Language.\n");
	printf("=============================================================\n");
	printf("Press Enter!");
	
	Variable = getch();
	while(Variable != 13)
	{
		system("Cls");
		main();
	}
		system("Cls");
	
		printf("Choose An Option For Further Operation\n");
		printf("1. Integer Arithmetic Operation\n2. Floating Arithmetic Operation\n3. Power Operation(A^n)\n4. Square & Cube Root Operation\n\nOption : ");
		scanf("%d",&opt);
	
		switch(opt)
		{
			case 1: 
				system("Cls");
				IntegerArithmetic();
				break;
			case 2:
				system("Cls");
				FloatArithmetic();
				break;
			case 3:
				system("Cls");
				Power();
				break;
			case 4:
				system("Cls");
				SquareCube();
				break;
			default:
				printf("Invalid Option!");
				Sleep(2000);
				system("Cls");
				main();
				break;		
		}
	getch();
}