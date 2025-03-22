
#include <stdio.h>
#include <string.h>
// Bài 1: Xây dụng hàm đếm số ký tự trong chuỗi

int dem_ki_tu(const char *s) {
    return strlen(s); // Dùng hàm strlen để đếm số ký tự
}

int main() {
    char str[] = "Xuan Tuyen";
    printf("So ki tu trong chuoi la: %d\n", dem_ki_tu(str));
    return 0;
}
