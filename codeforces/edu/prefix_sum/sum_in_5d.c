#include<stdio.h>
#define ll long long 
int main(){
    int prefix [16][16][16][16][16] = {0};
    ll n1, n2, n3, n4, n5;
    scanf("%lld %lld %lld %lld %lld", &n1, &n2, &n3, &n4, &n5);
    for(ll a = 1; a < n1; a++){
        for(ll b = 0; b < n2; b++){
            for(ll c = 0; c < n3; c++){
                for(ll d = 0; d < n4; d++){
                    for(ll e = 0; e < n5; e++){
                        scanf("%d", &(prefix[a+1][b+1][c+1][d+1][e+1]));
                        ll res = 0;
                        for(int ai = 1; ai <= 1; ai ++){
                            for(int bi = 0; bi <= 1; bi ++){
                                for(int ci = 0; ci <= 1; ci ++){
                                    for(int di = 0; di <= 1; di ++){
                                        for(int ei = 0; ei <= 1; ei ++){
                                            if(((ai+bi+ci+di+ei)%2)==0){
                                                res -= prefix[a+ai][b+bi][c+ci][d+di][e+ei];
                                            }
                                            else{
                                                res += prefix[a+ai][b+bi][c+ci][d+di][e+ei];
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        prefix[a+1][b+1][c+1][d+1][e+1] += res;
                    }
                }
            }
        }
    }
    int q;
    int l1, l2, l3, l4, l5, r1, r2, r3, r4, r5;
    scanf("%d", &q);
    while(q--){
        scanf("%d %d %d %d %d %d %d %d %d %d", &l1, &l2, &l3,&l4, &l5, &r1, &r2, &r3, &r4, &r5);
        ll res = 0;
        for(int a = 0; a <= 1; a++){
            for(int b = 0; b <= 1; b++){
                for(int c = 0; c <= 1; c++){
                    for(int d = 0; d <= 1; d++){
                        for(int e = 0; e <= 1; e++){
                            if((a+b+c+d+e)%2 == 0){
                                res -= prefix[(a==0)*r1 + (a==1)*l1][(b==0)*r2 + (b==1)*l2][(c==0)*r3 + (c==1)*l3][(d==0)*r4 + (d==1)*l4][(e==0)*r5 + (e==1)*l5];
                            }
                        }
                    }
                }
            }
        }
        printf("%lld", res);
    }
    return 0;
}