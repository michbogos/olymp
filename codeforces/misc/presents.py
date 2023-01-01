import math
n = int(input())
if(n<7):
    print(0)
    exit(0)
    
m = (n-3)//2
    
k = (m-1)//3
    
print(int(m/2*(2+(m-1))-(m-k))+1)