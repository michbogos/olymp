while True:
    a, b, c, n = [int(i) for i in input().split()]

    boxes = [int(i) for i in input().split()]

    v = a * b * c

    available_v = sum([boxes[i]*(2**i)**3 for i in range(len(boxes))])
    count = 0

    if v > available_v:
        print(-1)

    while v > 0:
        for i in range(len(boxes)-1, -1, -1):
            print(boxes[i])
            if boxes[i] > 0:
                if v - (2**i**3) >= 0:
                    boxes[i] -= 1
                    v -= 2**i**3
                    count += 1
                else:
                    continue
    print(count)
            
