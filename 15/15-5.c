# include <stdio.h>

int main() {
    int dir = 10;
    int a;
    int b = 0;
    scanf("%d", &a);

    while (a > 0) {
        b *= dir;
        b += (a%dir);
        a /= dir;
    }
    printf("%d", b);
}