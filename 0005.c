/*
 * @Descripttion:
输入三个整数x,y,z，请把这三个数由小到大输出
 * @version:
 * @Author: wyzf
 * @Date: 2022-06-23 09:21:27
 * @LastEditors: wyzf
 * @LastEditTime: 2022-06-23 09:30:44
 */
#include <stdio.h>
int main() {
    int x, y, z, t;
    printf("\n请输入三个整数:\n");
    scanf("%d,%d,%d", &x, &y, &z);
    if (x > y) {
        t = x;x = y;y = t;
    }
    if (x > z) {
        t = x;x = z;z = t;
    }
    if (y > z) {
        t = y;y = z;z = t;
    }
    printf("从小到大排序是：%d,%d,%d\n", x, y, z);



}
