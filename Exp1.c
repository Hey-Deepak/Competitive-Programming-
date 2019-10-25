#include<stdio.h>
#include<string.h>
int main()
{   
    int T;
    char s[10000];
    scanf("%d", &T);

    for (int i = 1; i <= T; i++){
        scanf("%s", s);

        for (int i = 0; i <=strlen(s) ; i++){   
            if (i%2 == 0){
                printf("%c", s[i]);
            };
        }
        printf(" ");
        for (int i = 0; i <strlen(s); i++) {   
            if (i%2 == 0){
                printf("%c", s[i+1]);
            };
        }
        printf("\n");
    }   
    return 0;
}
