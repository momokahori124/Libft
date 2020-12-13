# i=0
# while ((i<30)); do
#     ((i++))
#     if ((i < $COUNT));then
#         printf "#"
#     elif ((i == 29));then
#         printf "a"
#     else
#         printf " "
#     fi
# done

i=0
while ((i < 30));do
    ((i++))
    if ((i < $COUNT));then
        printf "#"
    else
        printf "-"
    fi
done