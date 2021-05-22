price = int(input("What is the price of the product"))
tax_rate = int(float(input("What is the tax rate?")))

sale_tax = (price * tax_rate)/100
total_sale = sale_tax + price
print ("Tax Sale:$", sale_tax)
print ("Total:$", total_sale)
