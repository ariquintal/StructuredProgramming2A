import sys


def listElementSum(input):
    add = 0
    for colum in range(0,len(input[0])):
        for row in range(0,len(input)):
            if input[row][colum] == 0: 
                break
            add += input[row][colum]
    return add

if __name__ == "__main__":
    print("Practica 2 CodeBots")

    edificio = [[0,1,1,2],
                [0,5,0,0],
                [2,0,3,3]]


    print(listElementSum(edificio))


    for i in range (0,len(edificio[0])):
        for j in range(0,len(edificio)):
            print(f'edificio[{j}][{i}]: {edificio[j][i]}')