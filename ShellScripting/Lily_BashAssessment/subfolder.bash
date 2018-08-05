#!/bin/bash
echo "Please enter a path:"
read path
touch output.txt
for file in $path/*
do
	#[[ -d "$file" ]] ||  ls -l "$file"
        if [[ $(ls -A "$file") ]] 
	then
		echo $(basename "$file") >> /dev/null
	else
		echo $(basename "$file") >> output.txt
	fi
done
