/*
 * @Descripttion:
 * @version:
 * @Author: wyzf
 * @Date: 2022-06-15 09:52:12
 * @LastEditors: wyzf
 * @LastEditTime: 2022-06-15 09:57:53
 */
#include <stdio.h>

void go_south_east(int lat, int lon) {
    lat = lat - 1;
    lon = lon + 1;
}

int main() {
    int latitude = 32;
    int longitude = -64;
    go_south_east(latitude, longitude);
    printf("停！当前位置：[%i,%i]\n", latitude, longitude);
    return 0;
}