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
    int arr[50][50]; // Declaration , Initialization
    // noot the size can change in  Declaration just
    int size_r;
    int size_c;
    cin >> size_r >> size_c;
    // To Traversal the num to arr ,we do this
    for (int i = 0; i < size_r; i++) {
        for (int j = 0; j < size_c; j++) {
            cin >> arr[i][j];
        }
    }
    // Pointers and arr 1D
    int* q;
    q = arr[0]; // arr[0] is reference to address arr
    // or
    q = &arr[0][0];
    
    // we say
    cout << q;
    // = 
    cout << arr;
    // =
    cout << &arr[0][0];
    // =
    cout << &arr;
    // =
    cout << arr[0];
   
    // we say 
    cout << *(arr+1);
    // =
    cout << arr[1];
    // =
    cout << arr[1][0];
    
    // we say
    cout << *(*(arr + 1) + 2);
    // =
    cout << arr[1][2];
    return 0;
}
