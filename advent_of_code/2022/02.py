s = 0
mx = 0
l = []

d = {
    "A X":3,
    "B X":1,
    "C X":2,
    "A Y":4,
    "B Y":5,
    "C Y":6,
    "A Z":8,
    "B Z":9,
    "C Z":7,
}
with open("02.txt", "r") as f:
    score = 0
    for line in f:
        score += d[line.replace("\n", "")]

print(score)