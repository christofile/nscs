#!/bin/bash
for file in /home/*
do
	echo $(basename "$file")
done
