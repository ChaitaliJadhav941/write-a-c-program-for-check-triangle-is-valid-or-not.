#include <stdio.h>
int main()
{
    float side1, side2, side3, sum;
    printf("Enter the three side of triangle \n");
    scanf("%d%d%d", &side1, &side2, &side3);
    sum = side1 + side2 + side3;
    sum >= 180? printf("Triangle is valid \n"): printf("Triangle is not valid \n");
    return 0;
}