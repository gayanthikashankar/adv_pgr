'''
format spec = {value:flags}
format a value based on what flags are inserted
'''

price1 = 3.14159
price2 = -987.65
price3 = 12.32

print(f"price 1 is ${price1:.2f}") #two decimal point float


#allocate space to display a val after the colon ///AKA RIGHT JUSTIFY(DEFAULT)== USE  >
print(f"price 1 is ${price1:10}") #10 spaces

#zero padded
print(f"price 1 is ${price1:010}") 

#left justify: space is on left side and not right 
print(f"price 1 is ${price1:<10}") 

#central align
print(f"price 1 is ${price1:^10}") 

#display plus sign for pistives/any neg num is preceded with - sign
print(f"price 1 is ${price1:+}") 
print(f"price 2 is ${price2:+}") 

#or
print(f"price 1 is ${price1: }") 
print(f"price 2 is ${price2: }") 

#thousand seperator
price4 = 30008765374874.387873
print(f"price 4 is ${price4:,}") 

#combining
print(f"price 4 is ${price4:+,.2f}") 

