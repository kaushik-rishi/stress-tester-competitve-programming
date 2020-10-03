Testcase generator -> testcase.txt
Bruteforce output -> brute_out.txt
Optimised Solution output -> optimal_out.txt

Libraries 🤔:
 - subprocess
 - sys
 - os
 - difflib

=> generate testcase
=> run the brute force program and get the output into brute_out.txt
=> run the optimal solution program and get the output into brute_out.txt

Testcase generator:
    - Random Integer
    - Random Integer of given digit
    - Random Floating Point
    - Random string length given
    - Random string of random lenght
    - Random String consisting of only so and so characters
    - Random Matrix

Files :
 - testcase.py (to generate test cases)
 - brute.cpp (the brute force program)
 - master.cpp (the optimal program)
 - check.py (find the difference between brute_out.txt and optimal_out.txt)

=> Planning of a bash script to execute and map them

=> may be a program on top (expectably a bash script) that has the ability to run the above procedure expected number of times
