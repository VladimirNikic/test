#include <stdio.h>

void ispis(int c)
{
	print("Rezultat je: %d\n", c);
}

int racun(int a, int b)
{
	if(a > b)
		return a - b;
	else
		return b - a;
}

int main()
{
	int a = 5;
	int b = 8;
	int c;
	
	c = racun(a, b);

	ispis(c);

    return 0;
}
