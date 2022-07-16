from collections import deque

while True:
    discarded = []
    cards = deque([i for i in range(1, int(input())+1)])
    if len(cards) == 0:
        exit()
    while len(cards) > 1:
        discarded.append(str(cards[0]))
        cards.popleft()
        cards.append(cards[0])
        cards.popleft()
    print("Discarded cards: " + ", ".join(discarded))
    print("Remaining card: " + str(cards[0]))

