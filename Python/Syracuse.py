class Syracuse:
    def __init__(self):
        print("This program outputs a Syracuse sequence. Press enter without anything to stop.\n")
        n = None
        while n != "":

            n = (input("Enter the initial value (an int >= 1): "))
            #check input
            if not n.isdigit or n == "":
                exit(-1)

            print(n, end=" ")

            while n != 1:

                #if even
                n = int(n)
                if (n % 2) == 0:
                    n = int(n / 2)

                #else odd
                else:
                    n = int((3 * n) + 1)
                print(str(n), end=" ")

#run Main only if this is the main called.
if __name__ == "__main__":
    Syracuse()