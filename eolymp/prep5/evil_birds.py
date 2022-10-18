from collections import OrderedDict
class bird:
    pos:int
    direction:int
    t:int
    def __hash__(self) -> int:
        return id(self)

length = int(input())

n = int(input())

right = [bird(i, 1, 0) for i in input().split()]

m = int(input())

left = [bird(i, -1, 1) for i in input().split]

birds = []

birds = dict.fromkeys(birds.extend(right, left))

while len(birds) != 0:
    for bird in birds.keys():
        bird.pos += bird.direction





