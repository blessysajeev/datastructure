#include<stdio.h>
#include<stdlib.h>
struct node
{
    int a;
    struct node *next;
};
struct node *head;

void beginsert ();
void endinsert ();
void randominsert();
void begin_delete();
void end_delete();
void random_delete();
void display();
void search();
void main ()
{
    int choice =0;
    while(choice != 9)
    {

        printf("\n MENU DRIVEN \n");
        printf("\n1.Insert in begining\n2.Insert at end\n3.Insert at any position\n4.Delete from Beginning\n5.Delete from end\n6.Delete node after specified location\n7.Search\n8.Display\n9.Exit\n");
        printf("\nEnter choice\n");
        printf("\n**************************************************************\n");
        scanf("\n%d",&choice);
        switch(choice)
        {
            case 1:
            beginsert();
            break;
            case 2:
            endinsert();
            break;
            case 3:
            randominsert();
            break;
            case 4:
            begin_delete();
            break;
            case 5:
            end_delete();
            break;
            case 6:
            random_delete();
            break;
            case 7:
            search();
            break;
            case 8:
            display();
            break;
            case 9:
            exit(0);
            break;
            default:
            printf("Invalid..");
        }
        }
        }
void beginsert()
       {
    struct node *temp;
    int item;
    temp = (struct node *) malloc(sizeof(struct node *));

        printf("\nEnter value\n");
        scanf("%d",&item);
        temp->a = item;
        if(head == NULL)
        {
        temp->next=NULL;
        head = temp;
        }
        else
        temp->next=head;
        head=temp;
        printf("\n Inserted node");
        }


void endinsert()
       {
    struct node *newnode,*temp;
    int item;
    newnode = (struct node*)malloc(sizeof(struct node));
         printf("enter the values\n");
        scanf("%d",&item);
        newnode->a = item;
        if(head == NULL)
        {
            newnode -> next = NULL;
            head = newnode;
            printf("\nNode inserted");
        }
        else
        {
            temp = head;
            while (temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp->next = newnode;
            newnode->next = NULL;
            printf("\nNode inserted");

        }
        }

void randominsert()
{
    int i,loc1,loc2,item;
    struct node *newnode, *temp;
    newnode = (struct node *) malloc (sizeof(struct node));

        printf("\nEnter element value");
        scanf("%d",&item);
        newnode->a = item;
      printf("\nEnter the location  ");
        scanf("\n%d",&loc1);
         printf("\nEnter the location  ");
        scanf("\n%d",&loc2);
        temp=head;
        {
           while(temp->a!=loc1 && temp->a!=loc2)
    temp=temp->next;
    newnode->next=temp->next;
    temp->next=newnode;}
        printf("\nNode inserted");
            if(temp == NULL)
            {
                printf("\ncan't insert\n");
                return;
            }


    }

void begin_delete()
       {
    struct node *temp;
    if(head == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        temp = head;
        head = temp->next;
        free(temp);
        printf("\nNode deleted from the begining ...\n");
    }
}
void end_delete()
{
    struct node *temp,*prev;
    if(head == NULL)
    {
        printf("\nlist is empty");
    }
    else if(head -> next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nOnly node of the list deleted ...\n");
    }

    else
    {
        temp = head;
        while(temp->next != NULL)
        {
            prev = temp;
            temp = temp ->next;
        }
        prev->next = NULL;
        free(temp);
        printf("\nDeleted Node from the end ...\n");
    }
}
void random_delete()
{
    struct node *temp,*prev;
    int loc,i;
    printf("\n Enter the location of the node after which want to perform deletion \n");
    scanf("%d",&loc);
    temp=head;
    for(i=0;i<loc;i++)
    {
        prev = temp;
        temp = temp->next;

        if(temp == NULL)
        {
            printf("\nCan't delete");
            return;
        }
        }
    prev ->next = temp ->next;
    free(temp);
    printf("\nDeleted node %d ",loc+1);
}
void search()
{
    struct node *temp;
    int item,i=0,flag;
    temp = head;
    if(temp == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nEnter item which you want to search\n");
        scanf("%d",&item);
        while (temp!=NULL)
            {
            if(temp->a == item)
            {
                printf("item found at location %d ",i+1);
                flag=0;
            }
            else
            {
                flag=1;
            }
            i++;
            temp = temp -> next;
           }
        if(flag==1)
           {
            printf("Item not found\n");
           }
           }

          }

void display()
{
    struct node *temp;
    temp = head;
    if(temp == NULL)
    {
        printf("empty");
    }
    else
    {
        printf("\n print values\n");
        while (temp!=NULL)
        {
            printf("\n%d",temp->a);
            temp = temp -> next;
        }
    }
}
