#include <stdio.h>

int src[] = { 35, 105, 110, 99, 108, 117, 100, 101, 32, 60, 115, 116, 100, 105, 111, 46, 104, 62, 10, 10, 105, 110, 116,
              32, 115, 114, 99, 91, 93, 32, 61, 32, 123, 32, 125, 59, 10, 10, 105, 110, 116, 32, 109, 97, 105, 110, 40,
              41, 10, 123, 10, 32, 32, 32, 32, 102, 111, 114, 32, 40, 105, 110, 116, 32, 105, 32, 61, 32, 48, 59, 32,
              105, 32, 60, 32, 51, 52, 59, 32, 43, 43, 105, 41, 32, 123, 10, 32, 32, 32, 32, 32, 32, 32, 32, 112, 114,
              105, 110, 116, 102, 40, 34, 37, 99, 34, 44, 32, 115, 114, 99, 91, 105, 93, 41, 59, 10, 32, 32, 32, 32,
              125, 10, 32, 32, 32, 32, 102, 111, 114, 32, 40, 105, 110, 116, 32, 105, 32, 61, 32, 48, 59, 32, 105, 32,
              60, 32, 115, 105, 122, 101, 111, 102, 40, 115, 114, 99, 41, 32, 47, 32, 115, 105, 122, 101, 111, 102, 40,
              105, 110, 116, 41, 59, 32, 43, 43, 105, 41, 32, 123, 10, 32, 32, 32, 32, 32, 32, 32, 32, 112, 114, 105,
              110, 116, 102, 40, 34, 37, 100, 44, 32, 34, 44, 32, 115, 114, 99, 91, 105, 93, 41, 59, 10, 32, 32, 32, 32,
              125, 10, 32, 32, 32, 32, 102, 111, 114, 32, 40, 105, 110, 116, 32, 105, 32, 61, 32, 51, 52, 59, 32, 105,
              32, 60, 32, 115, 105, 122, 101, 111, 102, 40, 115, 114, 99, 41, 32, 47, 32, 115, 105, 122, 101, 111, 102,
              40, 105, 110, 116, 41, 59, 32, 43, 43, 105, 41, 32, 123, 10, 32, 32, 32, 32, 32, 32, 32, 32, 112, 114,
              105, 110, 116, 102, 40, 34, 37, 99, 34, 44, 32, 115, 114, 99, 91, 105, 93, 41, 59, 10, 32, 32, 32, 32,
              125, 10, 125, };

int main()
{
    for (int i = 0; i < 34; ++i) {
        printf("%c", src[i]);
    }
    for (int i = 0; i < sizeof(src) / sizeof(int); ++i) {
        printf("%d, ", src[i]);
    }
    for (int i = 34; i < sizeof(src) / sizeof(int); ++i) {
        printf("%c", src[i]);
    }
}