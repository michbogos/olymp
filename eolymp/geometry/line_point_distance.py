x,y,a,b,c=[int(i) for i in input().split()]
print(format(abs(a*x+b*y+c)/((a**2+b**2)**0.5), ".8f"))