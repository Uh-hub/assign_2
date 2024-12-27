#include <iostream>
#include <stdio.h>
using namespace std;

class Animal {
public:
	virtual void makeSound();
};

void Animal::makeSound() {
	cout << "家府免仿 " << endl;
}



class Dog : public Animal{
public:
	void makeSound() override {
		cout << "港港" << endl;
	}
};

class Cat : public Animal {
public:
	void makeSound() override {
		cout << "衬成" << endl;
	}
};

class Cow : public Animal {
public:
	void makeSound() override {
		cout << "澜皋" << endl;
	}
};



int main() {
	Dog dog;
	Cat cat;
	Cow cow;
	Animal* animal[3] = { &dog, &cat, &cow };
	for (int i = 0; i < 3; i++)
	{
		animal[i]->makeSound();
	}
	return 0;
}