#include <stdio.h>
#include <math.h>
int main() {
    float x1,x2,px,a,b,c,x,F;
    int n;
    printf("Pentru x1 : ");
    scanf("%f", &x1);
    printf("Pentru x2 : ");
    scanf("%f", &x2);
    printf("Pentru px : ");
    scanf("%f", &px);
    printf("Pentru a : ");
    scanf("%f", &a);
    printf("Pentru b : ");
    scanf("%f", &b);
    printf("Pentru c : ");
    scanf("%f", &c);
    x=x1;
    n=0;
    printf("\n\t Rezulta : \n");
    for ( x = x1; x <= x2; x += px) {
        if (x<a || b !=0){
            if (x>a && b == 0){
                F = (fabs(x+a)+b) / (log(x) +c);
                printf("%d.     %.2f    %.2f \n", n, x, F);
            } else {
                printf("%d.   %.2f    Eroare: x nu poate fi negativ sau zero pentru ln(x) sau c este zero. \n",n, x);
            }
        } else if (x>a && b==0) {
            float numitor = pow(a+c, 3);
            if (numitor !=0) {
                F = (sin(x)+cos(b)) / numitor;
                printf("%d.      %.2f     %.2f \n ",n, x, F);
            }else {
                printf("%d.      %.2f      Eroare: Numitorul (a+c)^3 este 0. \n",n, x);
            }
        }else {
            float numitor = (x*x)-(c*c);
            if (numitor !=0) {
                F= (a+log(x)) / numitor;
                printf("%d.      %.2f     %.2f \n",n, x);
            }else {
                printf("%d.      %.2f     Eroare: Numitorul (x^2-c^2) este 0. \n",n, x);
            }
        }
        n++;
    }



    return 0;
}