#pragma once

#include <iostream>
using namespace std;


class Human
{
protected:
	int m_age;
	string m_gender;
	string m_name;

public:

	void show1() const;
	void setage(int age);
	void setgender(string gender);
	void setname(string name);
};

class StudentHuman : public Human
{
	string m_hostel;
	string m_univer;
	int m_course;

public:
	void sethostel(string hostel);
	void setuniver(string univer);
	void setcourse(int course);
	void show2() const;

};

class ProfessorHuman : public Human
{
	string m_state;
	//string m_car;
	string m_subject;
	string m_love;

public:
	void setstate(string state);
	void setcar(string car);
	void setsubject(string subject);
	void setlove(string love);
	void show3() const;

};


