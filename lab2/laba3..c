#include<stdio.h>
#include<math.h>
int power(int base,int n){
    int x,y;
    y=1;
    for(x=1;x<=n;++x)
    y=y*base;
    return y;
}
int main()
{
    char number1[18]={0};
int x =0;
char number;
int sum=0;
int gen=-1;
unsigned int b=1;
printf("please input a positive hexadecimal number(start with 0x/0x)\n");
while((number=getchar())!='\n'){
    number1[x]=number;
    x++;
    gen++;
}
    if(number1[0]!='0'){
    printf("input error\n");
    return 0;}
    if(number1[1]!='x'&&number1[1]!='x'){
        printf("input error\n");
        return 0;
    }
    x--;
    while(x>1)
    {
        if(number1[x]<='9'&&number1[x]>='0')
        sum+=(number1[x]-'0') *power(16,gen-1);
        else if(number1[x]>='A'&&number1[x]<='F')
        sum+=(number1[x]-'A'+10)*power(16,gen-x);
        else if (number1[x]>='a'&&number1[x]<='f')
        sum+=(number1[x]+'A'-'a'-'A'+10)*power(16,gen-x);
        else{
            printf("input error\n");
            return 0;
        }
        x=--;
    }
    while(b!=0){
        b=b<<1;
    }
    if(sum>b-1){
        printf("the max is %u,your input number is too big\n",b-1);
    }
    else printf("%d\n",sum);
    return 0;





         }


