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
struct node {
    int data;
    struct node* next;
};
struct node* head = NULL;
struct node* temp = NULL;
void Traversal(int new_data) {
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = new_data;
    if (head == NULL) {
        head = new_node;
        temp = head;
    }
    else {
        temp->next = new_node;
        temp = new_node;
    }
    temp->next = NULL;
}
void Reverse_linked_list() {
    struct node* prevnode = (struct node*)malloc(sizeof(struct node)),
        * curentnode= (struct node*)malloc(sizeof(struct node)),
        * nextnode= (struct node*)malloc(sizeof(struct node));
    prevnode = 0;
    curentnode = head;
    nextnode = head;
    while (nextnode!=0) {
        nextnode = nextnode->next;
        curentnode->next = prevnode;
        prevnode = curentnode;
        curentnode = nextnode;
    }
    head = prevnode ;
}
void display() {
    struct node* ptr;
    ptr = head;
    while (ptr != 0) {
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
    Traversal(1);
    Traversal(2);
    Traversal(3);
    Traversal(4);
    Traversal(5);
    Traversal(6);
    cout << "The linked list is: ";
    display();
    cout << endl;
    //---------------------------------------------------------------
    Reverse_linked_list();
    cout << "The linked list is: ";
    display();
    cout << endl;

    return 0;
}
