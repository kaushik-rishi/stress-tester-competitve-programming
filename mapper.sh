g++ brute.cpp -o brute_executable
g++ optimal.cpp -o optimal_executable

n=$1

for (( i=1; i<=n; ++i ))
do
    ./brute_executable < testcase.txt > brute_out.txt
    ./optimal_executable < testcase.txt > optimal_out.txt
    if [[ $(diff brute_out.txt optimal_out.txt) ]]
    then
        echo "$(diff -Z brute_out.txt optimal_out.txt)" > difference_file.txt
        # echo "$(diff sed 's/^[ \t]*//;s/[ \t]*$//'<brute_out.txt sed 's/^[ \t]*//;s/[ \t]*$//'<optimal_out.txt)" > difference_file.txt

        echo "Difference reported in file difference_file.txt"
    else
        echo "AC on super-test $i"
    fi
done

# ./brute_executable < testcase.txt > brute_out.txt
# ./optimal_executable < testcase.txt > optimal_out.txt