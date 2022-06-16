/*
 * @Descripttion:
 * @version:
 * @Author: wyzf
 * @Date: 2022-06-16 10:46:46
 * @LastEditors: wyzf
 * @LastEditTime: 2022-06-16 14:36:11
 */

#include <stdio.h>


int main() {
    //char *cards = "JQK";
    //由char *cards = "JQK";引起的Segmentation fault 
    // 指针变量小于数组名，缺失信息不等同数组
    //字符串字面值是只读的
    //程序在编译期间，会把所有对数组变量的引用替换成数组的地址
    //也就是说在最后的可执行文件中，数组变量并不存在，既然数组
    //变量从来不需要指向其他地方，有和没有其实是一样的
    char cards[] = "JQK";
    char a_card = cards[2];
    cards[2] = cards[1];
    cards[1] = cards[0];
    cards[0] = cards[2];
    cards[2] = cards[1];
    cards[1] = a_card;
    puts(cards);
    // cards = "234";
    // puts(cards + 1);

    return 0;

}