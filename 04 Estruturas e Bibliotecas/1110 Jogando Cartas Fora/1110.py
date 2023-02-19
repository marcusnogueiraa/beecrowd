class cardStack:

    def __init__(self, numOfCards):
        self.cardList = [num for num in range(numOfCards, 0, -1)]
        self.discardedCards = []

    def discard(self):
        if len(self.cardList) > 1:
            removedCard = self.cardList.pop()

            nextCardOfTop = self.cardList[len(self.cardList) - 1]
            self.cardList.pop(len(self.cardList) - 1)

            self.cardList.insert(0, nextCardOfTop)
            self.discardedCards.append(removedCard)

    def log(self):
        print("Discarded cards:", end=' ')
        print(*self.discardedCards, sep=', ')
        print("Remaining card:", end=' ')
        print(*self.cardList, sep=', ')


n = int(input())

while n != 0:
    cards = cardStack(n)
    while len(cards.cardList) > 1:
        cards.discard()
    cards.log()
    n = int(input())

# https://www.beecrowd.com.br/judge/pt/problems/view/1110
# Ranking 01509º, Time 1.832, Submiss Date 18/02/2023 19:24:44 (Python 3.9)
