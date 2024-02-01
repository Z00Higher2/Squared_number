#This program takes the input from the user and returns the power of 2 if the number is within the range 0 < n < 100

num_1 = int(input("Enter the number: "))

while num_1 <= 0 or num_1 >= 100:
    num_1 = int(input("Please Re-enter: "))

print("The number square of", num_1, "is", pow(num_1,2))