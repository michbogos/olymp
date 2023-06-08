s1, s2 = input().split()

a, b = s1.split("^")
c, d = s2.split("^")

if int(a)**int(b) > int(c)**int(d):
  print(s1)
else:
  print(s2)