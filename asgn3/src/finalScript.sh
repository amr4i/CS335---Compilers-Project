#!/bin/bash
bin/asgn3 $1 >test.txt
# cat test.txt
tac test.txt >der.txt
n=$(wc -l < der.txt)
k=1
echo "$n" >postD
echo "1 start" >> postD
while IFS= read -r line; do
	n=$(echo "$line" | wc -w)
	m=$(($n-$k))
		echo "$m $line"
done < der.txt >>postD
name=$(echo "$1" | cut -f2 -d"/" | cut -f1 -d".")
name="$name.html"
bin/toHTML < postD >"$name"
rm der.txt test.txt postD