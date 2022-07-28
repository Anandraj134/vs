#include <string.h>
#include <stdio.h>

int main()
{
    char str[20];
    int a;
    printf("Enter String: ");
    scanf("%s", str);
    printf("Enter key value: ");
    scanf("%d",&a);
    
    str[0] = ((str[0] + a));
    printf("%c", str[0]);
    
    for(int i=0;i<=strlen(str);i++)
    {
        
        str[i] = ((str[i] + a));
        printf("%c", str[i]);
    };
    // printf("%s", str);
}
