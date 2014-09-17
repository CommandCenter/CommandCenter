/*
 * LueseyPidUtil.cpp
 *
 *  Created on: Feb 12, 2014
 *      Author: HAKJAE
 */

#include "LueseyPidUtil.h"



int itoa(int iSrc, byte* buffer, int positionalNumber, int offset) {
	int i=offset;
	while(positionalNumber > 0){
		int jesu=(int)pow(10, positionalNumber-1);
		int quotiont = iSrc / jesu;

		buffer[i] = (byte) (quotiont+'0');

		int remainder = iSrc % jesu;

		positionalNumber--;
		i++;
		iSrc = remainder;
	}
	return positionalNumber;
}

int itoa(int iSrc, byte* buffer, int offset){
	int positionalNumber = getPositionalNumber(iSrc);
	int length = positionalNumber;

	int i=offset;
	while(positionalNumber > 0){
		int jesu = (int)pow(10, positionalNumber-1);
		int quotiont = iSrc / jesu;

		buffer[i] = (byte) (quotiont+'0');

		int remainder = iSrc % jesu;

		positionalNumber--;
		i++;
		iSrc = remainder;
	}
	return length;
}

int getPositionalNumber(int iSrc){
	int positionnalNumber=1;
	while(true){
		if(iSrc/(int)pow(10, positionnalNumber) == 0)
			break;
		positionnalNumber++;
	}
	return positionnalNumber;
}
