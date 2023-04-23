divisors = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43]

with open("divisor.dat", "r") as f:
    N = int(f.readline())
    ress = 1

    for n in range(1, N+1):
        divs = []
        while n > 1:
            i = 1
            while n%divisors[len(divs)] == 0:
                n//=divisors[len(divs)]
                i+=1
            if n%divisors[len(divs)] != 0:
                divs.append(i)
        res = 1
        for i in divs:
            if i != 0:
                res*=i
        ress*=res
    
    with open("divisor.sol", "w") as ff:
        ff.write(str(ress))
