import math
import tqdm


for m in range(300):
    arr = []
    for i in range(m):
        for j in range(m):
            if math.comb(i, j)==m:
                arr.append((i, j))
    print(m, len(arr), arr)