/*
 * @Descripttion:
 * @version:
 * @Author: wyzf
 * @Date: 2022-06-14 10:49:21
 * @LastEditors: wyzf
 * @LastEditTime: 2022-06-14 15:46:28
 */
#include <stdio.h>

void binOctDecHex(void);
int main(void) {
    puts("Hello world from puts!");
    puts("进制转换与数据类型");
    binOctDecHex();
}

void binOctDecHex(void) {
    int a = 0b1011001;//二进制数字
    int b = -0xff2a;//十六进制负数
    long double c = 0.930908203125;//如何将浮点数八进制输出
    printf("a=%d,b=%d,c=%o\n", a, b, c);
    printf("a=%#x,b=%#X,c=%#lX\n", a, b, c);
    printf("long double存储的最大字节数：:%lu \n", sizeof(long));
/*
十进制数decimal Dec %hd %d %ld十进制有符号输出short,int,
long整数;无符号     %hu %u %lu
八进制数octal Oct十六进制数hexadecimal Hex 输出short,int,long整数
%ho、%o、%lo这里是英文字母o非数字0
%hx、%x、%lx这里x是小写则如8f 大写X即 8F
%#ho  %#hx  输出前缀 0x2f 
%c:输出一个字符 character
%s:输出一个字符串 string
%f:输出浮点数 float

*/

//
}