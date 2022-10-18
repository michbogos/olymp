#include <iostream>
#include <vector>
#include <iomanip>
#define INF 1000000000
struct node{
    int a;
    int b;
    long double cost;
};

int main(){
    int m,n,a,b;
    long double cost;
    std::cin >> n >> m;
    std::vector<node> e;
    std::vector<double> d(n, INF);
    
    for(int i = 0; i < m; i ++){
        std::cin >> a >> b >> cost;
        e.push_back({a-1, b-1, 1./cost});
        e.push_back({b-1, a-1, 1./cost});
    }
    d[0] = 0;
    for(int i = 0; i < n; i++){
        bool any = false;
        for (int j=0; j<2*m; ++j)
            if (d[e[j].a] < INF)
                if (d[e[j].b] > d[e[j].a] + e[j].cost)
                {
                    d[e[j].b] = d[e[j].a] + e[j].cost;
                    any = true;
                }

        if (!any) break;
    }

    std::cout << std::fixed << std::setprecision(9);

    for(int i = 1; i < d.size(); i++){
        std::cout << d[i] << "\n";
    }

    return 0;
}