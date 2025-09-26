#include<stdio.h>
void enqueue(int value);
void dequeue(int value);
void display();
struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL,*rear = NULL;
void enqueue(int value);
{
    struct node *newnode = (struct node *)
    malloc(sizeof(struct node));
    newnode -> data = value;
    newnode -> next = NULL;
    if(rear == NULL)
    {
        rear = newnode;
        front = newnode;
    }
    else
    {
        rear -> next = newnode;
        rear = newnode;
    }
    
}
void dequeue();
{
    if(front==NULL)
    {
        printf("Queue is underflow not possible today");
        return;
    }
    else
    {
        struct node *temp=front;
        {
            printf("\n the element to be deleted");
            if (front->next==NULL)
            {
                front = NULL;
                rear = NULL;
            }
            else
            {
                front = front -> next;
                temp = next = NULL;
            }
            free(temp);
            
            
        };
        
    }

    
}
void display();
{
    if (front == NULL)
    {
        printf("Queue us underflow, not possible today");
        return;
    }
    else
    {
        struct node *temp=front;
        {
            while (temp!=NULL)
            {
                printf("%d\t",temp->data);
                temp = temp->insert;
            }
            
        };
        
    }
    
    
}
void main()
{
    enqueue(10);
    display();
    dequeue(10);
    display();

}
