
price_hour = 75
min_hour = 40
bon = 1.5

hours = int(input("How many hours did she/he work?"))
if (hours>40):
    hour_extra = hours - min_hour
    salary = (min_hour*price_hour) + (hour_extra*bon)
else:
    salary = hours * price_hour
print("Payment", salary)