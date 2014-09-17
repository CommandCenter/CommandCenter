/*

이 프로그램은 Tizen Command Center 1.1에 따른다.
당신은 이 라이선스에 따르지 않고 이 파일을 사용할 수 없다.
라이선스의 복사본은 아래 사이트에서 구하실 수 있다.

   http://www.TCC.org/MPL/

이 라이선스 하에서 배포될 SW는 묵시적이든 명시적이든 어떠한
종류의 보증 또는 이용조건 없이 "합의된 바"대로에 기초하여 배포된다.
이 라이선스 하에서의 허가사항들과 제한사항들에 대해서는 특정 언어의
라이선스를 참고하기 바란다.

The Original Code is "Tizen Command Center" code.

The Initial Developer of the Original Code is Samsung_Brothers Team.

Protions created by the 전학제,장현수,서준수,박관웅,류주현 are Copyright
(C) 2014 the Initial Developer.
All Rights Reserved.

NOTE! This copyright does *not* cover user programs that use kernel services by
normal system calls - this is merely considered normal use of the kernel, and does
*not* fall under the heading of “derived work”. Also note that the GPL below is
copyrighted by the Free Software Foundation, but the instance of code that it refers
to (the Linuxkernel) is copyrighted by me and others who actually wrote it.
Also note that the only valid version of the GPL as far as the kernelis concerned is
_this_ particular version of the license (ie v2, not v2.2 or v3.x or whatever), unless
explicitly otherwise stated.

*/


#include "CommandCenterServiceApp.h"
#include <new>

using namespace Tizen::Base;
using namespace Tizen::Base::Collection;

#ifdef __cplusplus
extern "C"
{
#endif

_EXPORT_ int OspMain(int argc, char* pArgv[]);

//The entry function of Tizen C++ application called by the operating system.
int
OspMain(int argc, char* pArgv[])
{
	result r = E_SUCCESS;

	AppLog("CommandCenterService started.");
	ArrayList args;
	args.Construct();
	for (int i = 0; i < argc; i++)
	{
		args.Add(*(new (std::nothrow) String(pArgv[i])));
	}

	r = Tizen::App::ServiceApp::Execute(CommandCenterServiceApp::CreateInstance, &args);
	if (IsFailed(r))
	{
		AppLogException("Application execution failed-[%s].", GetErrorMessage(r));
		r &= 0x0000FFFF;
	}

	args.RemoveAll(true);

	AppLog("CommandCenterService finished.");

	return static_cast< int >(r);
}
#ifdef __cplusplus
}
#endif
