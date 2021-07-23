import sys

add= 0

if __name__ == "__main__":
    for i in range(1,len(sys.argv)):
        add = add + int(sys.argv[i])
        av = add/i
    print("Average:",av)