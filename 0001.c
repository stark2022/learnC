/*
 * @Descripttion:
 有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的
 三位数？都是多少？
 * @version:
 * @Author: wyzf
 * @Date: 2022-06-22 09:22:22
 * @LastEditors: wyzf
 * @LastEditTime: 2022-06-22 14:42:31
 */
#include <stdio.h>

void demo01(void) {
    int i, j, k;
    printf("\n");
    for (i = 1;i < 5;i++) {
        for (j = 1;j < 5;j++) {
            for (k = 1;k < 5;k++) {
                if (i != k && i != j && j != k) {
                    printf("%d,%d,%d\n", i, j, k);
                }
            }
        }
    }
}
// //a: 1-a; b:b位 不重复
// void demo02(int a, int b) {
//     int n[b], m[a];
//     for (int t = 0;t < a;t++) {
//         m[t] = t + 1;
//     }
//     printf("\n");
//     for (int j = 0;j < b;j++) {
//         for (j=0;j<a;)
//     }
// }

int main() {
    demo01();

}
