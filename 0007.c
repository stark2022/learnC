/*
 * @Descripttion:
 * @version:
 * @Author: wyzf
 * @Date: 2022-06-23 13:16:44
 * @LastEditors: wyzf
 * @LastEditTime: 2022-06-23 13:20:16
 */

#include<stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(437);
    char a = 176, b = 219;
    printf("%c%c%c%c%c\n", b, a, a, a, b);
    printf("%c%c%c%c%c\n", a, b, a, b, a);
    printf("%c%c%c%c%c\n", a, a, b, a, a);
    printf("%c%c%c%c%c\n", a, b, a, b, a);
    printf("%c%c%c%c%c\n", b, a, a, a, b);
    return 0;
}