//priority queue operations
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void insert_pq(int);
void delete_pq(int);
void create();
void check(int);
void display_pq();

int prior_q[MAX];
int front,rear;

int main()
{
	create();
	int ch,n;
	while(1)
	{
		printf("\n1-insert an element\n2-delete an element\n3-display the queue\n4-exit\n");
		printf("enter your choice:");
		scanf("%d",&ch);
	
		switch(ch)
		{
			case 1:
			printf("enter the value:");
			scanf("%d",&n);
			insert_pq(n);
			break;
			
			case 2:
			printf("enter the value:");
			scanf("%d",&n);
			delete_pq(n);
			break;
			
			case 3:
			display_pq();
			break;
			
			case 4:
			exit(0);
			
			default:
			printf("\nchoice is incorrect");
			
		}
	}
	return 0;
}

void create()
{
	front=rear=-1;
}

void insert_pq(int num)
{
	if(rear>=MAX-1)
	{
		printf("queue overflow!");
		return;
	}
	
	if(front==-1)
	{
		front++;
	}
	
	rear++;
	if(rear==0)
	{
		prior_q[rear]=num;
	}
	else
	{
		check(num);
	}
}

void check(int num)
{
	int i,j;
	for(i=0;i<=rear;i++)
	{
		if(num>=prior_q[i])
		{
			for(j=rear;j>=i;j--)
			{
				prior_q[j+1]=prior_q[j];
			}
		prior_q[i]=num;
		return;
		}
	}
	prior_q[i]=num;
}
	
void delete_pq(int num)
{
	if(front==-1)
	{
		printf("queue underflow!");
		return;
	}
	int i;
	for(i=0;i<=rear;i++)
	{
		if(num==prior_q[i])
		{
			for(int j=i;j<rear;j++)
			{
				prior_q[j]=prior_q[j+1];
			}
			rear--;	
			if(rear==-1)
			{
				front=-1;
			}
			return;
		}
	}
	printf("%d not found in queue\n",num);
}

void display_pq()
{
	if(front==-1)
	{
		printf("no elements in queue");
		return;
	}
	printf("priority queue elements:");
	for(int i=front;i<=rear;i++)
	{
		printf("%d\n",prior_q[i]);
	}
}			
	
