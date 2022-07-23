#include <stdio.h>
#include <conio.h>
#include <malloc.h>

struct student
	{
		int rollno;
		struct student *link;
	};
struct student *start, *ptr, *cpt;

int main()
{
	int a;
	printf ("\t\t\tLinked List");
	void create();
	create();
	char ch1;
	do{	
	printf("\nChoose any option for insertion :- \n");
	printf("1.Print linked list.\n");
	printf("2.Insert at the beginning.\n");
	printf("3.Insert at the end.\n");
	printf("4.Insert after given information.\n");
	printf("5.Insert in sorted list\n");
	printf("0.Exit");
	scanf("%d", &a);
	
	
	switch(a)
	{
		case(1):
			{
				printf("Address of first node : %d", &start);
				printf("\nTraversing of linked list : \n");
				printf("Address\t\tInfo Part\tLink Part\n");
				ptr = start;
		
				while (ptr!=NULL)
				{
					printf("%d  \t\t %d  \t\t  %d\n", ptr, ptr->rollno, ptr->link);
					ptr = ptr->link;
				}
				
				break;
			}
		case(2):
			{
				printf("\nInsert node at the beginning.");
				cpt = (struct student*)malloc(sizeof(struct student));
				printf ("\nEnter information of node.");
				scanf("%d", &cpt->rollno);
				ptr = cpt;
				ptr->link = start;
				start = ptr;
				break;
			}
		case(3):
			{
				struct student *temp;
				printf("Insert node at the end.");
				cpt = (struct student*)malloc(sizeof(struct student));
				printf("\nEnter information of node.");
				scanf("%d", &cpt->rollno);
				temp = start;
				while (temp->link != NULL)
				{
					temp = temp->link;
				}
				ptr = cpt;
				temp->link = ptr;
				ptr->link = NULL;
				break;
			}
		case(4):
			{
				struct student *temp;
				int info;
				printf("\nInsert node after given information.");
				cpt = (struct student*)malloc(sizeof(struct student));
				printf("\nEnter information : ");
				scanf("%d", &info);
				printf("\nEnter information of node.");
				scanf("%d", &cpt->rollno);
				temp = start;
				while(temp->rollno != info)
				{
					temp = temp->link;
				}
				ptr = cpt;
				ptr->link = temp->link;
				temp->link = ptr;
				break;
			}
		case(5):
			{
				struct student *temp, *prev;
				printf("\nInsert node information in sorted list.");
				cpt = (struct student*)malloc(sizeof(struct student));
				printf("\nEnter information of node :");
				scanf("%d", &cpt->rollno);
				temp = start;
				while(temp->rollno < cpt->rollno)
				{
					prev = temp;
					temp = temp->link;
				}
				ptr = cpt;
				ptr->link = temp;
				prev->link = ptr;
				break;
			}
		case(0):
			{
				printf("Do you want to exit <y/n> : ");
				ch1 = getch();
			}
	}
	}while("true");
}

void create()
{
	char ch;
	ptr = (struct student*)malloc(sizeof(struct student));
	
	printf("\nEnter information of first node : ");
	scanf("%d", &ptr->rollno);
	start = ptr;
	
	do
	{
		cpt = (struct student *)malloc(sizeof(struct student));
		printf ("\nEnter information of next node : ");
		scanf("%d", &cpt->rollno);
		ptr->link = cpt;
		ptr = cpt;
		printf("Press y/n for next node : ");
		ch = getch();
	}while(ch=='Y'||ch=='y');
	
	ptr->link = NULL;
}
