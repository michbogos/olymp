#include<stdio.h>

double a;
double b;

double f(double x){
    return x*x+a*x+b;
}

double min(double l, double r){
    while(r-l > 0.0001){
        double g = l+(r-l)/3;
        double h = l+2*(r-l)/3;
        if(f(g) >= f(h)){
            l = g;
        }
        else{
            r = h;
        }
    }
    return (r+l)/2;
}

int main(){
    scanf("%lf %lf", &a, &b);
    printf("%.2f", min(-10e8, 10e8));
    return 0;
}