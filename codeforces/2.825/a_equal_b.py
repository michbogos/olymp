I=input
exec(int(I())*"I();a=I();b=I();print(min(abs(a.count('1')-b.count('1'))+1,sum(x!=y for x,y in zip(a,b))));")