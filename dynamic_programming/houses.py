n = int(input())

inp = input()

houses = [int(i) for i in inp.split()]


def solve(houses):
  current_max = 0
  prev_max = 0

  for i in range(len(houses)):
    current_house = houses[i]
    new_max = max(current_max, prev_max + current_house)
    prev_max = current_max
    current_max = new_max

  return current_max

print(solve(houses))