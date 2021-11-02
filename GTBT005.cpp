// GTBT005 - Biểu thức sin(x)
#include<stdio.h>
#include<math.h>

#define eps 1e-5 
#define PI 3.14159265358979323846

int main()
{
    float S, T, x, exponential, factorial;
    int i, flag = -1;
    int t =0;
    scanf("%d", &t);
    while(t--){
        flag = -1;
        scanf("%f", &x);
        if(x<0){
            x = -x;
            flag = -flag;
        }

        while(x >= 2*PI) 
            x -=2*PI; 
        factorial = 1.0;
        S = T = exponential = x;
        for(i = 3; T > eps; i += 2, flag = -flag)
        {
            T = (exponential *= x * x) / (factorial *= i * (i - 1));
            S += flag * T;
        }

        printf("%.6f\n",S);
    }

    return 0;
}