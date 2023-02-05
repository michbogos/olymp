for _ in range(int(input())):
    x = 0
    y = 0
    n = int(input())
    arr = input()
    flag = False
    for command in arr:
        if command == "U":
            y += 1
        elif command == "D":
            y -= 1
        elif command == "L":
            x -= 1
        elif command == "R":
            x += 1
        if x == 1 and y == 1:
            flag = True
            print("YES")
            break
    if not flag:
        print("NO")
