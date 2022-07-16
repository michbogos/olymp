ones = {0: 0,
        1: 2,
        2: 1,
        3: 1,
        4: 3,
        5: 1,
        6: 1,
        7: 1,
        8: 2,
        9: 2}
twos = {
    0: 0,
    1: 2,
    2: 2,
    3: 2,
    4: 2,
    5: 3,
    6: 3,
    7: 3,
    8: 4,
    9: 4,
}

three = {
    0: 0,
    1: 1
}

num = input()


s = 0

if len(num) == 1:
    s = ones[int(num)]

if len(num) == 2:
    s = ones[int(num[1])] + twos[int(num[0])]

if len(num) == 3:
    s = 1

print(s)

