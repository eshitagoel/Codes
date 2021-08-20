'''
Program to input the marks of a student in 5 subjects and
    calculate the total marks and percentage obtained in class XII
    (5 papers of 100 marks each)
'''

a = float(input("English : "))
b = float(input("Physics : "))
c = float(input("Chemistry : "))
d = float(input("Maths : "))
e = float(input("Computers : "))

sum = a+b+c+d+e

print("\n Your total score is : ",sum)

percentage = (sum/5)

print("\n Your Percentage is  : ",percentage)