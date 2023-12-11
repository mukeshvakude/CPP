#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
	
	Node(int data){
		this->data = data;
		next = NULL;
	}
}; 

Node* inertNodeFirst(Node* &head,int data){
	
	Node* newNode = new Node(data);
	newNode->next = head;
	head = newNode;
	return newNode;
}

Node* insertAtLast(Node* &head,int data){
	Node* newNode = new Node(data);
	if(head == NULL){
		newNode->next = head;
		head = newNode;
		return newNode;
	}else{
		Node* temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;	
		return temp;
	}
	
}

void deleteNode(Node* &head,int key){
	Node* temp = head;
	while(temp->next->data != key){
		cout<<temp->data<<endl;
		temp = temp->next;		
	}
	Node *deleteNode = temp->next;
	temp->next = temp->next->next;
	delete deleteNode;
}


void display(Node* head){
	
	Node* temp = head;
	while(temp != NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
	
}

void insertAtMiddle(Node* &head , int position ,int key){
	int i=1;
	Node* temp = head;
	while(i < position && temp->next != NULL ){
		temp = temp->next;
		i++;
	}
	
	Node* newNode = new Node(key);
	newNode->next = temp->next;
	temp->next = newNode;
	
	
}

void reverse(Node* &head){
	Node* current = head ;
	Node* previous = NULL;
	while(current != NULL){
		head = current;
		current = current->next;
		head->next = previous;
		previous = head;
	}
}

void middleOfLinkedList(Node* head){
	Node* slow = head;
	Node* fast = head;
	int index = 0;
	while(fast!=NULL && fast->next!=NULL ){
		slow = slow->next;
		fast = fast->next->next;
	}
	
	cout<<"Middle index  is"<<slow->data<<endl;
	
	
}

Node* reverseRecurssion(Node* &head){
	if(head == NULL || head->next==NULL){
		return head;
	}
	Node* newHead = reverseRecurssion(head->next);
	head->next->next = head;
	head->next = NULL;
	return newHead;
	
}

void findLength(Node* head) {
    Node* slow = head;
    Node* fast = head;
    int length = 1;

    while (fast != nullptr && fast->next != nullptr) {
        // Move slow pointer one step
        slow = slow->next;
        // Move fast pointer two steps
        fast = fast->next->next;
        // Increment the length (counting each step)
        length += 2;
    }

    // Adjust the length if the total number of nodes is odd
    if (fast == nullptr) {
        length--;
    }

     cout<<"length of list "<<length<<endl; // Return the length of the linked list
}

int main(){
	
	Node* head = NULL;
	inertNodeFirst(head,10);
	inertNodeFirst(head,20);
	display(head);
	insertAtLast(head,30);
	insertAtMiddle(head,4,40);
	display(head);
	deleteNode(head,40);
	display(head);
	cout<<"Reversed Linked list is"<<endl;
	
	reverse(head);
	display(head);
	
	middleOfLinkedList(head);
	findLength(head);
	head = reverseRecurssion(head);
	display(head);
	
}
