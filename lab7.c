#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[])
{
    int a[100];
    int b=1;
    int c=0;
    for(b=1;b<argc;b++,c++)
    {
        a[c]=atof(argv[b]);
    }
    int i;
    int min=a[0];
    for(i=0;i<argc;i++)
    {
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("%d\n",min);
}
 