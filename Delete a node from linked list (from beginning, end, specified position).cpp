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
void Delete_at_beginning() {
    struct node* start = (struct node*)malloc(sizeof(struct node));
    start = head;
    head = head->next;
    free(start);
}
void Delete_at_end() {
    struct node* end = (struct node*)malloc(sizeof(struct node));
    struct node* new_end = (struct node*)malloc(sizeof(struct node));
    end = head;
    while (end->next != NULL) {
        new_end = end;
        end = end->next; 
    }
    new_end->next = NULL;
    free(end);
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
void Delete_specified_position(int position) {
    struct node* temp_node = (struct node*)malloc(sizeof(struct node));
    int i = 1;
    struct node* pos = head;
    while (i < position ) {
        pos = pos->next;
        i++;
    }
    int j = 1;
    temp_node = head;
    while (j < i-1) {
        temp_node = temp_node->next;
        j++;
    }
    temp_node->next = pos->next;
    free(pos);
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
    Delete_at_beginning();
    cout << "The linked list is: ";
    display();
    cout << endl;
    //---------------------------------------------------------------
    Delete_at_end();
    cout << "The linked list is: ";
    display();
    cout << endl;
    //---------------------------------------------------------------
    cout << lenght();
    cout << endl;
    //---------------------------------------------------------------
    Delete_specified_position(3);
    cout << "The linked list is: ";
    display();
    cout << endl;
    return 0;
}
