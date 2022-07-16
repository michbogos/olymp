#include<random>

int main(){
    for(int i = 0; i < 1000000; i++){
        float r = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
        float l = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);

    }
    return 0;
}