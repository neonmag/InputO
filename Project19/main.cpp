#include <iostream>

using namespace std;

class InputOuptut
{
private:
	char m_charackter;
	int m_data;

public:
	InputOuptut();
	InputOuptut(const char m_charackter, const int m_data);
	void SetMCharactrer(const char m_charackter)
	{
		this->m_charackter = m_charackter;
	}
	void SetMData(const int m_data)
	{
		this->m_data = m_data;
	}
	const char GetMCharackter()
	{
		return this->m_charackter;
	}
	const int GetMData()
	{
		return this->m_data;
	}
	~InputOuptut();
};

InputOuptut::InputOuptut()
{
	this->m_charackter = 0;
	this->m_data = 0;
}

InputOuptut::InputOuptut(const char m_charackter, const int m_data)
{
	this->m_charackter = m_charackter;
	this->m_data = m_data;
}

InputOuptut::~InputOuptut()
{

}

ostream &operator<<(ostream& os, InputOuptut& obj)
{
	os << obj.GetMData() << endl << obj.GetMCharackter() << endl;
	return os;
}

istream &operator>>(istream& is, InputOuptut& obj)
{
	char a;
	cout << "\nEnter char: ";
	is >> a;
	obj.SetMCharactrer(a);
	int b;
	cout << "\nEnter int: ";
	is >> b;
	obj.SetMData(b);
	return is;
}

int main()
{
	InputOuptut obj;
	cin >> obj;
	cout << obj;
}