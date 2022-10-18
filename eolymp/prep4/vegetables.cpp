#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

double t, w, minWeight, newWeight;
int i, n, cuts;

struct vegetable{
    double weight;
    int parts, pos;
    vegetable(double weight, int parts, int pos): weight(weight),parts(parts),pos(pos) {};
    int operator < (const vegetable &a) const{
        return weight < a.weight;
    }
};

vector<double> veg;
priority_queue<vegetable> heap;

int main(void){
    scanf("%lf %d", &t, &n);
    minWeight = 1e10;
    for(i = 0; i < n; i++){
        scanf("%lf", &w);
        veg.push_back(w);
        heap.push(vegetable(w, 1, i));
        if(w < minWeight) minWeight = w;
    }
    cuts = 0;
    for(;;){
        vegetable cur = heap.top();
        if(minWeight / cur.weight >= t) break;
        heap.pop(); cuts ++;
        cur.parts++;
        cur.weight = veg[cur.pos]/cur.parts;
        if(cur.weight < minWeight) minWeight = cur.weight;
        heap.push(cur);
    }
    printf("%d\n", cuts);
}