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

	//另外事先指定不指定大小都无所谓，指定了大小也可以随时使用push_back()对vector容器进行尾部扩张
	v1.push_back(2);
	cout << "    v1:" << endl;
	print(v1);

	v2.push_back(2);
	cout << "    v2:" << endl;
	print(v2);
	v3.push_back(6);
	cout << "    v3:" << endl;
	print(v3);


	    //插入元素使用insert()方法，要求插入的位置是迭代器的位置，而不是元素的下标
    v3.insert(v3.begin(), 3);//在最前面插入3
    cout << "v3：" << endl;
    print(v3);
    v3.insert(v3.end(), 3);//在末尾追加3，此处等同于push_back()
	cout << "v3：" << endl;
	print(v3);


	//要删除一个元素或者一个区间中的所有元素时使用erase()方法
	v3.erase(v3.begin() + 2);
	cout << "v3:" << endl;
	print(v3);

	v3.erase(v3.begin() + 1, v3.begin() + 3);
	cout << "v3" << endl;
	print(v3);


    //由结果可知，erase()方法同insert()方法一样，操作的位置都只是迭代器的位置，而不是元素的下
   //要想清空vector(),使用clear()方法一次性删除vector中的所有元素


	cout << "v2" << endl;
	print(v2);
	v2.clear();
	if (v2.empty())
		cout << "v2经过使用clear" << endl;
	print(v2);


	//要想将向量中某段迭代器区间元素反向排列，则使用reverse()反向排列算法,需要添加algorithm头文件

	cout << "v3反向排序前：" << endl;
	print(v3);
	reverse(v3.begin(), v3.end());
	cout << "v3反向排序：" << endl;
	print(v3);


	//要想将向量中某段迭代器区间元素进行排序，则使用sort()算法
	cout << "v3反升序前：" << endl;
	print(v3);
	sort(v3.begin(), v3.end());
	cout << "v3反升序后：" << endl;
	print(v3);
/////////////////////////////////////////////测试///////////////////

	/*
	c.begin() 返回一个迭代器，它指向容器c的第一个元素

c.end() 返回一个迭代器，它指向容器c的最后一个元素的下一个位置

c.rbegin() 返回一个逆序迭代器，它指向容器c的最后一个元素

c.rend() 返回一个逆序迭代器，它指向容器c的第一个元素前面的位置
————————————————
版权声明：本文为CSDN博主「小白的进阶」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/laobai1015/article/details/51567564
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
	cout << "大小为:" << v.size() << endl;
	int i;
	for (i = 0; i < v.size(); i++) {
		cout << v[i] <<' ';

	}
	cout << endl << endl;
}