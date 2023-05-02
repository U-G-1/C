#include <stdio.h>

int main()
{
    unsigned char num1 = 256; // 정수 자료형 unsigned char는 8비트 0~255 로 오버플로우돼서 0 출력
    unsigned short num2 = 65536; // 16비트 오버플로
    long long num3 = 9223372036854775808; 

    printf("%u %u %lld\n", num1, num2, num3);

    return 0;
}