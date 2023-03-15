
class Complex:
    #constructor
    def __init__(self, real, img):
        self.real = real
        self.img = img

    #toString
    def __str__(self):
        return str(self.real) + '+' + str(self.img) + 'i'

    #setters
    def setReal(self, real):
        self.real = real
    def setImg(self, img):
        self.img = img
    
    #getters
    def getReal(self):
        return self.real
    def getImg(self):
        return self.img
    
    #subtract
    def __sub__(self, other):
        return Complex(self.real-other.real, self.img-other.img)

    #equals
    def __eq__(self, other):
        if (self.real == other.real) and (self.img == other.img):
            return True
        else:
            return False


def main():
    c1 = Complex(2, 3)
    print(c1)
    c2 = Complex(4, 5)
    c3 = Complex(2, 3)
    print(c2)
    print(c1-c2)
    print(c1==c2)
    print(c1==c3)
main()
