import sys

sensorInput = "$GPGGA,134658.00,5106.9792,N,11402.3003,W,2,09,1.0,1048.47,M,-16.27,M,08,AAAA*60"

if __name__ == "__main__":
    print("GPS Activity")

    print
    listaSensor = sensorInput.split(",")
    print("Header Configuration:", listaSensor[0])
    hr = listaSensor[1][:2]
    min = listaSensor[1][2:4]
    sec = listaSensor[1][4:6]
    print(f'hr: {hr}, min: {min}, sec: {sec}')

    print("Latitud:", listaSensor[2], listaSensor[3])

    print("Longitud:", listaSensor[4], listaSensor[5])
    ## convertit inputs en lista ##
    ##print("Header configuration:",lista[0])
    ##print("utc:",utcDecoter(lista[1]))
    ##print("Latitud:", lista [1] + lista[2])
    ##print("Longitud", lista[3] + lista[4])
    GPS = {'Header': listaSensor[0], 'UTC':listaSensor[1], 'Latitud': f'{listaSensor[2], listaSensor[3]}', 'Longitud': f'{listaSensor[4], listaSensor[5]}'}
    print (GPS)