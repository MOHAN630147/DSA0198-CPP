num1 = int(input("Enter the first integer: "))
num2 = int(input("Enter the second integer: "))
addition = num1 + num2
subtraction = num1 - num2
multiplication = num1 * num2
if num2 != 0:
    division = num1 / num2
    modulo = num1 % num2
else:
    division = "Undefined (division by zero)"
    modulo = "Undefined (modulo by zero)"
print(f"Addition: {num1} + {num2} = {addition}")
print(f"Subtraction: {num1} - {num2} = {subtraction}")
print(f"Multiplication: {num1} * {num2} = {multiplication}")
print(f"Division: {num1} / {num2} = {division}")
print(f"Modulo: {num1} % {num2} = {modulo}")

