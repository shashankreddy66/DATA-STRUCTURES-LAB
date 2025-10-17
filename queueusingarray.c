//queue using array
#include<stdio.h>
#define SIZE 5
int queue[size];
int front =-1,rear=-1;
void enqueue(int value){
  if(rear == SIZE-1) {
  printf("queue is overflow\n");
  }else{
  if(front==-1){
    front=0;
    rear++;
    queue[rear]=value;
    printf("%D ENQUEUE INTO QUEUE\n",value);
  }
  }
}
void dequeue(){
  if(front==-1||front>rear)
    printf("queue is under flow);
  else{
      printf("%d dequeue from queue\n",queue[front]);
front++;
}
}
      


