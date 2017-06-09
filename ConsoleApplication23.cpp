#include "stdafx.h"
#include <iostream>
#include <string>

#include "Header.h"
using namespace std;


int main()
{
	StudentHuman stud;

	stud.setage(19);
	stud.setgender("female");
	stud.setname("Sasha");
	
	stud.sethostel("no");
	stud.setuniver("KPI");
	stud.setcourse(2);
	stud.show1();
	stud.show2();

	cout << "---------------------" << endl;

		ProfessorHuman prof;
		prof.setname("Shpilka");
		prof.setgender("male");
		prof.setage(30);
		
		prof.setstate("Dotsent RTPS");
		//prof.setcar("Opel");
		prof.setsubject("Proga");
		prof.setlove("NEREALNO SILNAYA");
		prof.show1();
		prof.show3();
		
		
		cout << "---------------------" << endl;
		
		ProfessorHuman prof1;
		prof1.setname("Neuymin");
		prof1.setgender("male");
		prof1.setage(27);
		prof1.setlove("BEZGRANICHNO BOLSHAYA");
		prof1.setstate("TOPOVIY PREPOD RTPS");
		prof1.setsubject("TOPOVAYA PROGA");
		prof1.show1();
		prof1.show3();







	return 0;
}