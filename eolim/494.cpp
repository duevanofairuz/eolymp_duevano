#include<stdio.h>
#include<string.h>

int main()
{
    char s[101];
    int sizes, con=0;
    scanf("%[^\n]s", s);
    sizes=strlen(s);
    for(int i=0; i<=sizes; i++){
        if(s[i]=='A' || s[i]=='I' || s[i]=='U' || s[i]=='E' || s[i]=='O' || s[i]=='Y'){
            con++;
        }
    }
    printf("%d", con);
    return 0;
}