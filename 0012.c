/*
 * @Descripttion:
判断 101 到 200 之间的素数
 * @version:
 * @Author: wyzf
 * @Date: 2022-06-25 08:51:05
 * @LastEditors: wyzf
 * @LastEditTime: 2022-06-25 09:04:43
 */

#include <stdio.h>

int main() {
    int i, j;
    for (i = 101;i <= 200;i++) {
        for (j = 2;j < i;j++) {
            if (i % j == 0) {
                break;
            }

        }
        if (j == i) {
            int count;
            printf("%d ;", i);
            if (++count % 5 == 0) {
                printf("\n");
            }
        }
    }
}