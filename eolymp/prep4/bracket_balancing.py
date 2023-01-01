open_list = ["[","("]
close_list = ["]",")"]
def check(brackets):
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
                return "No"
    if len(stack) == 0:
        return "Yes"
    else:
        return "No"

print(check(input()))
