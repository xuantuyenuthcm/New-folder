#include <stdio.h>

int Cong(int a, int b)
{
	int ketqua = 0;
	ketqua = a + b;
	return ketqua;
}
int Tru(int c, int d)
{
	int ketqua = 0;
	ketqua = c - d;
	return ketqua;
}
int Nhan(int e, int f)
{
	int ketqua = 0;
	ketqua = e * f;
	return ketqua;
}
int Chia(int g, int h)
{
	int ketqua = 0;
	ketqua = g / h;
	return ketqua;
}
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