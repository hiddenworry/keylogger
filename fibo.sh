#!/bin/sh
Fibo() {
 if [ $1 -eq 1 -o $1 -eq 2 ]
then
echo 1
elif [ $1 -eq 0 ]
then
echo 0
else
echo $(($(Fibo $(($1-1))) +$(Fibo $(($1-2)))))
fi
}
echo "input a position of fibonaci sequence: "
read x
Fibo $x
