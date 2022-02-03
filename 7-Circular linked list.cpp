//                                وليس للانسان الا ما سعي
//---------------------------------Circular linked list-------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#define endl "\n"
#define pi 3.141592
#define ll  long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fixed cout << fixed; cout.precision(10)
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
using namespace std;
const int sz = 2 * (1e5 + 10);
const int c = (1e9 + 1);
const int mod = (1e9 + 7);
//-----------------------------------------------------------------------------------------
struct node {
	int data;
	struct node* next;
};
struct node* head = NULL;
struct node* tail = NULL;
void create(int new_data) {
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = new_data;
	if (head == NULL) {
		head = new_node;
		tail = head;
	}
	else {
		tail->next = new_node;
		tail = new_node;
	}
	tail->next = head;
}
void print() {
	struct node* pr = head->next;
	cout << "list = " << head->data  << " ";
	while (pr!= head) {
		cout << pr->data << " ";
		pr = pr->next;
	} 
	cout <<"\n";
}
void length() {
	int counter = 1;
	struct node* temp = head;
	while (temp->next != head) {
		counter++;
		temp=temp->next;
	}
	cout << "length list = " << counter << "\n";
}
void insert_begin(int new_data) {
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = new_data;
	temp->next = head;
	head = temp;
	tail->next = head;
}
void insert_end(int new_data) {
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = new_data;
	temp->next = head;
	tail->next =temp;
	tail = temp;
}
void insert_position(int new_data,int pos) {
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	struct node* temp = head;
	new_node->data = new_data;
	int counter = 1;
	while (counter < pos - 1) {
		temp = temp->next;
		counter++;
	}
	new_node->next = temp->next;
	temp->next = new_node;
}
void reverse_linked() {
	struct node* prv = (struct node*)malloc(sizeof(struct node)),
		       * node = (struct node*)malloc(sizeof(struct node)),
		       * next = (struct node*)malloc(sizeof(struct node));
	node = tail->next,
    next = node->next;
	while (node != tail) {
		prv = node;
		node = next;
		next = node->next;
		node->next = prv;
	}
	next->next = tail;
	head = node;
	tail = next;
}
void delete_begin() {
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node = head;
	head = new_node->next;
	tail->next = head;
	free(new_node);
}
void delete_end() {
	struct node* end = (struct node*)malloc(sizeof(struct node));
	struct node* new_end = (struct node*)malloc(sizeof(struct node));
	end = head;
	while (end->next != head) {
		new_end = end;
		end = end->next;
	}
	new_end->next = head;
	tail = new_end;
	free(end);
}
void delete_position(int pos) {
	struct node* temp = head;
	struct node* del = head;
	int counter = 1;
	while (counter < pos - 1) {
		temp = temp->next;
		counter++;
	}
	del = temp->next;
	temp->next = temp->next->next;
	free(del);
}
//-----------------------------------------------------------------------------------------
int main() {
	fast;
	//-------------------------------------------------------------------------------------
	//freopen("", "r", stdin);
	//------------------------------------------------------------------------------------
	create(1);
	create(2);
	create(3);
	create(4);
	create(5);
	create(6);
	create(7);
	print();
	length();
	//-----------------------------------
	insert_begin(0);
	print();
	insert_end(8);
	print();
	insert_position(5,5);
	print();
	//---------------------------------
	reverse_linked();
	print();
	reverse_linked();
	print();
	//-------------------------------
	delete_begin();
	print();
	delete_end();
	print();
	delete_position(5);
	print();
	
	return 0;
}
