#include <stdio.h>

/* 实现bis和bic的函数 */
int bis(int x, int m) {
    return x | m;
}

int bic(int x, int m) {
    return x & ~m;
}

/* 只调用bis和bic函数，计算x|y */
int bool_or(int x, int y) {
    int result = bis(x, y); //空白1
    return result;
}

/* 只调用bis和bic函数，计算x^y */
int bool_xor(int x, int y) {
    int result = bis(bic(x, y), bic(y, x)); //空白2
    return result;
}

int main() {
    int x = 1, y = 0;
    printf("1 or  0 is %d\n", bool_or(x, y));
    printf("1 xor 0 is %d\n", bool_xor(x, y));
    return 0;
}
