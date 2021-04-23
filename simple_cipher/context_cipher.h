#ifndef CONTEXT_CIPHER_H
#define CONTEXT_CIPHER_H


/////  FILE INCLUDES  /////

#include <Windows.h>
#include <time.h>




/////  STRUCTS AND ENUMS  /////

struct Cipher {
	char* id;
	WCHAR* file_name;
	HINSTANCE lib_handle;
	int block_size;
	char* custom;
};

#endif // !CONTEXT_CIPHER_H