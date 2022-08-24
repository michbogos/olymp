#include<set>
#include<stdio.h>

int main(){
    int n, m, num;
    std::set<int> s;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &num);
        s.insert(num);
    }
    scanf("%d", &m);
    for(int u = 0; u < m; u++){
        scanf("%d", &num);
        if(s.count(num) > 0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}