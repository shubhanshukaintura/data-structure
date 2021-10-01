#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int rear=-1,front=0;
int *ptr=NULL;

// SHUBHANSHU KAINTURA   20011778      sec A

void enqueue(){
	int n;
	if(ptr==NULL){
		ptr=(int*)calloc(MAX,sizeof(int));
		}
	else{
		ptr=(int*)realloc(ptr,sizeof(int));
		}
		
	if(rear==MAX-1){
		printf("Queue is full\n");
	}else{	
		printf("enter data:");
		scanf("%d",&n);
		rear=rear+1;
		ptr[rear]=n;
	}			
}

void dequeue(){
	if(rear==-1){
		printf("Queue is Empty\n");
	}else{
		printf("deleted element is: %d\n",ptr[front]);
		front=front+1;}
}
	
void peek(){
	if(rear==-1){
		printf("Queue is empty\n");
	}else{
		printf("Peek Value: %d",ptr[front]);
		}
}
	
void display(){
	int i;
	if(rear==-1){
		printf("Queue is empty\n");
	}
	else{
		printf("Queue Elements Are:\n");
		for(i=front;i<=rear;i++){
			printf("  %d\n",ptr[i]);}}
}	
int main()
{
	int n;
	while(1)
	{
	printf("\nEnter choice:\n 1 enqueue\n 2.dequeue\n 3.Peek\n 4.display\n 5.exit\n");
	scanf("%d",&n);
	switch(n){
		case 1: enqueue();
			break;
		case 2: dequeue();
			break;
		case 3: peek();
			break;
		case 4: display();
			break;
		case 5: exit(0);
		default:printf("Wrong Input");
			break;
		}}
	return 0;
}
