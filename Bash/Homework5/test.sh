#!/bin/bash
gcc exer4.c -o launch
./launch
READ=$?
if [ "$READ" -eq "0"  ]
then
	echo "Successfully executed"

elif [ "$READ" -eq "1"  ]
then
	echo "Error at function main()"

elif [ "$READ" -eq "2"  ]
then
	echo "Error at function pop()"

elif [ "$READ" -eq "3"  ]
then
	echo "Error at function push()"

else
	echo "Error"
fi