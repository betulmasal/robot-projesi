#include "MyAlgo.h"
#include <stdio.h>      
#include <stdlib.h>
//Betul Yildirim 030113009

bool __stdcall Algo1(int S, int L, int R, int Init, int& VL, int& VR){
	VL = 130;
	VR = 130;
	return true;
}

bool  __stdcall Algo2(int S, int L, int R, int Init, int& VL, int& VR){

	VL = 120;
	VR = 120;
	return true;
}

bool  __stdcall Algo3(int S, int L, int R, int Init, int& VL, int& VR){
	VL = 120;
	VR = 120;
	return true;
}

bool  __stdcall Algo4(int S, int L, int R, int Init, int& VL, int& VR){
	VL = 120;
	VR = 120;
	return true;
}



bool __stdcall Algo5(int S, int L, int R, int Init, int& VL, int& VR){
	VL = 120;
	VR = 120;
	return true;
}

bool __stdcall Algo6(int S, int L, int R, int Init, int& VL, int& VR){
	VL = 120;
	VR = 120;
	return true;
}

bool __stdcall Algo7(int S, int L, int R, int Init, int& VL, int& VR){
	double u = PIDKontrolSistemi(S);

	if (u <= -1) {
		VR = 1100 + u * 10;
		VL = 1100 - u * 10;

	}
	else if (u >= 1) {
		VR = 1100 + u * 10;
		VL = 1100 - u * 10;


	}
	else {
		VR = 1100 + u * 10;
		VL = 1100 + u * 10;
	}

	if (VR > 127)
		VR = 60;
	else if (VR < 127)	
		VR = 5;

	if (VL > 127)
		VL = 60;
	else if (VL < 127)
		VL = 5;

	return true;
}
float PIDKontrolSistemi(int S) {

	double u, I, eski_hata, hata, D, dt = 1;
	double a = 992;
	double Kp = 1 , Ki = 0 , Kd = 0;
	eski_hata = 0;
	I = 0;
	hata = S - a;
	I = I + (hata*dt);
	D = (hata - eski_hata) / dt;
	u = (Kp*hata) + (Ki*I) + (Kd*D);
	eski_hata = hata;
	return u;

}
