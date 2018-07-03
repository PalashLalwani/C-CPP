//insertion at the end

#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head;

void print(){
    struct node * temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}


void insert(int x){
	struct node * temp1 = (struct node*)malloc(sizeof(struct node));

    temp1->data = x;
    temp1->next = NULL;
    if(head == NULL) {head = temp1;}
    else {
    	struct node * ptr = head;
    	while(ptr->next != NULL){
    		ptr = ptr->next;
    	}
    	ptr->next = temp1;
    }

	// temp1->data = x;
	// temp1->next = NULL;
	// if(head == NULL){
	// 	head = temp1;
	// }
    //    struct node * ptr = head;
    //    while(ptr->next != NULL){
    //    	ptr = ptr->next;
    //    }
    //    ptr->next = temp1;


	// temp = head;
	// if(temp == NULL){
	// 	temp->data = x;
	// 	temp->next = NULL;
	// }
	// else {
	// 	while(temp->next != NULL){
	// 		temp = temp->next;
	// 	}
	// 	temp->next->data = x;
	// 	temp->next->next = NULL;

	// }

}





int main(void) {
	// your code goes here
	head = NULL;
	int n,i,x;
	scanf("%d",&n);

	for(i=0;i<n;i++){
	 scanf("%d",&x);
	 insert(x);
	 print();
	}
	return 0;
}

