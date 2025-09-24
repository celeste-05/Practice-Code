//#include <iostream>
//using namespace std;
//
//class Animal {
//public:
//	// 虚函数 sound，为不同的动物发声提供接口
//	virtual void sound() const {
//		cout << "Animal makes a sound" << endl;
//	}
//
//	// 虚析构函数确保子类对象被正确析构
//	virtual ~Animal() {
//		cout << "Animal Destroyed" << endl;
//	}
//};
//
//// 派生类dog，继承自Animal
//class Dog : public Animal {
//public:
//	// 重写 Sound 方法
//	 void sound() const override {
//		 cout << "Dog barks" << endl;
//	}
//	 // 析构函数
//	 ~Dog() {
//		 cout << "Dog Destroyed" << endl;
//	 }
//};
//
//// 派生类cat 继承自Animal
//class Cat : public Animal{
//public:
//	// 重写sound方法
//	void sound() const override {
//		cout << "Meow" << endl;
//	}
//
//	// 析构函数
//	~Cat() {
//		cout << "Cat Destroyed" << endl;
//	};
//};
//
//// 测试多态
//int main() {
//	Animal* animalPtr; //基类指针
//
//	// 创建Dog 对象，并指向 Animal 指针
//	animalPtr = new Dog();
//	animalPtr->sound(); // 调用Dog的sound方法
//	delete animalPtr;	// 释放内存，调用 DOG 和 animal 的析构函数
//
//	// 创建 Cat 对象，并指向 Animal 指针
//	animalPtr = new Cat();
//	animalPtr->sound();	// 调用Cat的sound方法
//	delete animalPtr;	// 释放内存，调用 Cat 和 animal 的析构函数
//
//	return 0;
//}

