#include <stdio.h>
#include <math.h>

int main() {
    double eps=1e-8; 
    double sum = 0;
    double h = 0.02;
    double old_I = 0;

    do {
        old_I = sum;
        sum = 0; h /= 2.0;
        for (int i = 0; i < 2 / h; i++)
        {
            if (i * h <= 1)
                sum += sqrt(i * h + h / 2.0 + 1) - sqrt(i * h + h / 2.0) - 0.5;
            else sum += exp(-(i * h + h / 2.0) - 1.0/(i * h + h / 2.0));
        }
        sum *= h;
    } while (fabs(sum - old_I) / 3.0 >=eps);
    printf("%.20lf\n", sum);
    return 0;
}
