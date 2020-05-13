#include<vector>
#include<iostream>
#include<algorithm>
#include <stdlib.h>
using namespace std;
void print(vector <int> v);
bool mycmpare(const int &a, const int &b) {
	return a > b;

}
int main()
{
	
	vector <int>v1;
	cout << "    v1:" << endl;
	print(v1);

	vector <int> v2(5);
	cout << "    v2:" << endl;
	print(v2);

	vector <int>v3(5, 1);
	cout << "    v3:" << endl;
	print(v3);

	//��������ָ����ָ����С������ν��ָ���˴�СҲ������ʱʹ��push_back()��vector��������β������
	v1.push_back(2);
	cout << "    v1:" << endl;
	print(v1);

	v2.push_back(2);
	cout << "    v2:" << endl;
	print(v2);
	v3.push_back(6);
	cout << "    v3:" << endl;
	print(v3);


	    //����Ԫ��ʹ��insert()������Ҫ������λ���ǵ�������λ�ã�������Ԫ�ص��±�
    v3.insert(v3.begin(), 3);//����ǰ�����3
    cout << "v3��" << endl;
    print(v3);
    v3.insert(v3.end(), 3);//��ĩβ׷��3���˴���ͬ��push_back()
	cout << "v3��" << endl;
	print(v3);


	//Ҫɾ��һ��Ԫ�ػ���һ�������е�����Ԫ��ʱʹ��erase()����
	v3.erase(v3.begin() + 2);
	cout << "v3:" << endl;
	print(v3);

	v3.erase(v3.begin() + 1, v3.begin() + 3);
	cout << "v3" << endl;
	print(v3);


    //�ɽ����֪��erase()����ͬinsert()����һ����������λ�ö�ֻ�ǵ�������λ�ã�������Ԫ�ص���
   //Ҫ�����vector(),ʹ��clear()����һ����ɾ��vector�е�����Ԫ��


	cout << "v2" << endl;
	print(v2);
	v2.clear();
	if (v2.empty())
		cout << "v2����ʹ��clear" << endl;
	print(v2);


	//Ҫ�뽫������ĳ�ε���������Ԫ�ط������У���ʹ��reverse()���������㷨,��Ҫ���algorithmͷ�ļ�

	cout << "v3��������ǰ��" << endl;
	print(v3);
	reverse(v3.begin(), v3.end());
	cout << "v3��������" << endl;
	print(v3);


	//Ҫ�뽫������ĳ�ε���������Ԫ�ؽ���������ʹ��sort()�㷨
	cout << "v3������ǰ��" << endl;
	print(v3);
	sort(v3.begin(), v3.end());
	cout << "v3�������" << endl;
	print(v3);
/////////////////////////////////////////////����///////////////////

	/*
	c.begin() ����һ������������ָ������c�ĵ�һ��Ԫ��

c.end() ����һ������������ָ������c�����һ��Ԫ�ص���һ��λ��

c.rbegin() ����һ���������������ָ������c�����һ��Ԫ��

c.rend() ����һ���������������ָ������c�ĵ�һ��Ԫ��ǰ���λ��
��������������������������������
��Ȩ����������ΪCSDN������С�׵Ľ��ס���ԭ�����£���ѭ CC 4.0 BY-SA ��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
ԭ�����ӣ�https://blog.csdn.net/laobai1015/article/details/51567564
	*/

	print(v3);
	v3=vector<int>(v3.rbegin(), v3.rend());
	print(v3);
		
	system("Pause");
	return 0;
}





void print(vector <int> v)
{

	//cout << "    v:" << endl;
	cout << "��СΪ:" << v.size() << endl;
	int i;
	for (i = 0; i < v.size(); i++) {
		cout << v[i] <<' ';

	}
	cout << endl << endl;
}