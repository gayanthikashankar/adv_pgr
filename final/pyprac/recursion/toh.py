#tower of hanoi

def hanoi(n, source, target, auxiliary):
    #if only 1 disk, move it directly from source to target
    if n == 1:
        print(f"Move disk 1 from {source} to {target}")
        return
    
    #move n-1 disks from source to auxiliary using target as temporary
    hanoi(n-1, source, auxiliary, target)
    
    #move the largest disk from source to target
    print(f"Move disk {n} from {source} to {target}")
    
    #move n-1 disks from auxiliary to target using source as temporary
    hanoi(n-1, auxiliary, target, source)

hanoi(3, 'A', 'C', 'B')

'''

number of steps needed to solve the Tower of Hanoi puzzle with n disks is:
2ⁿ - 1

'''