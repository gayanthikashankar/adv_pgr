'''
dict = {1,20,3;(40,4,50,5,60)}

goal:print all values in the dict
solve this proble using try, except as 20 wont print

'''

try:
   
    #d = {1: {20, 3}, 40: {4, 50, 5, 60}} ------------ works
    d = {1: 20, 3: {40, 4: 50, 5: 60}} #not supposed to work?????????????????????????????????????????
    
    
    
    for key, value in d.items():
        try:
            print(f"Key {key}: {value}")
        except Exception as e:
            print(f"Error printing value for key {key}: {e}")

except Exception as e:
    print(f"Error creating dictionary: {e}")




