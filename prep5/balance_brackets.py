open_list = ["("]
close_list = [")"]
def check(brackets):
    count = 0
    stack = []
    for i in brackets:
        if i in open_list:
            stack.append(i)
        elif i in close_list:
            pos = close_list.index(i)
            if ((len(stack) > 0) and
                (open_list[pos] == stack[len(stack)-1])):
                stack.pop()
            else:
                count += 1
    if len(stack) == 0:
        return count
    else:
        return count + len(stack)

print(check(input()))
