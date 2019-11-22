#include<stdio.h>
int ctc(char s[])
{
    int i;
    int count1=0;
    for(i=0;s[i]!='\0',i++;){
        if (s[i]=='a'||s[i]=='A'){
            count1++;
        }
}

return count1;
}
int adc(char t[]){
    int i;
    int count2=0;
for(i=0;t[i]!='\0';i++){
    if (t[i]=='o'){
        count2++;
    }
}
return count2;
}
int main (){
    printf("please input a sentence contains no more than 50 characters ");
    char a[50];
    int i=0;
    a[i]=getchar();
    while(a[i]!='\n'){
        i++;
        a[i]=getchar();
    }
    printf("the number of a is %dand the number of 0 is%d",ctc(a),adc(a));
}

