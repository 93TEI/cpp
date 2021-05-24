#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <random>
#include "header.h"

#define TEI
using namespace std;

int main()
{
	//기본문법 연습
	/*
	int x(0), y(0);	//직접초기화
	char ch(97);

	cout << "숫자 두개 입력";
	cin >> x >> y;
	cout << add(x, y) << endl;
	cout << sizeof(x) << "," << sizeof(int) << endl;
	cout << static_cast<int>(ch) << endl;

	//비트 플래그
	const unsigned char option0 = 0b000'0001; //비트플래그, 오른쪽붙 센다
	const unsigned char option1 = 0b000'0010; //비트플래그, 오른쪽붙 센다
	unsigned char myflag = 0b000'000;
	myflag |= option0; // 비트 on
	myflag &= ~option0; //비트 off
	myflag &= ~(option1 | option1); // 비트 동시에 off
	myflag ^= option0; // XOT(^) 연산자 이용해서 비트 토글(toggle)

	//비트플래그 예시
	// Define a bunch of physical/emotional states
	const unsigned char isHungry = 1 << 0; // 0000 0001 
	const unsigned char isSad = 1 << 1; // 0000 0010 
	const unsigned char isMad = 1 << 2; // 0000 0100 
	const unsigned char isHappy = 1 << 3; // 0000 1000 
	const unsigned char isLaughing = 1 << 4; // 0001 0000 
	const unsigned char isAsleep = 1 << 5; // 0010 0000 
	const unsigned char isDead = 1 << 6; // 0100 0000 
	const unsigned char isCrying = 1 << 7; // 1000 0000 
	// 하지만 std::bitset을 이용할것. 오류를 막기위해
	
	//RGB 표현
	const unsigned int redBits = 0xFF000000;
	const unsigned int greenBits = 0x00FF0000;
	const unsigned int blueBits = 0x0000FF00;
	const unsigned int alphaBits = 0x000000FF;

	std::cout << "입력:"; // ex. FF00FF00
	unsigned int pixel;
	std::cin >> std::hex >> pixel;
	
	unsigned char red = (pixel & redBits) >> 24; // 24만큼 비트시프트로 오른쪽보내면 0-255 사이값이 됨
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
	std::cin.ignore(32767, '\n'); // 버퍼에 남은 \n 제거되는 코드, 32767은 무시할 문자 수.
	std::cout << yourName << endl;
	std::getline(std::cin, yourName); // 한줄 전체 받기
	std::cout << yourName << endl;
	std::cout << (myName.length() > yourName.length() ? myName : yourName) << endl;

	//열거형
	enum PERSON
	{
		kim, //자동으로 0 할당 / 물론 다른 값으로 값을 줄 수 있다. 그 뒤는 1씩 증가된 값을 같게 됨.
		lee, // 1할당
		park // 2할당
	};

	PERSON new_person(kim);
	std::cout << new_person << endl; // 0이 출련된다

	enum class PersonType	// enum이 달라도 안의 내용물의 이름이 같으면 같게 처리되는 문제를 방지
	{
		MEN,
		WOMAN,
	};

	//typedef 별칭
	//typedef double db_t
	//using db_t = double
	// 위 두 문법은 같은 것

	//난수 생성
	//c++ 11 전
	std::srand(static_cast<unsigned int>(time(0)));

	for (int i = 0; i < 10; i++)
		std::cout << std::rand()%10 << endl;
	//c++ 11 후
		//#include <random>해서 사용

	//배열
	int prime[5] = { 2,3,5,7,11 }; // 배열을 초기화 목록 사용해서 초기화
	///배열 인덱스에 enum은 괜찮지만 enum class는 암시적 정수변환이 안되기 때문에 형변환해줘야함


	return 0;
}