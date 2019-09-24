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
	printf("y = %d, m = %d\n", y, m);
	
	// relational/logical operator precedence
	x = 3;
	int cond1, cond2; 
	
	// true
	cond1 = (2 < x) && (x < 5);
	
	// true
	cond2 = (x > 1) || ((x < 4) && (x > 3));
	
	printf("cond1 = %d, cond2 = %d\n", cond1, cond2);
		
	return 0;
}
