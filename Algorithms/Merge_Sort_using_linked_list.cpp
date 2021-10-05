#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

Node *merge(Node *head1, Node *head2)
{ 
    Node *fhead=NULL;
    Node *ftail=NULL;
    while(head1!=NULL && head2!=NULL){ 
            if(head1->data < head2->data){
        if(fhead==NULL){
            fhead=head1;
            ftail=head1;
            head1=head1->next; 
            }else{
            ftail->next=head1;
            ftail=ftail->next;
            head1=head1->next;
            }  
        }else{
          if(fhead==NULL){
            fhead=head2;
            ftail=head2;
            head2=head2->next; 
            }else{
            ftail->next=head2;
            ftail=ftail->next;
            head2=head2->next;
            }   
        }
    }
    while(head1!=NULL){
       if(fhead==NULL){
            fhead=head1;
            ftail=head1;
            head1=head1->next; 
            }else{
            ftail->next=head1;
            ftail=ftail->next;
            head1=head1->next;
            }  
    }
   while(head2!=NULL){
        if(fhead==NULL){
            fhead=head2;
            ftail=head2;
            head2=head2->next; 
            }else{
            ftail->next=head2;
            ftail=ftail->next;
            head2=head2->next;
            } 
    } 
    return fhead;
}
Node* mergeSort(Node *head) {
    if (head == NULL || head->next == NULL)
        return head;

    Node* fast = head->next;
    Node *slow = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* a = head, *b = slow->next;
    slow->next = NULL;

    Node* c = mergeSort(a);
    Node* d = mergeSort(b);
    Node *e = merge(c, d);
    
    return e;
}

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		head = mergeSort(head);
		print(head);
	}

	return 0;
}
