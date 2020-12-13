i=0
echo -n "["
while ((i<MAX)); do
    ((i++))
    if ((i < COUNT));then
        echo -n "#"
    else
        echo -n " "
    fi
done
echo "]"