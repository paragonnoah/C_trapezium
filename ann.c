#include <stdio.h>
int main(){
    int a,b,h;
    double area;
    // program to calculate area of trapezium
    printf("enter A: ");
    scanf("%d\n", &a);
    printf("enter B: ");
    scanf("%d\n", &b);
    printf("enter C: ");
    scanf("%d\n", &h);
    area = 0.5 *(a + b)*h;
    printf("area is %lf", area);
    return 0;

}