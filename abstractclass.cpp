#include <iostream>
#include <string>
using namespace std;


class Animal
{
protected:
	string name;
	string spacies;
	double weight;
	string continent;
public:
	Animal() = default;
	Animal(const char* _name, const char* king, const char* cont, double _wei) 
	{
		name = _name;
		spacies = king;
		continent = cont;
		weight = _wei;
	}
	void Input() 
	{
		cout << "input name: ";
		cin >> name;

		cout << "input kingdown: ";
		cin >> spacies;

		cout << "input weight: ";
		cin >> weight;

		cout << "input continent: ";
		cin >> continent;
	}
	void Print() 
	{
		cout << "name: " << name << endl << "spacies: " << spacies << endl << "weight: " << weight << endl << "continent: " << continent << endl;
	}
	virtual void Eat() = 0;
	virtual void Sound() = 0;
};

class Elephant :public Animal 
{
public:
	Elephant() {}
	Elephant(const char* _name, const char* king, const char* cont, double _wei) :Animal(_name, king, cont, _wei) {}
	void Sound() 
	{
		cout << "YyYyYoOoOoO" << endl;
	}
	void Eat() 
	{
		cout << "Elephants human" << endl;
	}
};

class Cat :public Animal 
{
public:
	Cat() {}
	Cat(const char* _name, const char* king, const char* cont, double _wei) :Animal(_name, king, cont, _wei) {}
	void Sound() 
	{
		cout << "MEOW MEOW MEOW MEOW" << endl;
	}
	void Eat() 
	{
		cout << "Cats korm" << endl;
	}
};

class Dog :public Animal 
{
public:
	Dog() {}
	Dog(const char* _name, const char* king, const char* cont, double _wei) :Animal(_name, king, cont, _wei) {}
	void Sound() 
	{
		cout << "RAF RAF RAF" << endl;
	}
	void Eat() 
	{
		cout << "Dogs myaso kasha" << endl;
	}
};

class Parrot :public Animal 
{
public:
	Parrot() {}
	Parrot(const char* _name, const char* king, const char* cont, double _wei) :Animal(_name, king, cont, _wei) {}
	void Sound() 
	{
		cout << "CHIKI CHIKI CHIKI" << endl;
	}
	void Eat() 
	{
		cout << "Parrots nasekomi" << endl;
	}
};

int main()
{
	Elephant obj1("Indian elephant", "Elephant", "Asia", 5000);
	obj1.Print();
	obj1.Eat();
	obj1.Sound();

	Cat obj2("british cat", "cats", "everywhere", 5);
	obj2.Print();
	obj2.Eat();
	obj2.Sound();
	cout << endl << endl;

	Dog obj3;
	obj3.Print();
	obj3.Eat();
	obj3.Sound();


	Animal* obj;
	int choose = 0;
	cout << "input " << endl <<
		"1 = dog" << endl << "2 = elephant" << endl <<
		"3 = cat" << endl << "4 = parrot" << endl;
	cin >> choose;
	switch (choose)
	{
	case(1):
	{
		obj = new Dog;
		obj->Input();
		obj->Print();
		break;
	}
	case(2):
	{
		obj = new Elephant;
		obj->Input();
		obj->Print();
		break;
	}
	case(3):
	{
		obj = new Cat;
		obj->Input();
		obj->Print();
		break;
	}
	case(4):
	{
		obj = new Parrot;
		obj->Input();
		obj->Print();
		break;
	}
	}
}