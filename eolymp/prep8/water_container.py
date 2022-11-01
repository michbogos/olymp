n = int(input())

arr = [int(i) for i in input().split()]

i = 0
j = len(arr)-1
mx = 0
while(i != j):
    if(arr[i] < arr[j]):
        i += 1
    else:
        j -= 1
    if mx < (j-i)*min(arr[i], arr[j]):
        mx = (j-i)*min(arr[i], arr[j])
print(mx)