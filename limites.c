#include<limits.h>
#include<stdio.h>


int main(){


    CHAR_MAX;
    printf("CHAR_MAX = 127\n");
    CHAR_MIN;
    printf("CHAR_MIN = -128\n");
    CHAR_BIT;
    printf("CHAR_BIT = 8\n");

    INT_MAX;
    printf("INT_MAX = 2147483647\n");
    INT_MIN;
    printf("INT_MIN = (-2147483647-1)\n");

    SHRT_MAX;
    printf("SHRT_MAX = 32767\n");
    SHRT_MIN;
    printf("SHRT_MIN = (-32767-1)\n");

    UCHAR_MAX;
    printf("UCHAR_MAX = 255\n");

    LONG_MAX;
    printf("LONG_MAX = 2147483647L\n");
    LONG_MIN;
    printf("LONG_MIN = (-2147483647L-1)\n");

    UINT_MAX;
    printf("UINT_MAX = 0xFFFFFFFF\n");

    LLONG_MAX;
    printf("LLONG_MAX = 9223372036854775807LL\n");
    LLONG_MIN;
    printf("LLONG_MIN = (-9223372036854775807LL - 1)\n");

    ULLONG_MAX;
    printf("ULLONG_MAX = (2ULL * 9223372036854775807LL + 1)\n");


}