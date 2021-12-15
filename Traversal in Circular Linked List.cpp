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
void display_h() {
    struct node* ptr;
    ptr = head->next;
    while (ptr != head ) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
void display_t() {
    struct node* ptr;
    ptr = tail->next;
    while (ptr->next != tail) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
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
    Traversal(9);
    Traversal(2);
    Traversal(2);
    Traversal(9);
    cout << "The linked list is: ";
    display_h();
    cout << endl;
    cout << "The linked list is: ";
    display_t();
    cout << endl;
 

    return 0;
}
