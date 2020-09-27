#pragma once
#include<iostream>
using namespace std;

#define _SUCCESS_ 0;
#define _FAILURE_ 1;




class String {
	
	//private attributes.
private:
	char* _string;
	size_t size = 0;
	char NULL_CHAR = '\0';


	//public methods.
public:
	String(const char* _str);
	~String();
	size_t getLength();
	friend ostream& operator << (ostream& os, const String& _str);
	bool operator == (const String& _str);
	bool operator != (const String& _str);
	char& operator [] (size_t index);
	operator int();


	//private methods.
private:
	size_t getSize(const char* _str);
	bool compare(char* str1, char* str2);
	/*
		copies const chars * to dynamic memory.
		this method assumes that _str is no empty
	*/
	errno_t copyChars(char** _cPtr, const char* _str);
};