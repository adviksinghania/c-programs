// Equilateral, isosceles, scalene or right angled triangle
#include <stdio.h>

int main() {
    float a,b,c;
    printf("Enter the length of three sides:\n");
    scanf("%f %f %f", &a, &b, &c);
    if ((a+b)>c && (b+c)>a && (c+a)>b) {
        float x=a*a, y=b*b, z=c*c;
        if (a==b && b==c) {
            printf("\nEquilateral Triangle.\n");
        } else if (a==b || b==c || c==a) {
            printf("Isosceles Triangle.\n");
        } else if ((x+y==z) || (y+z==x) || (z+x==y)) {
            printf("Right-angled Triangle.\n");
        } else
            printf("Scalene Triangle.\n");
    } else {
        printf("Triangle not possible.\n");
    }
    return(0);
}
