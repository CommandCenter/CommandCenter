/*
 * EnvironmentData.h
 *
 *  Created on: Feb 9, 2014
 *      Author: HAKJAE
 */

#ifndef ENVIRONMENTDATA_H_
#define ENVIRONMENTDATA_H_

#include <FBase.h>

using namespace Tizen::Base;

static const RequestId START_REMOTE=100;
static const RequestId END_REMOTE=101;

static const RequestId RECEIVE_EVENT=4;

static const String KEY_START_REMOTE=L"Start_Remote";
static const String KEY_END_REMOTE=L"End_Remote";
static const String KEY_REMOTE_STATE=L"State_Remote";

#endif /* ENVIRONMENTDATA_H_ */
