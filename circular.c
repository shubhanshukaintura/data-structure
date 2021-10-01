#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int rear=-1,front=0;
int arr[MAX];

// SHUBHANSHU KAINTURA   20011778      sec A

void enqueue(){
	int n;
	if(rear==MAX-1){
		printf("Queue is full\n");
		rear=-1;
		
	}else{	
		printf("enter data:");
		scanf("%d",&n);
		rear=(rear+1)%MAX;
		arr[rear]=n;
	}			
}

void dequeue(){
	if(front==rear){
		printf("Queue is Empty\n");
	}else{
		printf("deleted element is: %d\n",arr[front]);
		front=(front+1)%MAX;}
}
	
void peek(){
	if(rear==front){
		printf("Queue is empty\n");
	}else{
		printf("Peek Value: %d",arr[front]);
		}
}
	
void display(){
	int i;
	if(rear==front && arr==NULL){
		printf("Queue is empty\n");
	}
	else{
		if(rear>front){
			printf("Queue Elements Are:\n");
			for(i=front;i<=rear;i++){
				printf("  %d\n",arr[i]);}}
		else{
			printf("Queue Elements Are:\n");
			for(i=0;i<=rear;i++){
				printf("  %d\n",arr[i]);}

			for(i=front;i<=MAX;i++){
				printf("  %d\n",arr[i]);}	
			
			}
			}
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
