#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 50

int stack[MAX_SIZE];
int top=-1;

void push()
{
	if(top == MAX_SIZE-1)
	{
		printf("stack is overflow");
	}
	else
	{
		int x;
  		printf("enter the element to be pushed:");
  		scanf("%d",&x);
  		top++;
  		stack[top]=x;
  		printf("\n %d pushed to the stack!!",x);
 	}
 }
 
void pop()
 {
 	if(top==-1)
 	{
 		printf("stack is underflow");
 	}
 	else
 	{
 		int x;
 		x = stack[top];
 		top--;
 		printf("\nthe popped element is:%d",x);
 	}
 }
 
 void display()
 {
 	if(top>=0)
 	{	
 		printf("\nthe stack elements are:");
 		for(int i=top;i>-1;i--)
 		{
 			printf("\n%d ",stack[i]);
 		}
 	}
 	else
 	{
 		printf("the stack is empty");
 	}
 }

 
 void search()
{
    int key, flag = 0;
    printf("enter the key to be searched: ");
    scanf("%d", &key);

    // Set flag to 1 if the stack is initially empty
    if (top == -1)
    {
        flag = 1;
    }

    for (int i = top; i > -1; i--)
    {
        if (stack[i] == key)
        {
            printf("%d FOUND IN STACK!!\n\n", key);
            flag++;
            break;
        }
    }

    if (flag == 0)
    {
        printf("%d NOT FOUND IN STACK!!\n\n", key);
    }
}

        
int main()
{
	int choice;
	do
	{
		printf("STACK USING ARRAY!!");	
		printf("\n1.push\n2.pop\n3.display\n4.search\n5.exit\nEnter Your Choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push();
     				break;
     				
			case 2:pop();
      				break;
      
			case 3:display();
      				break;
      
			case 4:search();
     				break;
     
			case 5:exit(0);
			
			default: printf("enter a valid choice(1,2,3,4,5)!");
				 break;
		}
	}while(choice!=5);
return 0;
}

 
                   
     
