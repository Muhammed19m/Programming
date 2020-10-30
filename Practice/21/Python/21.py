def bmi(weight: float, height: float):
    BMI = weight/(height*height)
    return BMI

def print_bmi(bmi: float):
        if bmi < 18.5: print('Underweight')
        elif 18.5 <= bmi and bmi < 25.0: print('Normal weight')
        elif 25.0 <= bmi and bmi < 30.0: print('Overweight')
        else:  print('Obesity')

weight, height = input().split()
weight = float(weight)
height = float(height)/100
print_bmi(bmi(weight, height))