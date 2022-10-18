#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

#define MOD 4294967296
int lookup[25000][16];
void buildSparseTable(unsigned long long arr[], unsigned long long n)
{
    for (int i = 0; i < n; i++)
        lookup[i][0] = arr[i];

    for (int j = 1; (1 << j) <= n; j++) {
 
        for (int i = 0; (i + (1 << j) - 1) < n; i++) {
 
            if (lookup[i][j - 1] <
                        lookup[i + (1 << (j - 1))][j - 1])
                lookup[i][j] = lookup[i][j - 1];
            else
                lookup[i][j] =
                         lookup[i + (1 << (j - 1))][j - 1];
        }
    }
}
int query(int L, int R)
{
    int j = (int)log2(R - L + 1);
    if (lookup[L][j] <= lookup[R - (1 << j) + 1][j])
        return lookup[L][j];
 
    else
        return lookup[R - (1 << j) + 1][j];
}

int main(){
    unsigned long long n, m, a, b;
    cin >> n >> m >> a >> b;
    while(n > 0 and m > 0 and a > 0 and b > 0){
        unsigned long long sum = 0;
        unsigned long long array[n];
        int queries[m*2];
        for(int i = 1; i <= n; i++){
            array[i-1] = (((a * i)) + b)%MOD;
        }
        cout << "array DONE" << "\n";
        for(int i = n+1; i <= n + 2*m; i++){
            queries[i-n-1] = (((a * i) + b)%MOD)%n;
        }
        cout << "queries DONE" << "\n";
        buildSparseTable(array, n);
        cout << "sparse table DONE" << "\n";
        for(int i = 0; i < m*2; i += 2){
            sum += query(min(queries[i]+1, queries[i+1]+1), max(queries[i]+1, queries[i+1]+1));
        }
        cout << sum << "\n";
        cin >> n >> m >> a >> b;
    }
    return 0;
}