#include<stdio.h>
#define MAX 5
int top=-1,stack[MAX];
void push();
void pop();
void display();
void main()
{
    int a,j;

    for(j=1;j<=4;j++)
    {
        printf("\n***STACK***\nPush:1\nPop:2\nDisplay:3\nExit:4\n");
        printf("Enter Choice:");
        scanf("%d",&a);
        switch(a)
        {
            case 1:
            printf(" ___Push___\n");
            push();
            break;
            case 2:
            printf(" ___Pop___\n");
            pop();
            break;
            case 3:
            printf(" ___Display____ \n");
            display();
            break;
            case 4:
            printf("___Exit___\n");
            break;
            exit(0);
            default:printf("Your choice is incorrect!");
            break;
        }
    }
}
void push()
{
    int a;
    for(a=0;a<=5;a++)
    {
    int item;
    if (top==MAX-1)
    {
        printf("Stack Overflow!\n");
    }
    else
    {
        printf("Enter elememt-%d:",a+1);
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;
    }
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack is underflow/empty\n");
    }
    else
    {
        printf("Deleted item is:%d\n",stack[top]);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
     else
    {
        printf("Stack is: (after pop):\n");
        for(i=top;i>=0;--i)
        {
            printf("%d\t",stack[i]);
        }
    }
}
