#include<stdio.h>
int main()
{
    int celsius,fahr;
    int lower,upper,step;
    lower=0;
    upper=100;
    step=5;
     celsius=lower;
    while(celsius<=upper){
         fahr=9/5*celsius+32;
         printf("%d\t%d\n",celsius,fahr);
         celsius=celsius+step;
        }
}
