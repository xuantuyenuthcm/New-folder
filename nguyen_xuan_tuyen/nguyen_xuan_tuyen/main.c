#include<stdio.h>

char* TimChuoi(char* str, char* substr);
{
	int chieudaistr = SoLuongKiTu(str);
	int chieudaisubstr = SoLuongKiTu(substr);
	for (int i = 0; i < chieudaistr; i++)
	{
		int j = 0;
		for (j = 0; j < chieudaisubstr; j++)
		{
			if (str[i + j] != substr[j])
				break;
		}
	}if (j == chieudaisubstr)
		return str + 1;

}
return 0;

void main()
{
	char str[] = "xin chao moi nguoi";
	char substr[] = "chao";

	char* x = TimChuoi(str, substr);

}