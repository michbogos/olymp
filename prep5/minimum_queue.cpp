#include<iostream>
#include<vector>
#include<deque>

using namespace std;

deque<pair<int, int>> q;
int n, a, b, c, x_0;

int main(){
    int cnt_added = 0;
    int cnt_removed = 0;
    int sum = 0;
    cin >> n >> a >> b >> c >> x_0;
    if(x_0%5 < 2){
        if (!q.empty() && q.front().second == cnt_removed) 
            q.pop_front();
            cnt_removed++;
        if (!q.empty()){
            sum = sum + q.front().first;
        }
    }
    else{
        while (!q.empty() && q.back().first > x_0)
            q.pop_back();
            q.push_back({x_0, cnt_added});
            cnt_added++;
        sum = sum + q.front().first;
        
    }
    int x = x_0;
    for(int i = 1; i < n; i++){
        x = ((a * x * x + b * x + c) / 100) % 1000000;
        if(x%5 < 2){
            if (!q.empty() && q.front().second == cnt_removed) 
                q.pop_front();
                cnt_removed++;
            if(!q.empty())
                sum = sum + q.front().first;
        }
        else{
            while (!q.empty() && q.back().first > x)
                q.pop_back();
                q.push_back({x_0, cnt_added});
                cnt_added++;
            sum = sum + q.front().first;
        }
    }
    cout << sum << "\n";

    return 0;
}