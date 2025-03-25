'''
biased dice: each face of dice has same prob occurance in the p.d
unbiased dice: 

uniform distribution: random --> takes any random val from 0 to 1

random.uniform(0,1) => div into 6 parts 
keep the count of wtv rnumber we used for the dice, we can use list or dictionary

create class dice with attributes numside st:
d = dice() should create a 6 sided die
dice(10) should create 10 sided
number of sides should be >=4, otw an expression shhould be thrown
- cannot be a foat
- pd for biased dice for each face should be 1/numSides
- try except condition (else, finally)
- class and obj
- keyerror: managed by ___ cond
- file man : "               "
'''
import random
import matplotlib.pyplot as plt
import numpy as np

class Dice:

    def __init__(self, numSides=6):

        if not isinstance(numSides, int):
            raise Exception("cannot construct the dice")
            
        if numSides <= 4:
            raise Exception("cannot construct the dice")
            
        self.numSides = numSides
        self.prob = [1.0/numSides] * numSides
        
    def setProb(self, *args):

        if len(args) == 1 and isinstance(args[0], tuple):
            prob = args[0]
        else:
            prob = args
            
        if len(prob) != self.numSides:
            raise Exception("Invalid probability distribution")
            
        #sum 1
        if abs(sum(prob) - 1.0) > 1e-10:
            raise Exception("Invalid probability distribution")
            
        self.prob = prob
        
    def roll(self, n=1):

        faces = list(range(1, self.numSides + 1))
        throws = random.choices(faces, weights=self.prob, k=n)
        
        actual_counts = [throws.count(face) for face in faces]
        expected_counts = [n * p for p in self.prob]
        ''' 
        plt.figure(figsize=(8, 6))
        
        x = np.arange(len(faces))
        width = 0.69
       
        plt.bar(x - width/2, actual_counts, width, label='Actual', color='blue')
        plt.bar(x + width/2, expected_counts, width, label='Expected', color='red')
        
        plt.xlabel('Sides')
        plt.ylabel('Occurrences')
        plt.title(f'Outcome of {n} throws of a {self.numSides}-faced dice')
        plt.xticks(x, faces)
        plt.legend()
        
        plt.tight_layout()
        plt.show()
        '''
        
    def __str__(self):

        prob_str = "{" + ", ".join(f"{p:.1f}" for p in self.prob) + "}"
        return f"Dice with {self.numSides} faces and probability distribution {prob_str}"

Dice(7)