#include <stdio.h>

// Bài 3: Hàm chuyển đổi chữ thường thành chữ IN HOA
void change_a_A(char* s) {
    while (*s) { // Lặp qua từng ký tự trong chuỗi
        if (*s >= 'a' && *s <= 'z') // Nếu là chữ thường
        { 
            *s = *s - ('a' - 'A'); // Chuyển thành chữ IN HOA
        }
        s++;
    }
}

int main() 
{
    char str[] = "nguyen xuan TuyEn";
    printf("Chuoi input: %s\n", str);

    change_a_A(str); 

    printf("Chuỗi sau khi chuyển: %s\n", str);
    return 0;
}
