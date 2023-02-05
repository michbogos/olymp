for _ in range(int(input())):
    n = int(input())
    string = input()
    idx = 0
    while idx < len(string)//2:
        if string[idx] == string[len(string)-idx-1]:
            break
        idx += 1
    print(len(string)-(2*idx))