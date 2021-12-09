#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#define endl "\n"
#define pi 3.141592
#define ll  long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fixed cout << fixed; cout.precision(10)
using namespace std;
const int sz = (1e6 + 10);
const int mod = (1e9 + 7);
//-----------------------------------------------------------------------------------------
//fan
//-----------------------------------------------------------------------------------------
//arr or vec
//-----------------------------------------------------------------------------------------
int main() {
    fast;
    //-------------------------------------------------------------------------------------
    //freopen("", "r", stdin);
    //-------------------------------------------------------------------------------------
    int arr[50]; // Declaration , Initialization
    // noot the size can change in  Declaration just
    int size;
    cin >> size;
    // To Traversal the num to arr ,we do this
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // To Insertion  the num in indx definite ,we do this
    int num, indx;
    cin >> num >> indx;
    // We must first make sure that indxe !(indxe<=0 || indxe > size+1);
    for (int i = size - 1; i >= indx-1; i--) {
        arr[i + 1] = arr[i];
    }
    arr[indx - 1] = num;
    size++;

    //To deletion  the vul of indx definite ,we do this
    cin >> indx;
    // We must first make sure that indxe !(indxe<=0 || indxe > size );
    for (int i = indx - 1; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;

    // Pointers
    int d = 10; // vul
    int* p; // Pointer
    p = &d;
    // p=b false ,because the pointer can not have vul
    // To print the vul of pointer
    cout << *p;
    // To print the address of pointer
    cout << p;

    // Pointers and arr 1D
    int* q;
    q = arr; // arr is reference to address arr
    q++; // Valid but arr++ notValid
    // q=arr[0] notValid
    q = &arr[0]; // Valid
    // to print arr
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    // or
    for (int i = 0; i < size; i++) {
        cout << *(arr+i) << " ";
    }
    // or
    q = arr;
    for (int i = 0; i < size; i++) {
        cout << *(q + i) << " ";
        // *(q + i) same q++
    }
    return 0;
}
