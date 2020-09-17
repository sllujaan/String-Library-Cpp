#pragma once
#include<iostream>
using namespace std;

#define _SUCCESS_ 0;
#define _FAILURE_ 1;




class String {
	
	//private attributes.
private:
	char* _string;


	//public methods.
public:
	size_t size = 0;
	String(const char* _str);
	~String();
	friend ostream& operator << (ostream& os, const String& _str);


	//private methods.
private:
	size_t getSize(const char* _str);
	/*
		copies const chars * to dynamic memory.
		this method assumes that _str is no empty
	*/
	errno_t copyChars(char** _cPtr, const char* _str);
};