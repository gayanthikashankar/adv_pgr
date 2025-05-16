'''
list = [] ordered and changeable, dupes are ok
'''

fruit =[ "apple", "orange", "banana", "coconut"]
print(fruits[0]) #apple
print(fruits[0:3]) #first 3 elems
print(fruits[::2]) #every 2nd elem, apple, banana
print(fruits[::-1]) #ist bw

for fruit in fruits:
    print(fruit)

#list diff methods avaialble in collection
print(dir(fruits))
print(help(fruits))

#is value in list?

print("apple" in fruits)

#change vals
fruits[0] = "pineapple"

#fruits.append("pineapple")

fruits.remove("apple")

fruits.insert(0,pineapple) #adds to index 0 doesnt replace

#alpha order
fruits.sort()

fruits.reverse() #based on of we placed them

fruits.clear()
print(fruits.index("banana"))

#count how many vals in list
print(fruits.count("banana"))