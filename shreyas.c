#include<stdio.h>
#include<stdio.h>

#define MAX 100

int top= -1;
int stack [MAX];
void push();
void pop();
int peek();
void display();

int main()
{
    int choice;
while (1)
{
printf("\nPerform operations on the stack:");
printf("\n 1. PUSH\n 2. POP\n 3. PEEK\n 4. DISPLAY\n 5. END\n");
printf("Enter the choice:\n");
scanf("%d", &choice);
switch (choice)
{
case 1:
push();
break;

case 2:
pop();
break;

case 3:
peek();
break;

case 4:
display();
break;

case 5:
exit(0);
default:
printf("INVALID INPUT!!\n");
}}}
void push()
{
    int x;
if (top == MAX )
{
printf("\n OVERFLOW!!!\n");
}
else{
printf("\n Enter the element you want to add in the stack:");
scanf("%d", &x);
top  = top + 1;
stack[top] = x;
}}
void pop()
{
if (top == -1)
 {

printf("\n UNDERFLOW!!!\n");
}
else {
printf("\n The popped element: %d", stack[top]);
 top = top -1;
}}

int peek()
{
if (top ==-1)
{
printf("\n UNDERFLOW!!!\n");
}
else{printf("The value of the top element: %d", stack[top]);
}
return 0;
}

 void display()
{
 int i;
 if (top==-1){
printf("\n STACK UNDERFLOW!!!\n");
}
else{
printf("\n Elements present in the stack are:\n");
for (i = top; i >= 0; --i)
printf("%d\n", stack[i]);
}}

