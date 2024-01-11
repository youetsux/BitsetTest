#include <iostream>
#include <bitset>

//bitsetはビット列を使えるSTLのやつー

using std::cout;
using std::endl;

enum STATUS
{
	PARALYSE,
	SLEEP,
	POISON,
	ANGER,
	SAD,
};

int main()
{
	//std::bitset<8> myflag(0);
	std::bitset<8> myflag("00001000");

	//for (int i = 0; i < 8; i++)
	//	cout << myflag[i];
	//cout << endl;
	//myflag[0] = 1;
	//for (int i = 0; i < 8; i++)
	//	cout << myflag[i];
	//cout << endl;

	cout << myflag << endl;
	//myflag[STATUS::POISON] = 1;
	myflag.set(STATUS::POISON);
	cout << myflag << endl;
	//リセットしてみる


	return 0;
}