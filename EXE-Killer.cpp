//------------------��������UstinianX��д����ֹʹ������ҵ��;------------------
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
	cout<<"------------------��������UstinianX��д����ֹʹ������ҵ��;------------------" <<endl;
	cout<<"EXE-Killer           Designed by UstinianX"<<endl;
	cout<<"�汾��V1.0 ��ʽ��"<<endl;
	cout<<"��ϵ�����ߣ�"<<"E-mail��ustinianx@outlook.com" <<" "<<" "<<" "<<"QQ��3069862258"<<endl;
	cout<<"�˳���Ŀǰֻ������Windows�汾������ϵͳ�汾������ȴ�"<<endl;
	MessageBox(NULL,"�����ߣ�UstinianX","EXE-Killer",MB_OK);
	MessageBox(NULL,"�汾�ţ�V1.0 ��ʽ��","EXE-Killer",MB_OK);
	while(true) {
		system("start D:\\XESstart.bat");	//����������� Windows�������ļ�(.bat)�����ƺ�Ŀ¼�������޸� 
//		system("start D:\\EXE-start-HIDE.vbs");
		_sleep(10*1000);					//�ȴ�ʱ������� 
		system("start D:\\XESstop.bat");	//�򿪽�������� Windows�������ļ�(.bat)�����ƺ�Ŀ¼�������޸� 
		_sleep(5*1000);						//�ȴ�ʱ������� 
	}
	return 0;
}
//------------------��������UstinianX��д����ֹʹ������ҵ��;------------------
