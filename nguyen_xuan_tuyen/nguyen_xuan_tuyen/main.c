#include <stdio.h>
// Bài 2: Hàm đếm số ký tự khoảng trắng trong chuỗi

int count_space(const char* s) 
{
    int dem = 0; 
    while (*s) 
    { 
        if (*s == ' ') 
        {  
            dem++;
        }
        s++; 
    }
    return dem; 
}
int main() 
{
    char str[] = "Hom nay toi lam bai tap chuoi va con tro";
    printf("So khoang cach trong chuoi la: %d\n", count_space(str));
    return 0;
}
