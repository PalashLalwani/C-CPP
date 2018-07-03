//insertion at the biginning
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head;

void insert(int x){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
     if(head == NULL) {head = temp;}
     else{
         temp->next = head;
         head = temp;
     }

}

void print(){
    struct node * temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

int main(void) {
	// your code goes here
	int n,i,x;
	scanf("%d",&n);

	for(i=0;i<n;i++){
	 scanf("%d",&x);
	 insert(x);
	 print();
	}
	return 0;
}

