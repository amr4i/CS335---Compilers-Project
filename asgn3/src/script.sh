#!/bin/bash
grep -oP "(?<=return )[^ ]+;" $1 | sed 's/;$//' | cat > out

#awk '{for(i=1;i<=NF;i++) if ($i=="return") print $(i+1)}' $1
echo -n "%token "
while IFS= read -r line;do
	a=( $line )
	echo -n ${a[0]}
	echo -n " "
done < out
echo "\n"
rm out
