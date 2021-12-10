// C++ Program to Implement Singly Linked List
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
    /* 
         node              
           |                       
           |             
    +------+------+    
    | data | next |    
    +------+------+ 
    */
};
struct node* head = NULL; // to represent a head node of the linked list. NULL=0
/* 
       head               
        |            
        |            
    +---+----+        
    |  NULL  |    
    +---+----+     
*/
void insert(int new_data) {
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
/*
   
                         +----------------------+
  struct node* new_node  | represent a new node | 
                         +----------------------+
    
                         +---------------------------------------------------------------------------+
  (struct node*)         | To take shape of node , we are represent in above (data , node* next..etc)| 
                         +---------------------------------------------------------------------------+

                                +-------------------------------------------------------------------------+
  malloc(sizeof(struct node))   | To determine the size of node shape of node , we are represent in above |
                                +-------------------------------------------------------------------------+

     in finally we gat

         new_node
            |
            |
    +--------------+
    | data  | next |
    +--------------+


*/
    new_node->data = new_data;
    /*
             new_node
                |
                |
    +------------------------+
    | data = new_data | next |
    +------------------------+
    */
    new_node->next = head;
    /*
            new_node
               |
               |
   +--------------------------------+
   | data = new_data | next =  head |
   +--------------------------------+
   */
    head = new_node;
}
void display() {
    struct node* ptr;
    ptr = head;
    while (ptr != NULL) {
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
    insert(3);
    insert(1);
    insert(7);
    insert(2);
    insert(9);
    cout << "The linked list is: ";
    display();

    return 0;
}
