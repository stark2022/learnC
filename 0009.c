/*
 * @Descripttion:
 * @version:
 * @Author: wyzf
 * @Date: 2022-06-24 10:26:58
 * @LastEditors: wyzf
 * @LastEditTime: 2022-06-24 10:34:48
 */
#include<stdio.h>
#include <stdlib.h>
#include <windows.h>
int main() {
    SetConsoleOutputCP(437);
    int i, j;
    for (i = 0;i < 8;i++)
    {
        for (j = 0;j < 8;j++)
            if ((i + j) % 2 == 0)
                printf("%c%c", 219, 219);
            else printf("  ");
        printf("\n");
    }
    return 0;
}