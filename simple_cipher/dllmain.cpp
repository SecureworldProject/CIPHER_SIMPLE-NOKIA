// dllmain.cpp : Defines the entry point for the DLL application.

/////  FILE INCLUDES  /////

#include "pch.h"
#include <stdio.h>
#include "context_cipher.h"




/////  GLOBAL VARIABLES  /////

struct Cipher* cipher_data;




/////  FUNCTION PROTOTYPES  /////

extern "C" _declspec(dllexport) int init(struct Cipher* cipher_data_param);
extern "C" _declspec(dllexport) int cipher(LPVOID out_buf, LPCVOID in_buf, DWORD size, size_t offset, struct KeyData *key);
extern "C" _declspec(dllexport) int decipher(LPVOID out_buf, LPCVOID in_buf, DWORD size, size_t offset, struct KeyData* key);




/////  FUNCTION IMPLEMENTEATIONS  /////

int init(struct Cipher* cipher_data_param) {
    cipher_data = cipher_data_param;
    printf("Initializing (%ws)\n", cipher_data->file_name);

    return 0;
}

int cipher(LPVOID out_buf, LPCVOID in_buf, DWORD size, size_t offset, struct KeyData *key) {
    printf("Ciphering (%ws)\n", cipher_data->file_name);
    memcpy(out_buf, in_buf, size);

    return 0;
}

int decipher(LPVOID out_buf, LPCVOID in_buf, DWORD size, size_t offset, struct KeyData *key) {
    printf("Deciphering (%ws)\n", cipher_data->file_name);
    memcpy(out_buf, in_buf, size);

    return 0;
}


BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
