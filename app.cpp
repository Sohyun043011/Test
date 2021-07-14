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
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}
};
class Student : public Human {
protected:
	int id;
public:
	Student(string& name, int& age, int& id) : Human(name, age) { this->id = id; }
	void info() const {
		cout << "�л� �̸� : " << name << " �л� id : " << id << " �л� ���� : " << age << endl;
	}
	void study() const {
		cout << "���������� ������ô�.��.��..���ƾƤ���" << endl;
	}
};
class Prof : public Human {
protected:
	string depart;
public:
	Prof(string& name, int& age, string& depa) :Human(name, age) { depart = depa; }
	void info() const {
		cout << "���� �̸� : " << name << " ���� ���� : " << age << "  ���� �а� : " << depart;
	}
	void talk() const {
		cout << "�� �� �ϰڳ�!" << endl;
	}
};
int main()
{
}