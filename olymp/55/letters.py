arr = input()

if arr[0] == arr[1] and arr[1] == arr[2] and arr[2] == arr[3] and arr[3] == arr[4] and arr[4] == arr[5]:
    print(arr[0])
elif arr[0:2] == arr[2:4] and arr[2:4] == arr[4:6]:
    print(arr[0:2])
elif arr[0:3] == arr[3:6]:
    print(arr[0:3])
else:
    print(arr)