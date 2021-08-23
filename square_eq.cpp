/* Square equations */
#include <math.h>
#include <stdio.h>

int main(void){
    double a, b, c, d, x1, x2;
    printf("ax^2 + bx + c = 0\nEnter a:");
    scanf("%lf", &a);
    printf("Enter b:");
    scanf("%lf", &b);
    printf("Enter c:");
    scanf("%lf", &c);
    d = pow(b,2) - 4 * a * c;
    if (d < 0) {
        printf("No solutions");
    } else if (d == 0) {
        x1 = -b / (2 * a);
        printf("x = %lf", x1);
    } else {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("x1 = %lf\nx2 = %lf", x1, x2);

    }

}
