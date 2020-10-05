#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{    int n
     FILE *fp;
     char ch;
     fp=fopen("file1.c", "r");
     if(fp==NULL)
        printf("file cannot be opened");
     else
     {
            printf("Enter value of n  to read last ‘n’ characters");
            scanf("%d",&n);
            fseek(fp,-n,2);
            while((ch=fgetc(fp))!=EOF)
            {
                 printf("%c\t",ch);
            }
      }
    fclose(fp);
    getch();
}
