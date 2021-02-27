#include <stdio.h>

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

	print("Rezultat je: %d\n", c);

    return 0;
}
