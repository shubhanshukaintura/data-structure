#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

struct node *head=NULL,*newnode,*temp,*ptr;

struct node* insert(struct node *ptr,int ele,int flag){
		//newnode->next= head;
		if(ptr==NULL){
				printf("the elemnt doesnot exist");
		}else if(ptr->data == ele){
			newnode=(struct node*)malloc(sizeof(struct node*));
			newnode->next=NULL;
			printf("Enter data: ");
			scanf("%d",&newnode->data);
			if(flag==0){
				newnode->next=ptr;
				ptr=newnode;}
				//->next = newnode;
				// = newnode;}
			else if(flag==1){
				newnode->next=ptr->next;
				ptr->next=newnode;
			}
		}else{
			ptr->next = insert(ptr->next, ele ,flag);
		}
		return ptr;
}

void display(){
		temp = head;
		while(temp->next!=NULL){
				printf("%d->",temp->data);
				temp = temp->next;
		}
		printf("%d->",temp->data);
}

int main(){
	int ch,ele,flag=0;
	while(1){
		printf("enter choice:\n 1. Insert\n 2.Display\n 3.Exit\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:	if(head==NULL){
							newnode=(struct node*)malloc(sizeof(struct node*));
							newnode->next=NULL;//newnode;
							printf("Enter data: ");
							scanf("%d",&newnode->data);
							head=newnode;
					}
					else{
						printf("Do you want to insert before or after an element(0/1): ");
						scanf("%d",&flag);
						printf("enter the element before/after which you want to insert");
						scanf("%d",&ele);
						head=insert(head,ele,flag);
					}
					break;
					
			case 2: display();
					break;
					
			case 3:	exit(0);
					break;
		}
	}
	return 0;
}
