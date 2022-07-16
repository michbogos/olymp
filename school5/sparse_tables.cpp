#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <math.h>
#define ULL long
#define MOD 4294967296
using namespace std;

ULL lookup[100001][21];

void buildSparseTable(vector<ULL> arr, int n)
{
    for (ULL i = 0; i < n; i++)
        lookup[i][0] = arr[i];

    for (ULL j = 1; (1 << j) <= n; j++) {
 
        for (ULL i = 0; (i + (1 << j) - 1) < n; i++) {
 
            if (lookup[i][j - 1] < lookup[i + (1 << (j - 1))][j - 1])
                lookup[i][j] = lookup[i][j - 1];
            else
                lookup[i][j] = lookup[i + (1 << (j - 1))][j - 1];
        }
    }
}
ULL query(ULL L, ULL R)
{
    ULL j = (ULL)log2(R - L + 1);
 
    if (lookup[L][j] <= lookup[R - (1 << j) + 1][j])
        return lookup[L][j];
 
    else
        return lookup[R - (1 << j) + 1][j];
}
 
int main()
{
    ULL sol;
    ULL n, m, a, b;
    cin >> n >> m >> a >> b;
    vector<ULL> array;
    array.reserve(n);
    cout << "reserved\n";
    while(n > 0 && m > 0 && a > 0 && b > 0){
        sol = 0ULL;
        for(int i = 1; i < n+1; i++){
            cout << ((a*i)+b)%MOD;
            array[i-1] = ((ULL)((a*i)+b)%MOD);
        }
        buildSparseTable(array, array.size());
        for(int i = n+1; i < n+(2*m)+1; i = i + 2){
            sol += query(min((a*(i)+b)%MOD, (a*(i+1)+b))%MOD, max((a*(i)+b)&MOD, (a*(i+1)+b)%MOD));
        }
        cout << sol << "\n";
        cin >> n >> m >> a >> b;
        array.clear();
    }
    
    return 0;
}