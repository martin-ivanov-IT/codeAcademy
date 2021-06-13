#!/bin/bash
NUM=$1
BASE=$2
gcc exer12.c -o launch
./launch $NUM $BASE
READ=$?
if [ "$READ" -eq "0"  ]
then
	echo "Successfully executed"

elif [ "$READ" -eq "1"  ]
then
	echo "Error at function itob()"

elif [ "$READ" -eq "2"  ]
then
	echo "Error at function reverse()"

elif [ "$READ" -eq "3"  ]
then
	echo "Segmentation fault at main()"

else
	echo "Error"
fi