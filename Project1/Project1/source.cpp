#include <iostream>
#include "header.h"

#define TEI
using namespace std;

int main()
{
	int x(0), y(0);	//�����ʱ�ȭ
	char ch(97);

	cout << "���� �ΰ� �Է�";
	cin >> x >> y;
	cout << add(x, y) << endl;
	cout << sizeof(x) <<","<<sizeof(int)<< endl;
	cout << static_cast<int>(ch) << endl;

#ifdef TEI
	cout << "TEI";
#endif
}