import sys

tempF = [63, 73, -999, 91, 86, 82, 72, 81, 66, 77, 75, 104, -999, 84, 77, 66, 82, 63, 93, 72,
82, 64, 75 , 90, 64, -999, 99, 82, 95, 82]

tempC = []

if __name__ == "__main__":
    x = tempF.count(-999)
    for i in range (0,x):
        tempF.remove(-999)
    print("Degrees in Fahrenheit without non-relevant data:\n", tempF)

    for i in range (0,len(tempF)):
        tempC.append(round((tempF[i]-32)*5/9))
    print("Degrees in Celsius:\n",tempC)

    print("Maximum value in tempC:", max(tempC))
    
    def Average(tempC):
        return sum(tempC)/len(tempC)
    average = Average(tempC)
    print("Average of tempC:", round(average))