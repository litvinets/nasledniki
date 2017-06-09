#include "stdafx.h"
#include <iostream>
#include <string>

#include "Header.h"

using namespace std;



void Human::show1() const
{
	cout << "Age:" << m_age << endl;
	cout << "Gender:" << m_gender << endl;
	cout << "Name:" << m_name << endl;
}

void Human::setage(int age)
{
	m_age = age;
}
void Human::setgender(string gender)
{
	m_gender = gender;
}
void Human::setname(string name)
{
	m_name = name;
}




void StudentHuman::sethostel(string hostel)
{
	m_hostel = hostel;
}
void StudentHuman::setuniver(string univer)
{
	m_univer = univer;
}
void StudentHuman::setcourse(int course)
{
	m_course = course;
}

void StudentHuman::show2() const
{
	cout << "Hostel:" << m_hostel << endl;
	cout << "Univer:" << m_univer << endl;
	cout << "Course:" << m_course << endl;
}

void  ProfessorHuman::setstate(string state)
{
	m_state = state;
}
//void  ProfessorHuman::setcar(string car)
//{
//	m_car = car;
//}
void  ProfessorHuman::setsubject(string subject)
{
	m_subject = subject;
}

void  ProfessorHuman::setlove(string love)
{
	m_love = love;
}

void ProfessorHuman::show3() const
{
	cout << "State:" << m_state << endl;
	//cout << "Car:" << m_car << endl;
	cout << "Subject:" << m_subject << endl;
	cout << "Levels of RTF's LOVE:" << m_love << endl;
}