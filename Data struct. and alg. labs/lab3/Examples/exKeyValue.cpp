#include <iostream>
using namespace std;

template<typename T>
class KeyValue
{
	public:
        int key;
	    T value; //generic member

	KeyValue(int key, T value)
	{
	 this->key=key;
	 this->value=value;
	 }

	 KeyValue()
	 {

	 }

	~KeyValue() {};

	int getKey()
	{
		return key;
	}

	T getValue()
	{
		return value;
	 }

	void setKey (int key)
	{
	    this->key = key;
 	}

	void setValue (T value)
	{
		this->value = value;
	}

	void addKey (KeyValue k)
	{
        cout<< this->key + k.getKey();
	}
};

int main()
{
//Everything happens at compilation

KeyValue <unsigned int> keyElement1(-5,10);
KeyValue <unsigned int> keyElement2(3,12);

cout<<keyElement2.getKey()<<" "<<keyElement2.getValue()<<endl;

KeyValue<char> keyElement3(0,0);
keyElement3.setKey(4); keyElement3.setValue('c');
cout<<keyElement3.getKey()<<" "<<keyElement3.getValue()<<endl;

keyElement1.addKey(keyElement1);

return 0;
}

