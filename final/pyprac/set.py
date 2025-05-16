'''set = {} unordered and imutable, add/remove OK, NO DUPES'''

fruits = {"apple", "orange", "banana", "coconut"}
print(fruits) #doesnt print in order

print(dir(fruits))
print(help(fruits))

#cannot use indexing to find an object as they are unordered
fruits.add("strawberry") #.remove
fruits.pop() #removes whatever elem is first (happens randomly)
