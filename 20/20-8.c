#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);

    if(a != 'k'){
        printf("참");
    }else printf("거짓");
    if(a > 'h'){
        printf("참");
    }else printf("거짓");
    if(a <= 'o'){
        printf("참");
    }else printf("거짓");

    return 0;
}