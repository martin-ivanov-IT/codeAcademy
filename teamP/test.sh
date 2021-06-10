#!/bin/bash
NUM=$1
INDEX=$2
gcc exer6.c -o launch
./launch $NUM $INDEX 
READ=$?
if [ "$READ" -eq "0"  ]
then
	echo "Successfully executed"
else
	echo "Error"
fi