#ifndef __MAIN_H__
#define __MAIN_H__

#include <windows.h>


#ifdef BUILD_DLL
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT __declspec(dllimport)
#endif


#ifdef __cplusplus


#endif


extern "C" __declspec(dllexport) bool __stdcall Algo1(int S, int L, int R, int Init, int& VL, int& VR);

extern "C" __declspec(dllexport) bool __stdcall Algo2(int S, int L, int R, int Init, int& VL, int& VR);

extern "C" __declspec(dllexport) bool __stdcall Algo3(int S, int L, int R, int Init, int& VL, int& VR);

extern "C" __declspec(dllexport) bool __stdcall Algo4(int S, int L, int R, int Init, int& VL, int& VR);

extern "C" __declspec(dllexport) bool __stdcall Algo5(int S, int L, int R, int Init, int& VL, int& VR);

extern "C" __declspec(dllexport) bool __stdcall Algo6(int S, int L, int R, int Init, int& VL, int& VR);

extern "C" __declspec(dllexport) bool __stdcall Algo7(int S, int L, int R, int Init, int& VL, int& VR);

static float PIDKontrolSistemi(int S);

static float u = 0.0f;


#ifdef __cplusplus

#endif

#endif
