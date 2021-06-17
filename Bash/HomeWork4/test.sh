#!/bin/bash
gcc exer11.c -o launch
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
	echo "Error at function addPart()"

elif [ "$READ" -eq "3"  ]
then
	echo "Error at function myPrint()"

elif [ "$READ" -eq "4"  ]
then
	echo "Error at function myFree()"

else
	echo "Error"
fi