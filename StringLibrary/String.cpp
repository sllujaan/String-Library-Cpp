#include "String.h"

String::String(const char* _str)
{
	const size_t len = this->getSize(_str);
	this->size = len;
	
	if (len <= 0) return;

	this->_string = (char*)malloc(((len + 1) * sizeof(char)));
	memset(this->_string, 0, len + 1);
	this->_string[len] = '\0';

	this->copyChars(&this->_string, _str);

}

String::~String()
{
	//cout << "destructor called." << endl;
	delete this->_string;
}

size_t String::getLength()
{
	return this->size;
}

bool String::operator==(const String& _str)
{
	return this->compare(this->_string, _str._string);
}

bool String::operator!=(const String& _str)
{
	return !this->compare(this->_string, _str._string);
}

char& String::operator[](size_t index)
{
	if (!(index < this->size)) return this->NULL_CHAR;

	return this->_string[index];
}

String::operator int()
{
	if (this->size < 1) return false;
	return true;
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

bool String::compare(char* str1, char* str2)
{
	size_t len1 = this->getSize(str1);
	size_t len2 = this->getSize(str2);

	if (len1 != len2) return false;

	for (int i = 0; i < (int)len1; i++) {
		if (str1[i] != str2[i]) return false;
	}

	return true;
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
