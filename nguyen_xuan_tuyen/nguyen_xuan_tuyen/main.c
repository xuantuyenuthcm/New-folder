#include <stdio.h>

int Cong(int a, int b);
int Tru(int c, int d); 
int Nhan(int e, int f);
int Chia(int g, int h);

void main()
{
	int x = Cong(1, 2);
	int y = Tru(5, 8);
	int z = Nhan(4, 7);
	int w = Chia(8, 2);
	printf("x : %d\n", x);
	printf("y : %d\n", y);
	printf("z : %d\n", z);
	printf("w : %d\n", w);
}