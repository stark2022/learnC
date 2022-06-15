/*
 * @Descripttion:
 * @version:
 * @Author: wyzf
 * @Date: 2022-06-15 09:52:12
 * @LastEditors: wyzf
 * @LastEditTime: 2022-06-15 16:32:52
 */
#include <stdio.h>

void go_south_east_false(int lat, int lon) {
    lat = lat - 1;
    lon = lon + 1;
}

void go_south_east_true(int *lat, int *lon) {
    *lat = *lat - 1;
    *lon = *lon + 1;
}

void fortune_cookie(char msg[]) {
    printf("Message reads:%s\n", msg);
    //int length = ;
    printf("msg occupies %d bytes\n", sizeof(msg));
    //sizeof(msg)输出的是指针变量的大小
}
int main() {
    int latitude = 32;
    int longitude = -64;
    go_south_east_false(latitude, longitude);
    printf("停！当前位置：[%d,%d]\n", latitude, longitude);
    go_south_east_true(&latitude, &longitude);
    printf("停!这才是正确的位置：[%d,%d]\n", latitude, longitude);

    char quote[] = "Cookies make you fat";
    /*为字符串的每一个字符以及结束字符\0在栈上分配空间，并把
    首字符的地址和quote变量关联起来，代码中只要出现quote变量
    就会把它替换成字符串 首字符的地址，数组变量就好比一个指针
    */
    fortune_cookie(quote);
    printf("The quote 字符串保存在：%#p\n", quote);
    //所以传递给函数的是指针
    int contestants[] = { 1,2,3 };
    int *choice = contestants;
    contestants[0] = 2;
    contestants[1] = contestants[2];
    contestants[2] = *choice;
    printf("contestants[2]存储的数据是: %d\n", contestants[2]);
    // contestants==*choice ==contestants[0]
    //因为指针变量choice指向的地址是 contestants首字符的地址
    char s[] = "How big is it?";
    char *t = s;
    printf("数组S的地址是：%#p\n", &s);
    printf("t的地址是：%#p\n", &t);
    //数组变量与指针变量有一点区别，把数组赋值给指针变量，指针
    //变量只会包含数组的地址信息，对数组的长度不清楚，丢失了部分
    //信息，只要把数组传递给函数，数组就会退化为指针，要注意，
    //会引发一些不易察觉的错误
    return 0;
}