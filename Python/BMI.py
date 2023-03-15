class BMI:
    def __init__(self):
        weight = None
        height = None

        while weight != "" or height != "":

            weight = input("Enter your weight (in weight): ")
            #check input
            if not weight.isdigit or weight == "":
                exit(-1)

            
            height =(input("Enter your height (in height): "))
            #check input
            if not height.isdigit or height == "":
                exit(-1)

            weight = eval(weight)
            height = eval(height)
            bmi = (weight*720)/(height*height)
            if 25 >= bmi >= 19:
                print("Your BMI is", bmi, "\nThats within the healthy range.\n")
            elif bmi < 19:
                print("Your BMI is", bmi, "\nThats below the healthy range.\n")
            elif bmi > 25:
                print("Your BMI is", bmi, "\nThats higher the healthy range.\n")

#run Main only if this is the main called.
if __name__ == "__main__":
    BMI()