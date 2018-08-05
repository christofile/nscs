1. Bash script:

[root@web shell]# cat subfolder.bash
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

2. Testing folder with 3 empty folders:
[root@web shell]# ls -l /codesmart/
total 40
drwxr-xr-x. 2 root root 4096 Aug  1  2017 assignment1
drwxr-xr-x. 2 root root 4096 Aug  8  2017 assignment2
drwxr-xr-x. 2 root root 4096 Aug  8  2017 assignment3
drwxr-xr-x. 2 root root 4096 Aug 21  2017 assignment5
drwxr-xr-x. 2 root root 4096 Aug 29  2017 class
drwxr-xr-x. 2 root root 4096 May 16 09:51 empty1
drwxr-xr-x. 2 root root 4096 May 16 09:51 empty2
drwxr-xr-x. 2 root root 4096 May 16 09:51 empty3
drwxr-xr-x. 2 root root 4096 May 16 10:11 shell
drwxr-xr-x. 2 root root 4096 Sep 16  2017 test
[root@web shell]# ls -A /codesmart/
assignment1  assignment3  class   empty2  shell
assignment2  assignment5  empty1  empty3  test
[root@web shell]# ls -AR /codesmart/
/codesmart/:
assignment1  assignment3  class   empty2  shell
assignment2  assignment5  empty1  empty3  test

/codesmart/assignment1:
a.out  a2  a2.c  a4  a4.c

/codesmart/assignment2:
a1  a1.c  a2  a2.c  assignment2.txt  demo.c

/codesmart/assignment3:
a1  a1.c  a2  a2.c  a3  a3.c  a4  a4.c  assignment3.txt  demo.c

/codesmart/assignment5:
a5.c  demo.c

/codesmart/class:
a.out    dowhile.c  evenloop.c    malloc.c      point.c  scanf.c
demo.c   enum.c     helloworld    palindrome.c  prime    string.c
dowhile  evenloop   helloworld.c  point         prime.c

/codesmart/empty1:

/codesmart/empty2:

/codesmart/empty3:

/codesmart/shell:
1          checknum.bash         forloop_assignment.bash  silentguess.bash
cal.bash   export.bash           forloop_subfolder.bash   subfolder.bash
cal2.bash  fac.bash              guess.bash               test.bash
cal3.bash  factorial.sh          helloworld.bash          variable.txt
case.bash  forloop_anypath.bash  output.txt

/codesmart/test:
a.out  struct.c  test1.c  test2.c  test3.c

3. Testing:
[root@web shell]# ./subfolder.bash
Please enter a path:
/codesmart
[root@web shell]# cat output.txt
empty1
empty2
empty3