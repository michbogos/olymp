#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int lookup[100001][21];

void buildSparseTable(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        lookup[i][0] = arr[i];

    for (int j = 1; (1 << j) <= n; j++) {
 
        for (int i = 0; (i + (1 << j) - 1) < n; i++) {
 
            if (lookup[i][j - 1] > lookup[i + (1 << (j - 1))][j - 1])
                lookup[i][j] = lookup[i][j - 1];
            else
                lookup[i][j] = lookup[i + (1 << (j - 1))][j - 1];
        }
    }
}
int query(int L, int R)
{
    int j = (int)log2(R - L + 1);
 
    if (lookup[L][j] >= lookup[R - (1 << j) + 1][j])
        return lookup[L][j];
 
    else
        return lookup[R - (1 << j) + 1][j];
}
 
int main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    buildSparseTable(array, n);
    int n_queries;
    cin >> n_queries;
    for(int i = 0; i < n_queries; i++){
        int a, b;
        cin >> a >> b;
        if(a > b){
            swap(a, b);
        }
        cout << query(a-1, b-1) << "\n";
    }
    
    return 0;
}