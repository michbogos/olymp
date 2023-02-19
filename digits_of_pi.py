from mpmath import mp
from tqdm import tqdm
mp.dps = 100

a = mp.one
b = mp.one/mp.sqrt(2)
t = mp.one/4
p = mp.one

for i in tqdm(range(10)):
    a1 = (a+b)/2
    b1 = mp.sqrt(a*b)
    t1 = t - (p*mp.power((a-a1), 2))

    p1 = p*2
    a = a1
    b = b1
    t = t1
    p = p1


with open("pii.txt", "w") as f:
    f.write(str(mp.power(a+b, 2)/(4*t)))
print(mp.power(a+b, 2)/(4*t))