#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define f(X) ((X)*(X)*(X)-4*(X)-8.93)

#define EPS 1.0e-9

int main()
{
    int n=0;
    double a=2,b=3, x0;
    if(f(a)*f(b)>0)
    {
        printf("No root !\n");
        exit(0);
    }

    while(1)
    {
        x0 = (a+b)/2;
        n++;


        if(fabs(f(x0))< EPS)
        {
            printf("Root = %lf\n", x0);
            printf("No of Itr. = %d\n", n);
            exit(0);
        }

        if(f(a)*f(x0)<0)
             { b= x0; }
        else
              {a= x0;} 


        }

}
