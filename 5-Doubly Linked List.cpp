//                                وليس للانسان الا ما سعي
//---------------------------------Doubly Linked List-------------------------------------
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
	struct node* prv;
};
struct node* head = NULL;
struct node* tail = NULL;
void create(int new_data) {
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = new_data;
	if (head == NULL) {
		head = new_node;
		tail = head;
		head->prv = NULL;
	}
	else {
		tail->next = new_node;
		new_node->prv = tail;
		tail = new_node;
	}
	tail->next = NULL;
}
void print_by_head() {
	struct node* pr = head;
	cout << "list_print_by_head = ";
	while (pr != NULL) {
		cout << pr->data << " ";
		pr = pr->next;
	}
	cout << "\n";
}
void print_by_tail() {
	struct node* pr = tail;
	cout << "list_print_by_tail = ";
	while (pr != NULL) {
		cout << pr->data << " ";
		pr = pr->prv;
	}
	cout << "\n";
}
void length() {
	int counter = 0;
	struct node* temp = head;
	while (temp != NULL) {
		counter++;
		temp=temp->next;
	}
	cout << "length list = " << counter << "\n";
}
void insert_begin(int new_data) {
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = new_data;
	head->prv=temp;
	temp->next = head;
	head = temp;
	head->prv = NULL;
}
void insert_end(int new_data) {
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = new_data;
	tail->next = temp;
	temp->prv = tail;
	tail = temp;
	tail->next = NULL;
}
void insert_position(int new_data,int pos) {
	struct node* temp = head;
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = new_data;
	int counter = 1;
	while (counter<pos-1) {
		temp = temp->next;
		counter++;
	}
	new_node->prv = temp;
	new_node->next = temp->next;
	temp->next->prv = new_node;
	temp->next = new_node;
}
void reverse_linked() {
	struct node* next_node = head->next;
	struct node* next = next_node->next;
	struct node* temp = head;
	temp->next = NULL;
	temp->prv = next_node;
	while (next != NULL) {
		next_node->next = temp;
		next_node->prv = next;
		temp = next_node;
		next_node = next;
		next = next_node->next;
	}
	struct node* temp_tail = tail;
	temp_tail->prv=NULL;
	temp_tail->next = temp;
	tail = head;
	tail->next = NULL;
	head = temp_tail;
}
void delete_begin() {
	struct node* temp = head;
	head = head->next;
	head->prv = NULL;
	free(temp);
}
void delete_end() {
	struct node* temp = tail;
	tail = tail->prv;
	tail->next = NULL;
	free(temp);
}
void delete_position(int pos) {
	int counter = 1;
	struct node* temp = head;
	while (counter < pos ) {
		temp = temp->next;
		counter++;
	}
	temp->prv->next = temp->next;
	temp->next->prv = temp->prv;
	free(temp);
}
//-----------------------------------------------------------------------------------------
int main() {
	fast;
	//-------------------------------------------------------------------------------------
	//freopen("", "r", stdin);
	//-------------------------------------------------------------------------------------
	create(1);
	create(2);
	create(3);
	create(4);
	create(5);
	create(6);
	create(7);
	print_by_head();
	print_by_tail();
	length();
	//-----------------------------------
	insert_begin(0);
	print_by_head();
	print_by_tail();
	insert_end(8);
	print_by_head();
	print_by_tail();
	insert_position(5,5);
	print_by_head();
	print_by_tail();
	//---------------------------------
	reverse_linked();
	print_by_head();
	print_by_tail();
	reverse_linked();
	print_by_head();
	print_by_tail();
	//-------------------------------
	delete_begin();
	print_by_head();
	print_by_tail();
	delete_end();
	print_by_head();
	print_by_tail();
	delete_position(5);
	print_by_head();
	print_by_tail();
	
	return 0;
}
