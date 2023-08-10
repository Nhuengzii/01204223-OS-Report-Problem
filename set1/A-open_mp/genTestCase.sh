#!/bin/sh
I=1
SUM=0
SIZE=$1
if [ $# -eq 0 ]
then
  echo "Usage: $0 <size>"
  exit 1
fi
echo "$SIZE" > tc.txt
while [ $I -le $SIZE ]
do
  echo "$I" >> tc.txt
  SUM=$(($SUM+$I))
  I=$(($I+1))
done
echo "Sum is: $SUM"
echo "Size is $SIZE"
echo $(($SUM/$SIZE))
