#!/bin/bash
n=$(wc -l < der1.txt)
k=1
echo "$n" 
while IFS= read -r line; do
	n=$(echo "$line" | wc -w)
	m=$(($n-$k))
		echo "$m $line"
done < der1.txt