#!/bin/bash
echo "Please enter number 1:"
read num1
echo "Please enter number 2:"
read num2
echo "Please enter operator:"
read operator

echo "The result is:"
result=$(($num1 $operator $num2));
echo $result;
