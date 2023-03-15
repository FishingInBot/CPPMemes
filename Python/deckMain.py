from DeckOfCards import DeckOfCards
from random import randrange

def main():
    print("Testing card class!!!")
    n = eval(input("How many cards would you like to see? "))
    for i in range(n):
        rank = randrange(1,14)
        suit = "dchs"[randrange(4)]
        randCard = DeckOfCards(rank, suit)
        print(randCard)

#run Main only if this is the main called.
if __name__ == "__main__":
    main()