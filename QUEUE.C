#include<stdio.h>
#include<conio.h>
#define size 10
void enqueue(int);
void dequeue();
void disp();
int queue[size],front=-1,rear=-1;
void main()
{
	int value,ch;
	clrscr();
	while(1)
	{
		printf("\n1.Insert");
		printf("\n2.Delete");
		printf("\n3.Display");
		printf("\n4.Exit");
		printf("\nEnter your choice : ");
		scanf("%d",&ch);
	    switch(ch)
	    {
		case 1:
			printf("Enter the value to be inserted : ");
			scanf("%d",&value);
			enqueue(value);
			break;
		case 2:
			dequeue();
			break;
		case 3:
			disp();
			break;
		case 4:
			exit(0);
		default:
			printf("\n Wrong choice !! Try again ");
	    }
	 }
}
void enqueue(int value)
{
	if(rear==size-1)
		printf("Overflow");
	else
	{
		if(front==-1)
			front=0;
		rear++;
		queue[rear]=value;
		printf("Inserted");
       }
}
void dequeue()
{
	if(front==rear)
		printf("Empty");
	else
	{
		printf("Deleted : %d",queue[front]);
		front++;
		if(front==rear)
			front=rear=-1;
       }
}
void disp()
{
	if(rear==-1)
		printf("Empty");
	else
	{
		int i;
		printf("Queue : ");
		for(i=front;i<=rear;i++)
			printf("%d ",queue[i]);
	}
}


