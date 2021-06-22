#define WIN32_LEAN_AND_MEAN

#include<windows.h>
#include<WinSock2.h>

//#pragma comment(lib, "ws2_32.lib")//windows下调用动态库
int main() {
	//启动windows网络环境
	WORD ver = MAKEWORD(2, 2);
	WSADATA dat;
	WSAStartup(ver, &dat);
	//
	
	//
	WSACleanup();
	return 0;
}