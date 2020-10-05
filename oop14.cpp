#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<process.h>
int main()
{
    int s[10],top=-1,c,a,d,i,ch,m,e;
    clrscr();
    printf("\nEnter Max Size : ");
    scanf("%d",&c);
    do
    {
        printf("\nEnter Choice \n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        scanf("%d",&a);
        switch(a)
        {
            case 1:
                do
                {
                    if(top==c-1)
                        printf("\nOverFlow");
                    else
                    {
                        top=top+1;
                        printf("\nEnter the Element : ");
                        scanf("%d",&d);
                        s[top]=d;
                    }
                    printf("\nDo You Want to Enter More 1 or 0 : ");
                    scanf("%d",&ch);
                }
                while(ch==1);
                break;
            case 2:
                if(top==-1)
                    printf("\nUnderFlow");
                else
                    do
                    {
                        top=top-1;
                        printf()
                    }
        }
    }
}
