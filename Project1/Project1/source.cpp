#include <iostream>
#include <string>
#include "header.h"

#define TEI
using namespace std;

int main()
{
	//�⺻���� ����
	/*
	int x(0), y(0);	//�����ʱ�ȭ
	char ch(97);

	cout << "���� �ΰ� �Է�";
	cin >> x >> y;
	cout << add(x, y) << endl;
	cout << sizeof(x) << "," << sizeof(int) << endl;
	cout << static_cast<int>(ch) << endl;

	//��Ʈ �÷���
	const unsigned char option0 = 0b000'0001; //��Ʈ�÷���, �����ʺ� ����
	const unsigned char option1 = 0b000'0010; //��Ʈ�÷���, �����ʺ� ����
	unsigned char myflag = 0b000'000;
	myflag |= option0; // ��Ʈ on
	myflag &= ~option0; //��Ʈ off
	myflag &= ~(option1 | option1); // ��Ʈ ���ÿ� off
	myflag ^= option0; // XOT(^) ������ �̿��ؼ� ��Ʈ ���(toggle)

	//��Ʈ�÷��� ����
	// Define a bunch of physical/emotional states
	const unsigned char isHungry = 1 << 0; // 0000 0001 
	const unsigned char isSad = 1 << 1; // 0000 0010 
	const unsigned char isMad = 1 << 2; // 0000 0100 
	const unsigned char isHappy = 1 << 3; // 0000 1000 
	const unsigned char isLaughing = 1 << 4; // 0001 0000 
	const unsigned char isAsleep = 1 << 5; // 0010 0000 
	const unsigned char isDead = 1 << 6; // 0100 0000 
	const unsigned char isCrying = 1 << 7; // 1000 0000 
	// ������ std::bitset�� �̿��Ұ�. ������ ��������
	
	//RGB ǥ��
	const unsigned int redBits = 0xFF000000;
	const unsigned int greenBits = 0x00FF0000;
	const unsigned int blueBits = 0x0000FF00;
	const unsigned int alphaBits = 0x000000FF;

	std::cout << "�Է�:"; // ex. FF00FF00
	unsigned int pixel;
	std::cin >> std::hex >> pixel;
	
	unsigned char red = (pixel & redBits) >> 24; // 24��ŭ ��Ʈ����Ʈ�� �����ʺ����� 0-255 ���̰��� ��
	unsigned char green = (pixel & greenBits) >> 16;
	unsigned char blue = (pixel & blueBits) >> 8;
	unsigned char alpha = pixel & alphaBits;

	std::cout << static_cast<int>(red) << "of 255 red\n";
	std::cout << static_cast<int>(green) << "of 255 red\n";
	std::cout << static_cast<int>(blue) << "of 255 red\n";
	std::cout << static_cast<int>(alpha) << "of 255 red\n";
	*/

	int i = 100;
	i = i / 2.3;
	std::cout << i << endl;
	i = 100;
	i = static_cast<int>(i / 2.3);
	std::cout << i << endl;

	//string
	std::string myName("person1");
	std::string yourName;
	std::cin >> yourName;
	std::cin.ignore(32767, '\n'); // ���ۿ� ���� \n ���ŵǴ� �ڵ�, 32767�� ������ ���� ��.
	std::cout << yourName << endl;
	std::getline(std::cin, yourName); // ���� ��ü �ޱ�
	std::cout << yourName << endl;
	std::cout << (myName.length() > yourName.length() ? myName : yourName) << endl;

	//������
	enum PERSON
	{
		kim, //�ڵ����� 0 �Ҵ� / ���� �ٸ� ������ ���� �� �� �ִ�. �� �ڴ� 1�� ������ ���� ���� ��.
		lee, // 1�Ҵ�
		park // 2�Ҵ�
	};

	PERSON new_person(kim);
	std::cout << new_person << endl; // 0�� ��õȴ�

	enum class PersonType	// enum�� �޶� ���� ���빰�� �̸��� ������ ���� ó���Ǵ� ������ ����
	{
		MEN,
		WOMAN,
	};

	//typedef ��Ī
	//typedef double db_t
	//using db_t = double
	// �� �� ������ ���� ��

	return 0;
}