#pragma once

#ifndef WINVER
#define WINVER 0x0600
#endif

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0600
#endif

// Winsock2 �ƃw�b�_�������Ȃ��悤�ɂ���
#define _WINSOCKAPI_

#include <cstdlib>
#include <cstdio>
#include <process.h>
#include <windows.h>
#include <windowsx.h>
#include <tchar.h>
#include <shlobj.h>
#include <shlwapi.h>

#ifdef _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#undef strdup
#define strdup strdup
#define DEBUG_NEW new(_NORMAL_BLOCK,__FILE__,__LINE__)
#endif

#undef _WINSOCKAPI_

// �x���̖����ݒ�
#pragma warning(disable: 4355) // warning C4355: "'this' : �x�[�X �����o���������X�g�Ŏg�p����܂����B"
#pragma warning(disable: 4995) // warning C4995: ���O��������ꂽ #pragma �Ƃ��ċL�q����Ă��܂��B
#pragma warning(disable: 4996) // warning C4996: "This function or variable may be unsafe."

// ���C�u�����̃����N
#pragma comment(lib, "kernel32.lib")
#pragma comment(lib, "user32.lib")
#pragma comment(lib, "shell32.lib")
#pragma comment(lib, "shlwapi.lib")
#pragma comment(lib, "advapi32.lib")
#pragma comment(lib, "ole32.lib")

#ifndef _DEBUG
	#define _SECURE_SCL 0
#endif

#define DTVENGINE_NETWORK_SUPPORT