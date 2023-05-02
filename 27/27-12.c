#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    
    for (int i = a;i <= 'z'; i++) {
        printf("%c", i);
    }

    return 0;
}