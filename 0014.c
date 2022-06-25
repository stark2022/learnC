/*
 * @Descripttion:
将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5
 * @version:
 * @Author: wyzf
 * @Date: 2022-06-25 09:21:59
 * @LastEditors: wyzf
 * @LastEditTime: 2022-06-25 09:44:42
 */

#include <stdio.h>

int main() {
    int n, i;
    puts("请输入整数： ");
    scanf("%d", &n);
    printf("%d= ", n);
    for (i = 2;i <= n;i++) {
        while (n % i == 0) {
            printf("%d", i);
            n /= i;
            if (n != 1) {
                puts("*");
            }
        }
    }
    printf("\n");
    return 0;
}