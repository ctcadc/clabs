#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
 
void reverse(char s[],int i,int len)
{
   int a,b;
 
   b = len - (i + 1);
 
   if(i < b)
   {
        a = s[i];
        s[i] = s[b];
        s[b] = a;
 
        reverse(s,++i,len);
   }
}
 
int main()
{
    char s[100] = "ctcctc";
 
    reverse(s,0,strlen(s));
 
    printf("%s\n",s);
 
    return 0;
 
}