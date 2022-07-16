cubes = input()

nums = "1234567890"

sol = ""

for cube in cubes:
    if cube in nums:
        sol += str((int(cube)+1)%10)
    else:
        sol += cube

print(sol)