/* 2150265 信09 王加炜 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    float r, h;
    float pi = 3.14159f;
    printf("请输入半径和高度\n");
    scanf("%f %f", &r, &h);
    float a, b, c, d, e;
    a = 2 * pi * r;
    b = pi * r * r;
    c = 4 * pi * r * r;
    d = (4 * pi * r * r * r) / 3;
    e = b * h;
    printf("圆周长     : %.2f\n", a);
    printf("圆面积     ：%.2f\n", b);
    printf("圆球表面积 ：%.2f\n", c);
    printf("圆球体积   ：%.2f\n", d);
    printf("圆柱体积   ：%.2f\n", e);





    return 0;
}
