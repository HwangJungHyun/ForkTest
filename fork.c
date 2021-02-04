#include <stdio.h>
int add(int, int);

int main()
{
	//just test for fork
	int a, b = 0;
	int c;
	c= add(a, b);
	
}

void add(int a, int b) {
	return a + b;
}
