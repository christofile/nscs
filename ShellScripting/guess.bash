#!/bin/bash
echo "Please guess a password:"
read inputpassword
defaultpassword=citrix
if [[ $inputpassword = $defaultpassword ]]
then
	echo You have Access
else
	echo No Access
fi

