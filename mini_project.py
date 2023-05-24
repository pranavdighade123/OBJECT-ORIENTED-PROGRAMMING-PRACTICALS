'''
OBJECT ORIENTED PROGRAMMING | MINI PROJECT

AIM: TO CREATE SIMPLE CALCULATOR IN PYTHON

'''


def add(num1, num2):
    return num1 + num2

def subtract(num1, num2):
    return num1 - num2

def multiply(num1, num2):
    return num1 * num2

def divide(num1, num2):
    return num1 / num2

def calculator():
    print("Simple Calculator")
    print("-----------------")
    print("Operations:")
    print("1. Addition")
    print("2. Subtraction")
    print("3. Multiplication")
    print("4. Division")

    choice = input("Enter the operation number (1-4): ")

    num1 = float(input("Enter the first number: "))
    num2 = float(input("Enter the second number: "))

    result = None

    if choice == "1":
        result = add(num1, num2)
    elif choice == "2":
        result = subtract(num1, num2)
    elif choice == "3":
        result = multiply(num1, num2)
    elif choice == "4":
        if num2 != 0:
            result = divide(num1, num2)
        else:
            print("Error: Division by zero is not allowed.")
            return

    print("Result:", result)

calculator()
