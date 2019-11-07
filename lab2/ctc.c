
#include<stdio.h>

int main()
{
    unsigned int n=1;
    unsigned int c=0-1;
    unsigned int b=0;
    while(n!=0){
        n=n<<1;
        b=b+1;
    }
    printf("n=%d\n",b);
    printf("%u\n",c);
    return 0;
}
