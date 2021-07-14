#include<iostream>
#include<string>
using namespace std;
class Human {
protected:
	string name;
	int age;
public:
	Human(string& name,int& age):name(name),age(age){}
	virtual void info() const {
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}
};
class Student : public Human {
protected:
	int id;
public:
	Student(string& name, int& age, int& id) : Human(name, age) { this->id = id; }
	void info() const {
		cout << "학생 이름 : " << name << " 학생 id : " << id << " 학생 나이 : " << age << endl;
	}
	void study() const {
		cout << "여러가지를 배워봅시다.ㅇ.ㅇ..ㅇ아아ㅏㅇ" << endl;
	}
};
class Prof : public Human {
protected:
	string depart;
public:
	Prof(string& name, int& age, string& depa) :Human(name, age) { depart = depa; }
	void info() const {
		cout << "교수 이름 : " << name << " 교수 나이 : " << age << "  교수 학과 : " << depart;
	}
	void talk() const {
		cout << "한 잔 하겠나!" << endl;
	}
};
int main()
{
}