import sys

a = 10
b = 20

print(f'Initial values: {a},{b}')

# ----Swap----
# a = 20
# b = 10
# ------
# a = b
# b = a

def swap( param1, param2):
    global a
    global b
    temp = a
    a = b
    b = temp
if __name__ == "__main__":
    print("Swap program")
    #swap(a,b)

    a,b = b,a
    print(f'values: {a},{b}')