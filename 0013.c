/*
 * @Descripttion:
打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位
数字立方和等于该数 本身。例如：153是一个"水仙花数"，
因为153=1的三次方＋5的三次方＋3的三次方。
 * @version:
 * @Author: wyzf
 * @Date: 2022-06-25 09:04:17
 * @LastEditors: wyzf
 * @LastEditTime: 2022-06-25 09:16:22
 */

#include <stdio.h>

int main() {
    int i, j, k, n;
    int count;
    printf("100-999之间的水仙花数有：");
    for (n = 100;n <= 999;n++) {
        i = n % 10;
        j = n / 10 % 10;
        k = n / 100 % 10;
        if (n == (i * i * i + j * j * j + k * k * k)) {
            printf("%d ;", n);
            if (++count == 4) {
                printf("\n");
            }
        }
    }
}
