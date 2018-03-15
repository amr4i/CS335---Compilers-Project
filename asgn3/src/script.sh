#!/bin/bash
word=""
while IFS= read -r line; do
	if [[ "$line" = *{}* ]];then
		if [[ "$line" = *:* ]];then
			a=( $line )
			word=${a[0]}
		fi
		pre=$(echo "$line" | sed 's\.$\\')
		post=$(echo "$line" | sed 's\^[^|:]*[|:]\\' | sed 's\..$\\' | awk '{$1=$1;print}')
		echo "$pre printf(\"$word $post\"); }"
	else
		echo "$line"
	fi
done < new_data