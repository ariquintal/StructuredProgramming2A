import sys

if __name__ == "__main__":
    for m in range(1,13):
        print("\nMonth:", m)
        if m==2:
            for day in range(1,29):
                print("Day:", day)
        elif m== 4:
            for day in range(1,31):
                print("Day:", day)
        elif m == 6:
            for day in range(1,31):
                print("Day:", day)
        elif m == 9:
            for day in range(1,31):
                print("Day:", day)
        elif m == 11:
            for day in range(1,31):
                print("Day", day)
        else:
            for day in range(1,32):
                print("Day", day)