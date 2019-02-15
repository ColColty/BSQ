#!/bin/sh

EXEC=$1

./$EXEC

RET=`echo $?`

if [ $RET -eq 126 ]; then
    echo "Adding rights to the file..."
    chmod 755 $EXEC
fi

./$EXEC