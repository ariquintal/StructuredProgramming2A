import sys
import random as rd
from typing import Sequence

mylist = list()
otherlist = [] ### otherlist[10] = {};
myInt = 3

def isAnyUpper(str):
    for element in str:
        if element.isupper():
            return True
        return False

if __name__ == "__main__":
    print("Data Structures!")
    print( type( mylist) )
    print (type(otherlist) )
    mylist.append("Data1")
    mylist.append("Data2")
    mylist.append("Data3")
    mylist.append("Data4")
    mylist.append("Data5")

    #print (mylist[0])
    #print(len(mylist))

    for index in range(0,len(mylist)):
        print(f'mylist[{index}]:', mylist[index],", Current index", index)

    for it in range(0, 11): 
        otherlist.append( rd.randint(0,100) )
    print(otherlist)

    mylist.extend(otherlist)


    print(mylist)
    #mylist.pop()
    mylist.reverse()
    print(mylist)

    newlist = mylist[0::5]
    print(newlist)


    usersAdmin = [
        "Luis",
        "RAFA",
        "Ari",
        "FERNANDO",
        "Pablo"
    ]
    print(usersAdmin)

    print(usersAdmin[0].lower())
    usersAdmin[0]= usersAdmin[0].lower()


    for admin in usersAdmin:
        print(admin, type(admin))

    for element in range(0, len(usersAdmin)):
        if(isAnyUpper(usersAdmin[element] ) ):
            print(f'userAdmin[{element}] modificated')
            usersAdmin[element] = usersAdmin[element].lower()
    print(usersAdmin)   
    
    sensor = "$GPGGA,134658.00,5106.9792,N,11402.3003,W,2,09,1.0,1048.47,M,-16.27,M,08,AAAA*60"

    ##Slicing
    strVariable = "ThisIsAnApple"
    newString = strVariable[::-1]
    print(f'strVariable[1]:{strVariable[1]}')
    print(f'newString:{newString}')

    listaSensor = sensor.split(",")
    print(listaSensor)
    hr = listaSensor[1][:2]
    min = listaSensor[1][2:4]
    sec = listaSensor[1][4:6]
    print(f'hr: {hr}, min: {min}, sec: {sec}')

    listaSensor[1] = f'hr: {hr}, min: {min}, sec: {sec}'



    print(listaSensor)
    
    sensorFixed = ",".join(listaSensor)
    print(sensorFixed)