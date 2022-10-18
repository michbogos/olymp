tokens = input().rstrip().split(" ")
stack = []

for token in tokens:
    if token == "+":
        stack[-2] += stack[-1]
        del stack[-1]
    elif token == "-":
        stack[-2] -= stack[-1]
        del stack[-1]
    elif token == "/":
        stack[-2] /= stack[-1]
        del stack[-1]
    elif token == "*":
        stack[-2] *= stack[-1]
        del stack[-1]
    else:
        stack.append(int(token))

print(int(stack[0]))