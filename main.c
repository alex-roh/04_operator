#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// declaration and initialization 
	int x = 0, y = 0, z = 0, m = 0;
	int a = 0, b = 0, c = 0;
	
	// assignment
	x = 1;
	a = 3;
	b = 4;
	c = 5;
	
	// operate
	y = (a * x * x) + (b * x) + c;
	m = (x + y + z) / 3;
	
	// print
	printf("y = %d, m = %d", y, m);
		
	return 0;
}
