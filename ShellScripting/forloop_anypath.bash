#!/bin/bash
echo "Please enter a path:"
read path
for file in $path/*
do
	echo $(basename "$file")
done
