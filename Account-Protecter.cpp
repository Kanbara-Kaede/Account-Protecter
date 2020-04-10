//------------------本代码由UstinianX编写，禁止使用于商业用途------------------
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<math.h>
#include<algorithm>
#include<windows.h>
using namespace std;
int main() {
	cout<<"------------------本代码由UstinianX编写，禁止使用于商业用途------------------" <<endl;
	cout<<"Account-Protecter           Designed by UstinianX"<<endl;
	cout<<"版本：V1.0 正式版"<<endl;
	cout<<"联系开发者："<<"E-mail：ustinianx@outlook.com" <<" "<<" "<<" "<<"QQ：3069862258"<<endl;
	cout<<"此程序目前只开发有Windows版本，其他系统版本请继续等待"<<endl;
	MessageBox(NULL,"开发者：UstinianX","Account-Protecter",MB_OK);
	MessageBox(NULL,"版本号：V1.0 正式版","Account-Protecter",MB_OK);
	while(true) {
		system("start D:\\XESstart.bat");	//打开启动程序的 Windows批处理文件(.bat)，名称和目录请自行修改 
//		system("start D:\\EXE-start-HIDE.vbs");
		_sleep(10*1000);					//等待时间调制器 
		system("start D:\\XESstop.bat");	//打开结束程序的 Windows批处理文件(.bat)，名称和目录请自行修改 
		_sleep(5*1000);						//等待时间调制器 
	}
	return 0;
}
//------------------本代码由UstinianX编写，禁止使用于商业用途------------------
