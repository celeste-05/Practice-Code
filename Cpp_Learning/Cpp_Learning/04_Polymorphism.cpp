//#include <iostream>
//using namespace std;
//
//class Animal {
//public:
//	// �麯�� sound��Ϊ��ͬ�Ķ��﷢���ṩ�ӿ�
//	virtual void sound() const {
//		cout << "Animal makes a sound" << endl;
//	}
//
//	// ����������ȷ�����������ȷ����
//	virtual ~Animal() {
//		cout << "Animal Destroyed" << endl;
//	}
//};
//
//// ������dog���̳���Animal
//class Dog : public Animal {
//public:
//	// ��д Sound ����
//	 void sound() const override {
//		 cout << "Dog barks" << endl;
//	}
//	 // ��������
//	 ~Dog() {
//		 cout << "Dog Destroyed" << endl;
//	 }
//};
//
//// ������cat �̳���Animal
//class Cat : public Animal{
//public:
//	// ��дsound����
//	void sound() const override {
//		cout << "Meow" << endl;
//	}
//
//	// ��������
//	~Cat() {
//		cout << "Cat Destroyed" << endl;
//	};
//};
//
//// ���Զ�̬
//int main() {
//	Animal* animalPtr; //����ָ��
//
//	// ����Dog ���󣬲�ָ�� Animal ָ��
//	animalPtr = new Dog();
//	animalPtr->sound(); // ����Dog��sound����
//	delete animalPtr;	// �ͷ��ڴ棬���� DOG �� animal ����������
//
//	// ���� Cat ���󣬲�ָ�� Animal ָ��
//	animalPtr = new Cat();
//	animalPtr->sound();	// ����Cat��sound����
//	delete animalPtr;	// �ͷ��ڴ棬���� Cat �� animal ����������
//
//	return 0;
//}

