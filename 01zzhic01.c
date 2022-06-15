/*
 * @Descripttion:
 * @version:
 * @Author: wyzf
 * @Date: 2022-06-15 09:52:12
 * @LastEditors: wyzf
 * @LastEditTime: 2022-06-15 14:56:08
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
}
int main() {
    int latitude = 32;
    int longitude = -64;
    go_south_east_false(latitude, longitude);
    printf("停！当前位置：[%d,%d]\n", latitude, longitude);
    go_south_east_true(&latitude, &longitude);
    printf("停!这才是正确的位置：[%d,%d]\n", latitude, longitude);

    char quote[] = "Cookies make you fat";
    fortune_cookie(quote);
    return 0;
}