#! /bin/bash

echo Enter a
read a
echo Enter b
read b
echo Enter c
read c

if [ $a == $b -a $b == $c -a $a == $c ]
then
echo EQUILATERAL
elif [ $a == $b -o $b == $c -o $a == $c ]
then
echo ISOSCELES
else
echo SCALENE

fi
