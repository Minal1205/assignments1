#include <stdio.h>
// to calulate area of circle
int main()
{
    float radius, area;
    printf("Enter Radius\n");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    printf("Area of circle with radius %f is %f\n", radius, area);
    getch();
    return 0;
}