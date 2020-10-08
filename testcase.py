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


class Print():
    def __init__(self):
        pass

    def inline_print(self, n):
        """
        print n elements in a line and then print an endline
        """
        for i in range(n):
            print()


if __name__ == "__main__":
    rand = RandomGenerator()
    lops = ListOperation()

    t = rand.integer(1, 30)
    print(t)
    for __ in range(t):
        n = rand.integer(1, 1000)
        x = rand.integer(1, 300)
        p = rand.integer(1, n)
        k = rand.integer(1, n)
        print(n, end=" ")
        print(x, end=" ")
        print(p, end=" ")
        print(k, end=" ")
        print()

        # print(rand.array(n, 1, 1000))
        for ele in rand.array(n, 1, 1000):
            print(ele, end=" ")
        print()
