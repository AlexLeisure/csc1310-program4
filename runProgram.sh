#!/usr/bin/bash

make clean
if (( $$ > 0 )); do
	printf "\n\n"
	echo "There was a problem trying to clean the workspace"
	echo "Continuing with the script..."
fi

make

./"graph.exe" < "test_1.txt" > "result1.txt"
./"graph.exe" < "test_2.txt" > "result2.txt"
./"graph.exe" < "test_3.txt" > "result3.txt"
./"graph.exe" < "test_4.txt" > "result4.txt"
./"graph.exe" < "test_5.txt" > "result5.txt"