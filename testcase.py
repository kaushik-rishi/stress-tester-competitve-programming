import sys
import os
import random

sys.stdout = open("testcase.txt", "w")

class RandomGenerator():
    def __init__(self):
        pass
    
    def integer(self, lower_bound, upper_bound):
        ret = random.randint(lower_bound, upper_bound)
        return ret

    def array(self, array_size, lower_bound, upper_bound):
        l = [0]*array_size
        for index, element in enumerate(l):
            l[index] = self.integer(lower_bound, upper_bound)
        return l

class ListOperation():
    def __init__(self):
        pass

    def print_space(self, l):
        for element in l:
            print(element, end=" ") 
        print()

    def print_csv(self, l):
        for element in l:
            print(element, end=", ") 
        print()

if __name__ == "__main__":
    rand = RandomGenerator()
    lops = ListOperation()

    lb = 1
    ub = 1e2

    n = rand.integer(lb, ub)

    lb = 1
    ub = 1e5
    l = rand.array(n, lb, ub)
    print(n)
    lops.print_space(l)