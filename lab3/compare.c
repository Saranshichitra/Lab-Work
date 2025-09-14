#include<stdio.h>
int main() {
    char l[2];
    printf("enter the character");
    scanf("%c", &l);
    if ((l=="AA") ||(l=="aa") || (l=="aA") ||(l=="Aa"))
    {
        printf("Excellent");
    }
    if ((l=="AB") ||(l=="ab") || (l=="aB") ||(l=="Ab"))
    {
        printf("Very Good");
    }
    if ((l=="BB") ||(l=="bb") || (l=="Bb") ||(l=="bB"))
    {
        printf("Good");
    }
    if ((l=="CC") ||(l=="cc") || (l=="cC") ||(l=="Cc"))
    {
        printf("Satisfactory");
    }
    if ((l=="CD") ||(l=="cd") || (l=="cD") ||(l=="Cd"))
    {
        printf("Pass");
    }
    if ((l=="BC") ||(l=="bc") || (l=="Bc") ||(l=="bC"))
    {
        printf("Average");
    }
    if ((l=="DD") || (l =="dd") || (l=="dD") ||(l=="Dd"))
    {
        printf("Just Pass");
    }
    if ((l=="FR") || (l=="fr") || (l=="Fr") ||(l=="fR"))
    {
        printf("Fail");
    }
return 0;
}