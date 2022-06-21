/*
 * @Descripttion:c语言中文网指针部分1
 * @version:
 * @Author: wyzf
 * @Date: 2022-06-21 15:18:34
 * @LastEditors: wyzf
 * @LastEditTime: 2022-06-21 17:11:58
 */

#include <stdio.h>

void initzz(void) {
    int va = 10, *p = &va;
    printf("va变量的地址是：%#X\n", &va);
    printf("p指针指向的地址是：%#p\n", p);
    printf("在定义指针之外的*p等价于指向的数据本身 *p:%d  va:%d\n", *p, va);
    int *pnull = NULL;
    printf("pnull指针变量的地址是: %p\n", pnull);
    *p = 99;
    printf("指针赋值后改变了指向的数据的值 va：%d\n", va);
    //int a,*pa=&a;  *&a-->a    &*pa--->pa
}

void zzarithmetic() {
    int    a = 10, *pa = &a, *paa = &a;
    double b = 99.9, *pb = &b;
    char   c = '@', *pc = &c;
    //最初的值
    puts("最初的值");
    printf("&a=%#X, &b=%#X, &c=%#X\n", &a, &b, &c);
    printf("pa=%#X, pb=%#X, pc=%#X\n", pa, pb, pc);
    //加法运算
    puts("加法运算");
    pa++; pb++; pc++;
    printf("pa=%#X, pb=%#X, pc=%#X\n", pa, pb, pc);
    //减法运算
    puts("减法运算");
    pa -= 2; pb -= 2; pc -= 2;
    printf("pa=%#X, pb=%#X, pc=%#X\n", pa, pb, pc);
    //比较运算
    puts("比较运算");
    if (pa == paa) {
        printf("*paa:%d\n", *paa);
    }
    else {
        printf("*pa:%d\n", *pa);
    }
}

int main() {
    initzz();
    zzarithmetic();
    return 0;
}
