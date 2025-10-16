//queue using array
#include<stdio.h>
#define size 10
void enqueue();
void display();
void dqueue();
int queue[size];
int front = -1,rear = -1;
int main()
{
    enqueue(10);
    enqueue(10);
    display();
    return 0;
    dqueue();
    display();
}
void enqueue(int value);
{
    if(rear == size-1)
    {
        printf("queue is overflow");
        return;
    }
    else
    {
        if (front ==-1 && rear == -1)
        {
            front = 0;
            rear =0;
        }
        else
        {
            rear++;
        }
        
        
    }
    void dequeue();
    {
        if(front==-1||front>rear)
        {
            printf("Queue is underflow");
            return;
        }
        else
        {
            printf("the delete elements from the queue is %d",queue(front));
            front++;
        }
        
    }
    void display();
    {
        if(fornt == -1 ||front>rear)
        {
            printf("queue is underflow not possible to print");
            return;
        }
        else
        {
            printf("the element in the queue are:\n");
            for(int i=fornt;i<=rear;i++)
            {
                printf("%d\t",dqueue[i]);
            }
        }
    }
    
}
