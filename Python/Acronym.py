class Acronym:
    def __init__(self):
        phrase = None
        print("This program builds acronyms. Press enter without anything to stop.\n")
        while phrase != "":
            phrase = input("Enter a phrase: ").split()
            array = list(phrase.split(" "))
            for i in array:
                acronym = acronym+i[0].capitalize()
            print("The acronym is", acronym)
        

#run Main only if this is the main called.
if __name__ == "__main__":
    Acronym()