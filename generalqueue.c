#include<stdio.h>
#include<stdlib.h>
int main(){
    int QUEUE[10],MAXSIZE=10,item,front=-1,rear=-1,i,n;
    do{
        printf("Enter your choice:\n1.Insert Item\n2.Delete Item\n3.Display\n4.Exit\n");
        scanf("%d",&n);
    switch(n)
    {
    //Insert
        case 1:
            if(rear>=MAXSIZE-1){
            printf("Overflow\n");
            break;
            }
            else{
            printf("Enter an element:\n",item);
            scanf("%d",&item);
            if(front ==-1 && rear==-1)
            front=rear=0;
             else
               rear=rear+1;
              QUEUE[rear]=item;
              printf("Item inserted sucessfully");
                 }
        break;
    //Delete
        case 2:
            if((front==-1 && rear==-1)||(front==rear+1)){
            printf("Underflow\n");
            break; 
            }
            else{
            item=QUEUE[rear];
            front=front +1;
            printf("Item deleted sucessfully");
            }
        break;
    //display
        case 3:
        	if(front == -1) {
                    printf("Queue is empty\n");
                } else {
                    printf("Queue elements: ");
                    for(i = front; i <= rear; i++)
                        printf("%d ", QUEUE[i]);
                    printf("\n");
                }
                break;
    //exit
        case 4:
           exit(0);
        default : printf("Wrong Input");
    }
 } while(1);
 return 0;
}
   