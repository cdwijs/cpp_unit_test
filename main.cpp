/*
 * GccApplication1.cpp
 *
 * Created: 5/29/2020 11:31:24 AM
 * Author : cedric
 */ 

#include <avr/io.h>
#include<stdio.h> //for NULL
#include "private.h"
#include "unity.h"


Private myPrivate;

int main(void)
{
	UNITY_BEGIN();
	//RUN_TEST(myPrivate.executeTest); //unity_internals.h(707,65): error: invalid use of non-static member function
	//RUN_TEST((void*)myPrivate.executeTest); //error: invalid use of member function (did you forget the '()' ?)
	//RUN_TEST((func)))myPrivate.executeTest); //error: 'func' was not declared in this scope
	//RUN_TEST(&myPrivate.executeTest); //error: cannot convert 'void (Private::*)()' to 'UnityTestFunction {aka void (*)()}' for argument '1' to 'void UnityDefaultTestRun(UnityTestFunction, const char*, int)'
	UNITY_END();
		
	myPrivate.more();
	myPrivate.more();
	myPrivate.less();
	
    /* Replace with your application code */
    while (1) 
    {
    }
}

