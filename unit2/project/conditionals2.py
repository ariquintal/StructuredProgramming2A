import sys

n3 = [i for i in range(1,101) if i%3==0]
n5 = [i for i in range(1,101) if i%5==0]

if __name__ == "__main__":
    print("Numbers divisible by 3:", n3)
    print("Numbers divisibles by 5:", n5)