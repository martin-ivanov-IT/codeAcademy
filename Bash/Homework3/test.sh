#!/bin/bash
str1=$1
str2=$2
gcc exer5.c -o launch
./launch $str1 $str2
READ=$?
if [ "$READ" -eq "0"  ]
then
	echo "Successfully executed"

elif [ "$READ" -eq "1"  ]
then
	echo "Error at function main()"

elif [ "$READ" -eq "2"  ]
then
	echo "Error at function our_strcat()"

else
	echo "Error"
fi