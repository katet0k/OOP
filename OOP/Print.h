#include"Classes.h"

void Print_Student(Student* student) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " ϲ�  _______________________________ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << student->get_surname() << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " ���� ����������  ___________________ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << student->get_date_of_birth() << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " ���������� ������� _________________ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << student->get_contact_phone() << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " ̳���  _____________________________ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << student->get_city() << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " �����  ____________________________ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << student->get_country() << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " ̳��� �� �����" << endl;
	cout << " �� ����������� ���������� ������ ___ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << student->get_city_and_country_institution() << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " ����� ����� ________________________ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << student->get_number_groups() << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " ����� ����������� �������  _________ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << student->get_name_of_the_institution() << endl;

}

void Print_Tochka(Tochka* tochka) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << " ���� ���������� -- > ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 9));
	cout << tochka->get_x();
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << ".";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 9));
	cout << tochka->get_y();
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << ".";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 9));
	cout << tochka->get_z() << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
}

void Print_Drib(Drib* drib) {

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	//��������� 
	cout << endl;
	cout << drib->get_x();
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 9));
	cout << " + ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << drib->get_y();
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 9));
	cout << " = ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << drib->get_res1() << endl;

	//��������� 
	cout << drib->get_x();
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 9));
	cout << " - ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << drib->get_y();
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 9));
	cout << " = ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << drib->get_res2() << endl;

	//��������
	cout << drib->get_x();
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 9));
	cout << " * ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << drib->get_y();
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 9));
	cout << " = ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << drib->get_res3() << endl;

	//������ 
	cout << drib->get_x();
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 9));
	cout << " / ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << drib->get_y();
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 9));
	cout << " = ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << drib->get_res4() << endl;

}
void Print_Kontakt(Phone_book* phone_book, string Name, string Home_phone, string Work_phone, string Cellphone, string Info) {

	string Prof = {
		"  O \n"
		" (_) " };

	phone_book->set_Name(Name);
	phone_book->set_HomePhone(Home_phone);
	phone_book->set_WorkPhone(Work_phone);
	phone_book->set_Cellphone(Cellphone);
	phone_book->set_Info(Info);
	cout << Prof << "ϲ� : " << phone_book->get_Name() << endl;
	cout << "     �������� ������� : " << phone_book->get_HomePhone() << endl;
	cout << "     ������� ������� : " << phone_book->get_WorkPhone() << endl;
	cout << "     �������� ������� : " << phone_book->get_Cellphone() << endl;
	cout << "     ��������� ���������� : " << phone_book->get_Info() << endl;

}
void Print_Phanebook(Phone_book* phone_book, int i, int a) {
	string Name;
	string Home_phone;
	string Work_phone;
	string Cellphone;
	string Info;
	string Prof = {
		"  O \n"
		" (_) " };

	if (i == 0) {
		cout << " ϲ� --> ";
		cin >> Name;
		cout << " �������� ������� --> ";
		cin >> Home_phone;
		cout << " ������� ������� --> ";
		cin >> Work_phone;
		cout << " �������� ������� --> ";
		cin >> Cellphone;
		cout << " ��������� ���������� --> ";
		cin >> Info;
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);
	}
	if (i >= 1) {
		cout << Prof << "ϲ� : " << phone_book->get_Name() << endl;
		cout << "     �������� ������� : " << phone_book->get_HomePhone() << endl;
		cout << "     ������� ������� : " << phone_book->get_WorkPhone() << endl;
		cout << "     �������� ������� : " << phone_book->get_Cellphone() << endl;
		cout << "     ��������� ���������� : " << phone_book->get_Info() << endl;

	}
}
void Print_Phanebookk(Phone_book* phone_book, int i, int a) {
	string Name;
	string Home_phone;
	string Work_phone;
	string Cellphone;
	string Info;
	string Prof = {
		"  O \n"
		" (_) " };

	if (a == 0) {
		if (i >= 1) {
			Print_Phanebook(phone_book, i, a);
		}
		Name = "Bob";
		Home_phone = "098 777 66 62";
		Work_phone = "098 777 66 61";
		Cellphone = "098 777 66 60";
		Info = "���� ��������� ����������";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);

		Name = "Daria";
		Home_phone = "098 687 98 09";
		Work_phone = "096 686 66 98";
		Cellphone = "098 789 34 53";
		Info = "���� ��������� ����������";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);

		Name = "Tom";
		Home_phone = "098 234 45 12";
		Work_phone = "098 468 66 34";
		Cellphone = "097 753 43 33";
		Info = "���� ��������� ����������";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);
	}
	if (a == 1 && i >= 1) {

		Name = "Bob";
		Home_phone = "098 777 66 62";
		Work_phone = "098 777 66 61";
		Cellphone = "098 777 66 60";
		Info = "���� ��������� ����������";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);

		Name = "Daria";
		Home_phone = "098 687 98 09";
		Work_phone = "096 686 66 98";
		Cellphone = "098 789 34 53";
		Info = "���� ��������� ����������";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);

		Name = "Tom";
		Home_phone = "098 234 45 12";
		Work_phone = "098 468 66 34";
		Cellphone = "097 753 43 33";
		Info = "���� ��������� ����������";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);
	}
	if (a == 2 && i >= 1) {
		if (i >= 1) {

			Print_Phanebook(phone_book, i, a);
		}

		Name = "Daria";
		Home_phone = "098 687 98 09";
		Work_phone = "096 686 66 98";
		Cellphone = "098 789 34 53";
		Info = "���� ��������� ����������";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);

		Name = "Tom";
		Home_phone = "098 234 45 12";
		Work_phone = "098 468 66 34";
		Cellphone = "097 753 43 33";
		Info = "���� ��������� ����������";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);
	}
	if (a == 3 && i >= 1) {
		if (i >= 1) {
			Print_Phanebook(phone_book, i, a);
		}
		Name = "Bob";
		Home_phone = "098 777 66 62";
		Work_phone = "098 777 66 61";
		Cellphone = "098 777 66 60";
		Info = "���� ��������� ����������";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);

		Name = "Daria";
		Home_phone = "098 687 98 09";
		Work_phone = "096 686 66 98";
		Cellphone = "098 789 34 53";
		Info = "���� ��������� ����������";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);

	}
	if (a == 1 && i != 1) {

		Name = "Daria";
		Home_phone = "098 687 98 09";
		Work_phone = "096 686 66 98";
		Cellphone = "098 789 34 53";
		Info = "���� ��������� ����������";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);

		Name = "Tom";
		Home_phone = "098 234 45 12";
		Work_phone = "098 468 66 34";
		Cellphone = "097 753 43 33";
		Info = "���� ��������� ����������";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);
	}
	if (a == 2 && i != 1) {
		Name = "Bob";
		Home_phone = "098 777 66 62";
		Work_phone = "098 777 66 61";
		Cellphone = "098 777 66 60";
		Info = "���� ��������� ����������";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);

		Name = "Tom";
		Home_phone = "098 234 45 12";
		Work_phone = "098 468 66 34";
		Cellphone = "097 753 43 33";
		Info = "���� ��������� ����������";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);
	}
	if (a == 3 && i != 1) {
		Name = "Bob";
		Home_phone = "098 777 66 62";
		Work_phone = "098 777 66 61";
		Cellphone = "098 777 66 60";
		Info = "���� ��������� ����������";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);

		Name = "Daria";
		Home_phone = "098 687 98 09";
		Work_phone = "096 686 66 98";
		Cellphone = "098 789 34 53";
		Info = "���� ��������� ����������";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);

	}

}
void Print_PIB(Phone_book* phone_book, string PIB) {
	string Name;
	string Home_phone;
	string Work_phone;
	string Cellphone;
	string Info;

	if (PIB == "Bob") {
		Name = "Bob";
		Home_phone = "098 777 66 62";
		Work_phone = "098 777 66 61";
		Cellphone = "098 777 66 60";
		Info = "���� ��������� ����������";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);
	}
	else if (PIB == "Daria") {
		Name = "Daria";
		Home_phone = "098 687 98 09";
		Work_phone = "096 686 66 98";
		Cellphone = "098 789 34 53";
		Info = "���� ��������� ����������";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);
	}
	if (PIB == "Tom") {
		Name = "Tom";
		Home_phone = "098 234 45 12";
		Work_phone = "098 468 66 34";
		Cellphone = "097 753 43 33";
		Info = "���� ��������� ����������";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);
	}
	else {
		cout << "������ �������� �� ���� " << endl;
	}
}