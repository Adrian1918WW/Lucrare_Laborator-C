#include <stdio.h>
#include <math.h>
int main() {
    float x1, x2, px, a, b, c, x, F;
    int n = 0;
    printf("x1 = ");
    scanf("%f", &x1);
    printf("x2 = ");
    scanf("%f", &x2);
    printf("px = ");
    scanf("%f", &px);
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    x = x1;
    n = 0;
    printf("\n \t Rezulta : \n");
    while (x == x1 && x <= x2) {
        if ((x < a) || (b !=0)) {
            F = (fabs(x + a) / log(x)) + (b / c);
        }
        else if ((x > a) && (b == 0)) {
            F = ((sin(x) + cos(b)) / pow ((a + c) , 3));
        }
        else {
            F = ((a + log(x)) /  (pow(x , 2) - pow(c , 2)));
        }
        printf("%i :     x= %.3f \t F = %.3f \n", n , x , F);
        x = x + px;
    }
    return 0;
}



    return 0;
}
