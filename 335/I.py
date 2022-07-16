def f(x):
    if x <= 1:
        return x
    return f(x-1) + format(f(x-1), "b").count("1")

print(" ".join([str(f(i)) for i in range(1, int(input()) + 1)]))
