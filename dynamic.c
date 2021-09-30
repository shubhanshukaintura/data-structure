#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int top=-1;
int *ptr=NULL;

// SHUBHANSHU KAINTURA   20011778      sec A

void push(){
	int n;
	if(ptr==NULL){
		ptr=(int*)calloc(MAX,sizeof(int));
		}
	else{
		ptr=(int*)realloc(ptr,sizeof(int));
		}
		
	if(top==MAX-1){
		printf("Stack is full\n");
	}else{	
		printf("enter data:");
		scanf("%d",&n);
		top=top+1;
		ptr[top]=n;
	}			
}

void pop(){
	if(top==-1){
		printf("Stack is Empty\n");
	}else{
		printf("deleted element is: %d\n",ptr[top]);
		top=top-1;}
}
	
void peek(){
	if(top==-1){
		printf("Stack is empty\n");
	}else{
		printf("Peek Value: %d",ptr[top]);
		}
}
	
void display(){
	int i;
	if(top==-1){
		printf("Stack is empty\n");
	}
	else{
		printf("Stack Elements Are:\n");
		for(i=top;i>=0;--i){
			printf("  %d\n",ptr[i]);}}
}	
int main()
{
	int n;
	while(1)
	{
	printf("\nEnter choice:\n 1.Push\n 2.pop\n 3.Peek\n 4.display\n 5.exit\n");
	scanf("%d",&n);
	switch(n){
		case 1: push();
			break;
		case 2: pop();
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