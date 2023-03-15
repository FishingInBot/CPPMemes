import random
from random import randrange


class DeckOfCards:
    card_types = ['d', 'c', 'h', 's']

    #constructor
    def __init__(self, r, s):
        if s in self.card_types:
            if s == 'd':
                self.suit = 'Diamonds'
            elif s == 'c':
                self.suit = 'Clubs'
            elif s == 'h':
                self.suit = 'Hearts'
            else:
                self.suit = 'Spades'
        else:
            exit("Enter valid Card Type.")
        if 0 <= r <= 13:
            self.rank = r

    #getters
    def getRank(self):
        return self.cardNames(self.rank)

    def getSuit(self):
        return self.suit

    def getValue(self):
        if(self.rank < 10):
            return self.rank
        else:
            return 10

    #helper method for card names
    def cardNames(self, num):
        d = {0: 'Joker', 1: 'Ace', 2: 'Two', 3: 'Three', 4: 'Four', 5: 'Five',
             6: 'Six', 7: 'Seven', 8: 'Eight', 9: 'Nine', 10: 'Ten', 11: "Jack",
             12: "Queen", 13: "King"}

        if 0 <= num <= 13:
            return d[num]
        else:
            exit("Given wrong Number.")

    #toString
    def __str__(self):
        return self.cardNames(self.rank) + " of " + str(self.getSuit()) + " counts " + str(self.getValue())

#Main
def main():
    print("Testing card class")
    n = eval(input("How many cards would you like to see? "))
    for i in range(n):
        rank = randrange(1, 14)
        suit = "dchs"[randrange(4)]
        randCard = DeckOfCards(rank, suit)
        print(randCard)

#run Main only if this is the main called.
if __name__ == "__main__":
    main()