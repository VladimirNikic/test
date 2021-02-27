#include <stdio.h>

int main()
{
	int a = 5;
	int b = 8;
	int c;
	
	if(a > b)
		c = a - b;
	else
		c = b - a;

	print("Rezultat je: %d\n", c);

    return 0;
}
