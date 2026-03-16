#include<stdio.h>
#include<string.h>

#define MAX 100 // max size of stack

char stack[MAX];// stack array to store charecter
int top =-1;// Top variable to track the top of the stack

// Function to push the charecter into the stack
void push(char ch)
{
    if(top== MAX-1)//To xcheck if the stack is full
    {
        printf("stack over flow\n");
    }
    else
    {
        top++;// Move to next positio0n 
        stack[top]=ch;// INsert the charecter  into the stack
    }
}
// Funtion to npop the charecter from the stack
char pop()
{
    if(top == -1) // To check if the stack is empty
    {
        printf("stack Undeflow\n");
        return '\0';
    }
    else
    {
        return stack[top--];// To return the top elememnt and decrese the top
    }
}
int main()
{
    char str[100];//Array to store input string
    int i;

    printf("Enter a string=");
    scanf("%s",str);
     // push the char od string to stack
    for(i = 0;i<strlen(str);i++)
    {
        push(str[i]);
    }
    // pop the char from the stack
    for(i=0;i<strlen(str);i++)
    {
        str[i] = pop();
    }

    printf("reversed string = %s",str);

    return 0;
}

/*
  How does this work?
  
   1.Each charecter of the strinfg is pushed into the stack

   2.Stack follows LIFO=last in frist out

   3.when we pop char the come in referse order
*/