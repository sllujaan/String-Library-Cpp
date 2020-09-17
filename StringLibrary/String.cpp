#include "String.h"

String::String(const char* _str)
{
	const size_t len = this->getSize(_str);
	this->size = len;
	
	if (len <= 0) return;

	this->_string = (char*)malloc((len * sizeof(char)) + sizeof(char));
	memset(this->_string, 0, len + 1);
	this->_string[len] = '\0';

	this->copyChars(&this->_string, _str);

}

String::~String()
{
	delete this->_string;
}

size_t String::getSize(const char* _str)
{
	size_t len = 0;
	const char* temp = _str;
	while (*temp)
	{
		temp = temp + 1;
		len += 1;
	}
	return len;
}

errno_t String::copyChars(char** _cPtr, const char* _str)
{
	const char* tempStr = _str;
	char* tempPtr = _cPtr[0];

	while (*tempStr)
	{
		*tempPtr = *tempStr;
		tempStr = tempStr + 1;
		tempPtr = tempPtr + 1;
	}
	return _SUCCESS_;
}

ostream& operator<<(ostream& os, const String& _str)
{
	if (!_str._string) return os << "";
	
	os << _str._string;
	return os;
}
