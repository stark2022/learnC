/*
 * @Descripttion:
输出9*9口诀。
 * @version:
 * @Author: wyzf
 * @Date: 2022-06-24 09:58:57
 * @LastEditors: wyzf
 * @LastEditTime: 2022-06-24 10:19:08
 */

#include <stdio.h>
int main() {
    int i, j, k;
    for (i = 1;i < 10;i++) {
        for (j = 1;j <= i;j++) {
            k = i * j;
            printf("%d*%d=%-3d\n", i, j, k);
        }
    }
}