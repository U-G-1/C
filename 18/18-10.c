#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a>100 || a<0 || b>100 || b<0 || c>100 || c<0 || d>100 || d<0){
        printf("잘못된 점수");
    }else if ((a+b+c+d)/4 > 85) {
        printf("합격");
    }else {
        printf("불합격");
    }

    return 0;
}