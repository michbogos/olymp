queries = []

with open("input.txt", "r") as f:
    for line in f:
        if line != "\n":
            queries.append([int(i) for i in line.split()])

def SieveOfEratosthenes(n):
    prime = [True for i in range(n + 1)]
    p = 2
    while (p * p <= n):
        if (prime[p] == True):
            for i in range(p ** 2, n + 1, p):
                prime[i] = False
        p += 1
    prime[0]= False
    prime[1]= False
    return prime.count(True)

with open("output.txt", "w") as f:
    for i in queries:
        f.write(str(SieveOfEratosthenes(i[1]) - SieveOfEratosthenes(i[0]-1)))
        f.write("\n")
