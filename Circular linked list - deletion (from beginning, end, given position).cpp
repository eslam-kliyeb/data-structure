// C++ Program to Traversal Singly Linked List
#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#define endl "\n"
#define pi 3.141592
#define ll  long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fixed cout << fixed; cout.precision(10)
using namespace std;
const int sz = (1e6 + 10);
const int c = (1e9);
const int mod = (1e9 + 7);
//-----------------------------------------------------------------------------------------
//fan
struct node {  // to represent a node of the linked list.
    int data;
    struct node* next;
};
struct node* head = NULL; // to represent a head node of the linked list. NULL=0
struct node* tail = NULL;
void Traversal(int new_data) {
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = new_data;
    if (head == 0) {
        head = new_node;
        tail = head;
    }
    else {
        tail->next = new_node;
        tail = new_node;
    }
    tail->next = head;
}
void Deletion_beg() {
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node = head;
    head = new_node->next;
    tail->next = head;
    free(new_node);
}
void Deletion_end() {
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

void insert_specified_position(int position) {
    struct node* temp_node = (struct node*)malloc(sizeof(struct node));
    int i = 1;
    struct node* pos = head;
    while (i < position) {
        pos = pos->next;
        i++;
    }
    int j = 1;
    temp_node = head;
    while (j < i - 1) {
        temp_node = temp_node->next;
        j++;
    }
    temp_node->next = pos->next;
    free(pos);

}
void display_h() {
    struct node* ptr;
    ptr = head->next;
    struct node* pt = head;
    cout << pt->data << " ";
    while (ptr != head) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
void display_t() {
    struct node* ptr;
    ptr = tail->next;
    struct node* pt = tail;
    while (ptr != tail) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << pt->data << " ";
}
//-----------------------------------------------------------------------------------------
//arr or vec
//-----------------------------------------------------------------------------------------
int main() {
    fast;
    //-------------------------------------------------------------------------------------
    //freopen("", "r", stdin);
    //-------------------------------------------------------------------------------------
    Traversal(3);
    Traversal(1);
    Traversal(7);
    Traversal(3);
    Traversal(1);
    Traversal(7);
    Traversal(2);
    Traversal(9);
    cout << "The linked list is: ";
    display_h();
    cout << endl;
    Deletion_beg();
    cout << "The linked list is: ";
    display_h();
    cout << endl;
    Deletion_end();
    cout << "The linked list is: ";
    display_t();
    cout << endl;
    insert_specified_position(2);
    cout << "The linked list is: ";
    display_h();
    cout << endl;
    return 0;
}
