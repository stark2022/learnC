/*
 * @Descripttion:
 * @version:
 * @Author: wyzf
 * @Date: 2022-06-24 13:47:15
 * @LastEditors: wyzf
 * @LastEditTime: 2022-06-24 16:52:14
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main() {
    SetConsoleOutputCP(437);
    int i, j;
    printf("\1\1\n"); /*输出两个笑脸*/
    for (i = 1;i < 11;i++)
    {
        for (j = 1;j <= i;j++)
            printf("%c%c", 219, 219);
        printf("\n");
    }
    return 0;
}