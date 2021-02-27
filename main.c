#include <stdio.h>

void ispis(int c)
{
	print("Rezultat je: %d\n", c);
}

int main()
{
	int a = 5;
	int b = 8;
	int c;
	
	if(a > b)
		c = a - b;
	else
		c = b - a;

	ispis(c);

    return 0;
}
