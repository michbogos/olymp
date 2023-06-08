n = int(input())

i = 0
while n != -1:
    i+= 1
    l = 0
    r = n
    if n != 1:
        while r-l > 1:
            mid = (l+r)//2
            if (mid*(mid-1))//2 >= n:
                r = mid
            else:
                l = mid
        
        if mid*(mid-1)//2 == n:
            print(f"Case {i}: {mid-1}")
        elif l*(l-1)//2 == n:
            print(f"Case {i}: {l-1}")
        elif r*(r-1)//2 == n:
            print(f"Case {i}: {r-1}")
        else:
            print(f"Case {i}: bad")
    else:
        print(f"Case {i}: 1")
    
    n = int(input())