a = "10"
b = "10"
a = a[::-1]
b = b[::-1]
max_len = max(len(a), len(b))
a = a.zfill(max_len)
b = b.zfill(max_len)

result = ""
carry = 0

for i in range(len(a)):
    if a[i] == "1":
        bita = 1
    else:
        bita = 0
    if b[i] == "1":
        bitb = 1
    else:
        bitb = 0
    
    res = bita^bitb^carry
    result += str(res)
    carry = bita^bitb^carry

print(a,b)
print(str(carry)+result)

#print(result.zfill(max_len))
