#include <iostream>
#include <string>

using namespace std;

class CCarteJoc
{
private:
	string suita;
	int valoare;
	bool stare_curenta = false;
public:
	friend class CJoc21;
};

