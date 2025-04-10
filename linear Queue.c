#include<stdio.h>
int MAX=10;
int queue[MAX];
int front=-1;
int rear=-1;

void enQueue(int n)
{
    if (rear == MAX-1)
    {
        printf("Queue is full");
    }
    else
    {
        rear++;
        queue[rear]=n;
    }
};
void deQueue()
{
    if(rear == -1)
    {
        printf("Queue is empty");
        
    }
    else
    {
        front++;
        printf("%d has been removed from Queue",queue[front]);
    }
}
void display()
{
    if(rear == front)
    {
        printf("Queue is Empty");
        
    }
    else
    {
        
    
    for(int i=front+1;i<=rear;i++)
    {
        printf("%d\t",queue[i]);
    }
    }
    
}
int main()
{
    int ch;
    printf("1.enQueue \n2.deQueue \n3.display \n4.Exit \nEnter your Choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:{
                    int n;
                    printf("Enter Number to be enQueued:");
                    scanf("%d",&n);
                    enQueue(n);
                    break;
                }
        case 2:{
                    deQueue();
                    break;
                }
        case 3:{
                    display();            
                }   break;
        case 4:{
                    break;
                }
    }
}