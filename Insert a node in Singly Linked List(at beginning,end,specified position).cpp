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
struct node* head=NULL;
struct node* temp=NULL;
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
void insert_at_beginning(int new_data) {
    struct node* start = (struct node*)malloc(sizeof(struct node));
    start->data = new_data;
    start->next = head;
    head = start;
}
void insert_at_end(int new_data) {
    struct node* end = (struct node*)malloc(sizeof(struct node));
    end->data = new_data;
    end->next = NULL;
    struct node* end_node;
    end_node = head;
    while (end_node->next != 0) {
        end_node = end_node->next;
    }
    end_node->next = end;
}
int lenght() {
    int i = 0;
    struct node* size;
    size = head;
    while (size != 0) {
        size = size->next;
        i++;
    }
    return i;
}
void insert_specified_position(int new_data , int position) {
    struct node* pos = (struct node*)malloc(sizeof(struct node));
    pos->data = new_data;
    int i = 0;
    struct node* temp_node = head;
    while (i < position-1) {
        temp_node = temp_node->next;
        i++;
    }
    pos->next = temp_node->next;
    temp_node->next = pos;

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
    Traversal(7);
    Traversal(2);
    Traversal(9);
    cout << "The linked list is: ";
    display();
    cout << endl;
    //---------------------------------------------------------------
    insert_at_beginning(5);
    insert_at_beginning(20);
    insert_at_beginning(60);
    cout << "The linked list is: ";
    display();
    cout << endl;
    //---------------------------------------------------------------
    insert_at_end(10);
    insert_at_end(11);
    insert_at_end(30);
    cout << "The linked list is: ";
    display();
    cout << endl;
    //---------------------------------------------------------------
    cout << lenght();
    cout << endl;
    //---------------------------------------------------------------
    insert_specified_position(50, 7);
    cout << "The linked list is: ";
    display();
    cout << endl;
    return 0;
}
