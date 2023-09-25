#include<stdio.h>

int main(){
    char s1[50];
    char ch;
    
    int n=0;
    printf("ENTER YOUR STRING\n");
    scanf("%s",s1);
 char *ptr=s1;
    printf("WHICH CHARACTER DO YOU WANT TO CHECK\n");
    scanf(" %c",&ch);
    while(*ptr!='\0')
    {
        if(*ptr==ch)
        {
            n++;
        }
    }
    if(n==1)
    printf("YES\n");
    else
    printf("NO\n");
   
    return 0;
}