n = int(input())

i = 1

count = 1

while i + 1 <= n:
    if count % 2 != 0:
        i = i * 9
        count +=1

    else:
        i = i * 2
        count += 1

if count % 2 == 0:
    print("Stan wins.")

else:
    print("Ollie wins.")
