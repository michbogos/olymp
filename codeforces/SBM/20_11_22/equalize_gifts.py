for _ in range(int(input())):
    n = int(input())
    candies = [int(i) for i in input().split()]
    oranges = [int(i) for i in input().split()]

    minc = min(candies)
    mino = min(oranges)

    res = 0

    for candy, orange in zip(candies, oranges):
        diffc = candy-minc
        diffo = orange-mino
        both = min(diffc, diffo)
        res += both
        diffc -= both
        diffo -= both
        res += diffc + diffo
    print(res)
    