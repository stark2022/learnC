/*
 * @Descripttion:c语言中文网指针部分1
 * @version:
 * @Author: wyzf
 * @Date: 2022-06-21 15:18:34
 * @LastEditors: wyzf
 * @LastEditTime: 2022-06-21 16:50:33
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

void zzOne() {
    int a = 100;
    char str[20] = "www.baidu.com";
    printf("数组名也有指针的作用指向首地址%#X,a的地址:%#X", str, a);

}

int main() {
    initzz();
    zzOne();
    return 0;
}
