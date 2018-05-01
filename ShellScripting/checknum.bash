#!/bin/bash
echo "Please guess a number:"
read num
if [[ $num -eq 0 || ($num -ge 20 && $num -le 30) ]]
then
	echo You are right!
else
	echo You are wrong!
fi

