# Stress-Testing-CP
A stress testing application for competitve programming.

- I have a blog explaining the working of this application. Feel free to check it out.
[Stress tester blog on medium](https://medium.com/iota-iiits/stress-tester-for-competitive-programming-67fe2832ead0)

### TLDR: Working;
- Takes a random test case generator 
- Generates test cases
- Runs the optimal and bruteforce solutions for `n` number of times
- spits out the difference of the outputs of 2 programs.

### Checklist:
- [ ] Bring more improvement in the `diff` command's output
  - [ ] There'a a package called `fast-diff` in npm, if we want to build the diffing service in node js.
- [ ] Figure out a way to tell the line of the testcase of difference
  - would be covered if we build the diffing service in nodejs/python (harder in bash)
- [ ] Add error handling
- [ ] Big: Make a GUI for this using `Tkinter` or `PyQt5` and add all the features.
- [ ] After GUI: Make custom options for test cases with constrains and generate test cases from the users selection.
