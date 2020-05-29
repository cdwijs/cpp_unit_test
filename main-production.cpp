/*
 * GccApplication1.cpp
 *
 * Created: 5/29/2020 11:31:24 AM
 * Author : cedric
 */ 

#include <avr/io.h>
#include<stdio.h> //for NULL
#include "private.h"


Private myPrivate;

int main(void)
{	
	myPrivate.more();
	myPrivate.more();
	myPrivate.less();
	
    /* Replace with your application code */
    while (1) 
    {
    }
}

