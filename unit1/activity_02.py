bankAccount = 1500
product = int(input("what is the cost of the product?\n"))

if(product<= bankAccount):
    print("successful payment")
else:
    print("declined")