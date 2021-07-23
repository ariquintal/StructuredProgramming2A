import sys

add = 0
sub = 0
mult = 0
div = 0

if __name__ == "__main__":

    num1 = int(sys.argv[1]) 
    num2 = int(sys.argv[2])

    add = num1 + num2
    print("This is the addition:", add)
    sub = num1 - num2
    print("This is the substraction:", sub)
    mult = num1 * num2
    print("This is the multiplication", mult)
    div = num1/num2
    print("This is the division", div)


