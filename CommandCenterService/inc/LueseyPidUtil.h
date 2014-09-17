/*
 * LueseyPidUtil.h
 *
 *  Created on: Feb 12, 2014
 *      Author: HAKJAE
 */

#ifndef LUESEYPIDUTIL_H_
#define LUESEYPIDUTIL_H_

#include "FBase.h"

using namespace Tizen::Base;
using namespace Tizen::Base::Utility;

int itoa(int iSrc, byte* buffer, int positionalNumber, int offset);
int itoa(int iSrc, byte* buffer, int offset);
int getPositionalNumber(int iSrc);


#endif /* LUESEYPIDUTIL_H_ */
