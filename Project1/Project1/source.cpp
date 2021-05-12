#include <iostream>
#include "header.h"

#define TEI
using namespace std;

int main()
{
	int x(0), y(0);	//직접초기화
	char ch(97);

	cout << "숫자 두개 입력";
	cin >> x >> y;
	cout << add(x, y) << endl;
	cout << sizeof(x) <<","<<sizeof(int)<< endl;
	cout << static_cast<int>(ch) << endl;

#ifdef TEI
	cout << "TEI";
#endif
}