#include<stdio.h>
#include<math.h>

double a;
double vf, vff;


double f(double x){
    return sqrt((1.0-a)*(1.0-a)+x*x)/vf + sqrt(a*a+(1.0-x)*(1.0-x))/vff;
}

double ternary(double l, double r){
    while(r-l > 0.0000000001){
        double g = l+(r-l)/3.0;
        double h = r-(r-l)/3.0;
        if(f(g) > f(h)){
            l = g;
        }
        else{
            r = h;
        }
    }
    return l;
}

int main(){
    scanf("%lf %lf", &vf, &vff);
    scanf("%lf", &a);
    printf("%.8lf\n",ternary(0.0, 1.0));
    return 0;
}