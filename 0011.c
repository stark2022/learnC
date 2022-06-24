/*
 * @Descripttion:
古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生
一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都
不死，问每个月的兔子总数为多少？（输出前40个月即可）
 * @version:
 * @Author: wyzf
 * @Date: 2022-06-24 16:54:30
 * @LastEditors: wyzf
 * @LastEditTime: 2022-06-24 17:07:21
 */
#include <stdio.h>

int main() {
    int f1 = 1, f2 = 1, i;
    for (i = 1;i <= 20;i++) {
        printf("%12d%12d", f1, f2);
        if (i % 2 == 0) {
            printf("\n");
        }
        f1 = f1 + f2;
        f2 = f1 + f2;
    }
    return 0;
}
