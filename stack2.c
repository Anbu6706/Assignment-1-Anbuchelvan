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

int main(){
    char exp[100];
    int i,length;
    char ch;

    printf("Enter the expresiion =");
    scanf("%s",exp);

    length=strlen(exp);

    for(i=0;i<length;i++)
    {
        ch=exp[i];

        if(ch=='(') // IF opening parathesis push into stack
        {
            push(ch);
        }
        else if (ch==')') // If closing paranthesis pop from the stack
        {
            if(pop()=='\0')
            {
                printf("Not a balenced equation\n");
                return 0;
            }
        }
    }
    // After the checking of the expresion
    if(top== -1)
    {
        printf(" Balenced equation\n");
    }
    else{
        printf("Not a balenced equation\n");
    }
    return 0;

}

/*
How thw program works

1.It frist read the expression fromj the user

2.Scan each charecter the expression 

3.if ( -> Push into stack.

4. if )-> pop from the stack

5. if the stack becomes empty -> Balenced
*/