#include<stdio.h>
#include<stdlib.h>
int main()
struct node* create(int ele);
void insert_beg(int ele);
void insert_end(int ele);
void insert_pos(int ele);
void delete_beg(int ele);
void delete_por(int ele);
void display();
void reverse();
struct node
{
	int data;
	struct node *next;
};

	struct node *head==NULL;
	int main()
	{
	 	int ch;
	 	do 
	 		printf("menu\n1.insert_beg\n2.insert_end\n3.insert_pos\n4.delete_beg\n6.delete_pos\n7.display\n"); 
	 		printf("enter your choice");
            scanf("%d",&ch);
            switch (ch)
            {
            case 1:
                printf("enter the value to be inserted:");
                scanf("%d",&ele);
                insert_beg(ele);
                break;
            case 2:
                printf("enter the value to be insterted:");
                scanf("%d",&ele);
                insert_end(ele);
                break;
            case 3:
                printf("enter the value to be inserted:");
                scanf("%d",&ele);
                insert_pos(ele);
                break;
            case 4:
                delete_beg();
                break;
                
            case 5:
                delete_end();
                break;
            case 7:
                delete_por();
                break;
            default:
            printf("wrong choice");    
             break;
            }
	}while (ch<=7)
    {
        return 0;
    }
    struct node* create(int ele)
    {
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        newnode ->data=ele;
        newnode ->next=NULL;
        return newnode;
    }
    void insert_beg(int ele)
    {
        struct node *newnode=create(int ele)
        {
            if (head==NULL)
            {
                head=newnode;
            }
            else{
                newnode->next=head;
                head=newnode;
            }
            
        }
    }
    void insert_end(int ele)
    {
        struct node *newnode=create(ele)
        if(head==NULL){
            head=newnode
        }
        else{
            struct node*temp = head;
            while (temp->next!=NULL)
            {
                temp = temp->next;
                temp->next=newnode;
            }
            
        }
    }
    void insert_pos(int ele)
    {
        struct node *newnode = create(ele);
        {
            int pos;
            printf("enter the postion:");
            scanf("%d",&pos);
            int count = 0;
            if(pos ==0)
            {
                newnode -> next=head;
                head = newnode;
            }
            else
            {
                struct node *temp=head;
                {
                    while (count<pos-1&&temp->next!=NULL)
                    {
                        temp = temp->next;
                        count++;
                    }
                    if(temp->next!=NULL)
                    {
                        newnode->next = temp->next;
                        temp->next=newnode;
                    }
                    else{
                        printf("position node not found");
                    }
                    
                };
                
            }
        };
        void delete_beg(int ele)
        {
            struct node* temp;
            if(head == NULL)
            {
                printf("it is not created")
            }
            else
            {
                temp = head;
                free(temp);
                head -> next;
            }
            
        }
        {
        	void insert_beg(1);
            void insert_beg()
        }
        
       return 0;
    }

   

    
