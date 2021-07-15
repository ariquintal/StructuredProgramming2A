import sys


def alternatingSums(input):
    return[sum( [input[i] for i in range(0, len(input)) if i%2!= 0]), sum([input[i] for i in range(0,len(input)) if i%2==0])]

if __name__ == "__main__":
    
    print(alternatingSums([50,60,60,45,70]))

    fila = [1,150,190,170,-1,-1,160,70]
    filaOrde = sorted(fila)
    output = []
    print(fila)
    print(filaOrde)
    print(output)


    str = "amor a roma"
    strReverse = str[::-1]
    print(str)
    print(strReverse)