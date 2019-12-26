#include<stdio.h>
int count(char str[]){
    int i =0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}

void reverse(char a[],char b[]){
    int c = count(a)-1;
    int d = 0;
    while(c>=0){
        b[d]=a[c];
        d++;
        c--;
    }
}

int main()
{
    char a[100];
    int i=0;
    a[i]=getchar();
    while(a[i]!='\n'){
        i++;
        a[i]=getchar();
    }
    char b[100];
    reverse(a,b);
    printf("%s\n",b);
}