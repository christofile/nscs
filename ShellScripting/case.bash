#!/bin/bash
echo -e "Select your choice:\n 1)Print /home\n 2)Print folder"
read choice
case $choice in
1)
bash forloop_assignment.bash
;;
2)
bash forloop_anypath.bash
;;
*)
echo "Incorrect choice."
;;
esac

