source variable.txt
for var in $(cut -d= -f1 variable.txt)
do 
	echo $var
	export $var
done
export -p
