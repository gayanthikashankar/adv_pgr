#collec of key:val pairs, orderded, changeable, no dupes

capitals = {"USA": "washington dc", 
"india": "new delhi",
"russia": "moscow",
}

print(dir(capitals))
print(help(capitals))

#geta  val from dict
print(capitals.get("USA"))

if capitals.get("india"):
     #if val is returned
     print("the capital exists")
else:
    print("the capital doenst exist")
    
capitals.update({"germany": "berlin"})
capitals.update({"USA": "detroit"}) #update key val

capitals.pop("china")

#remove latest kv pair
capitals.popitem()
capitals.clear()

#to get all keys only
capitals.keys()
for  key in capitals.keys():
    print(key)

#print vals only
capitals.values()
for  value in capitals.values():
    print(value)

#dict obj resembles a 2d list of tuples
capitals.items()
for key,value in capitals.items():
    print(f"{key}:{value}")