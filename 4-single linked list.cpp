//                                وليس للانسان الا ما سعي
//---------------------------------single linked list-------------------------------------
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
	tail->next = NULL;
}
void print() {
	struct node* pr = head;
	cout << "Linked list = ";
	while (pr != NULL) {
		cout << pr->data << " ";
		pr = pr->next;
	}
	cout << "\n";
}
void length() {
	int counter = 0;
	struct node* le = head;
	cout << " length of Linked list = ";
	while (le != NULL) {
		counter++;
		le = le->next;
	}
	cout << counter << "\n";
}
void insert_begin(int new_data) {
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = new_data;
	new_node->next = head;
	head = new_node;
}
void insert_end(int new_data) {
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = new_data;
	tail->next = new_node;
	tail = new_node;
	tail->next = NULL;
}
void insert_position(int new_data, int pos) {
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
	struct node* temp = head;
	struct node* next_node = head->next;
	struct node* next = next_node->next;
	temp->next = NULL;
	next_node->next = temp;
	while (next != NULL) {
		temp = next_node;
		next_node = next;
		next = next_node->next;
		next_node->next = temp;
	}
	tail = head;
	head = next_node;
}
void delete_begin() {
	struct node* temp = head;
	head = head->next;
	free(temp);
}
void delete_end() {
	struct node* temp = head;
	while (temp->next != tail) {
		temp = temp->next;
	}
	tail = temp;
	temp = tail->next;
	tail->next = NULL;
	free(temp);
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
struct node* reverse_group(struct node* start, int k) {
	struct node* temp = start;
	struct node* next = NULL;
	struct node* prv = NULL;
	int count = 0;
	while (k > count && temp != NULL) {
		next = temp->next;
		temp->next = prv;
		prv = temp;
		temp = next;
		count++;
	}
	if (next != NULL) {
		start->next = reverse_group(next, k);
	}
	return prv;
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
	print();
	length();
	//-----------------------------------
	insert_begin(0);
	print();
	insert_end(8);
	print();
	insert_position(5, 5);
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
	head=reverse_group(head,3);
	print();
	return 0;
}
