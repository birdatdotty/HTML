#!/bin/sh
echo $1
echo $2
mysql -uroot $1 < $2
