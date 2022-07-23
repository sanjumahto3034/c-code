#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct Node{
	int data;
	struct Node *next;
};
struct Node *ptr, *cpt; 
void point(struct Node *ptr){
	while(ptr!=NULL){
		printf("Value is : %d\n",ptr->data);
		printf("Address of Current Node is : %d\n",ptr);
		printf("Address of Next Node is : %d\n",ptr->next);
		ptr = ptr->next;
	}
}

struct Node * firsts(struct Node * first, int data){
	struct Node * ptr;
	ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->next = first;
	ptr->data = data;
	return ptr;
}
int main(){
	struct Node *first;
	struct Node *second;
	struct Node *third;
	
	first = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	
	first->data = 10;
	first->next = second;
	
	second->data=20;
	second->next = third;
	
	third->data=30;
	third->next=NULL;
	
	point(first);
	first = firsts(first, 5);
	point(first);
	
	
	
	
	return 0;
	
}
