#include <stdio.h>
#include <conio.h>
int main() {
	// Оголошення
	
	 // З урахуванням дного місця для символу '\0'

	char ch, str[79 + 1]; 
	int x, y, z;
	float a, b, c;
	double A, B, C;

	// Виконання програми
	printf("\n\t Enter the symbol:");
	ch = getchar();
	printf("\t The symbol is:%c \n ", ch);
	_flushall();
	printf("\n\t Enter the string: ");
	scanf_s("%s", &str, 79);
	printf("\t The string is:%s \n ", str);
	a = 2.42F; b = 3.58F;
	c = a + b;
	printf("\n\t The sum %1.2f and 1.2f (as float) is equal:%1.4f \n", a, b, c);
	A = 12.1234567796602;
	B = 2.7182818284509;
	C = A + B;
	printf("\n\t The sum %1.13f and 1.13f (as double) is equal:%1.13f \n", A, B, C);
	x = 2;
	y = 7;
	z = x * y;
	printf("\n \t Multiplication% d on% i (as an integer) is equal:%d \n", x, y, z);
	printf("\n \n Press any key:");

	_getch();

	return 0;
}