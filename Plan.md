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

2.0
=> bash heavy - working with bash would be easier as a lot of tasks are to be performed in the terminal
=> Workflow:
    - compile brute and opt and generate the executable files
    
    - ask as an argument on how many super-tests you want to run the file (inside the test case generator we may have a test case it does'nt matter)

    - for loop 1 -> n-supertests :
        1. generate a test case using testcase.py into testcase.txt
        2. run the brute and optimal executable against this testcase.txt using < > streams and store the outputs into brute_out.txt and optimal_out.txt
        3. and then strip them from new lines and then run the linux diff command and if there is a difference exit. (when we exit then the testcase in testcase.txt) will be the testcase that is generating a difference
