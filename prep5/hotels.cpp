#include<stack>
#include<stdio.h>

using namespace std;

stack<pair<int, int>> s1, s2;

int find_minimum(){
    if (s1.empty() || s2.empty()) 
        return s1.empty() ? s2.top().second : s1.top().second;
    else
        return min(s1.top().second, s2.top().second);

}

int main(){
    int n, m, hotel;
    for(int i = 0; i < n; i++){
        scanf("%d", &hotel);
        hotels.push_back(hotel);
    }
    int sol[hotels.size()];
    sol[0] = 0;
    for(int i = 0; i < hotels.size(); i++){
        
    }
    return 0;
}