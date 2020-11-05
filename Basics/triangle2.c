// Acute,Obtuse or Right-angled triangle
#include <stdio.h>

int main() {
    float a,b,c;
    printf("Enter the angles(in degrees):\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a!=0 && b!=0 && c!=0 && (a+b+c)==180)
        if (a<90 && b<90 && c<90)
            printf("\nAcute-angled Triangle.\n");
        else if (a==90 || b==90 || c==90)
            printf("\nRight-angled Triangle.\n");
        else
            printf("\nObtuse-angled Triangle.\n");
    else
        printf("\nTriangle not possible.\n");
    return(0);
}
