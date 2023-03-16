#include"menu.h"
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

	//�������� 
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
void Print_Phanebook(Phone_book* phone_book, char switch_on1) {
	string Name;
	string Home_phone;
	string Work_phone;
	string Cellphone;
	string Info; 
	string Prof = {
		"  O \n"
	    " (_) " };
	
		Name = "Bob";
		Home_phone = "098 777 66 62";
		Work_phone = "098 777 66 61";
		Cellphone = "098 777 66 60";
		Info = "���� ��������� ����������";
		phone_book->set_Name(Name);
		phone_book->set_HomePhone(Home_phone);
		phone_book->set_WorkPhone(Work_phone);
		phone_book->set_Cellphone(Cellphone);
		phone_book->set_Info(Info);
		cout << Prof << "ϲ� : " << phone_book->get_Name() << endl;
		cout << "     ������� ������� : " << phone_book->get_HomePhone() << endl;
		cout << "     ������� ������� : " << phone_book->get_WorkPhone() << endl;
		cout << "     �������� ������� : " << phone_book->get_Cellphone() << endl;
		cout << "     ��������� ���������� : " << phone_book->get_Info() << endl << endl;

		Name = "Daria";
		Home_phone = "098 687 98 09";
		Work_phone = "096 686 66 98";
		Cellphone = "098 789 34 53";
		Info = "���� ��������� ����������";
		phone_book->set_Name(Name);
		phone_book->set_HomePhone(Home_phone);
		phone_book->set_WorkPhone(Work_phone);
		phone_book->set_Cellphone(Cellphone);
		phone_book->set_Info(Info);
		cout << Prof << "ϲ� : " << phone_book->get_Name() << endl;
		cout << "     ������� ������� : " << phone_book->get_HomePhone() << endl;
		cout << "     ������� ������� : " << phone_book->get_WorkPhone() << endl;
		cout << "     �������� ������� : " << phone_book->get_Cellphone() << endl;
		cout << "     ��������� ���������� : " << phone_book->get_Info() << endl;
		Name = "Tom";
		Home_phone = "098 234 45 12";
		Work_phone = "098 468 66 34";
		Cellphone = "097 753 43 33";
		Info = "���� ��������� ����������";
		phone_book->set_Name(Name);
		phone_book->set_HomePhone(Home_phone);
		phone_book->set_WorkPhone(Work_phone);
		phone_book->set_Cellphone(Cellphone);
		phone_book->set_Info(Info);
		cout << Prof << "ϲ� : " << phone_book->get_Name() << endl;
		cout << "     ������� ������� : " << phone_book->get_HomePhone() << endl;
		cout << "     ������� ������� : " << phone_book->get_WorkPhone() << endl;
		cout << "     �������� ������� : " << phone_book->get_Cellphone() << endl;
		cout << "     ��������� ���������� : " << phone_book->get_Info() << endl;
	
	if (switch_on1 == '1') {

	}
	if (switch_on1 == '3') {
		cout << " ϲ� --> ";
		cin >> Name;
		cout << " ������� ������� --> ";
		cin >> Home_phone;
		cout << " ������� ������� --> ";
		cin >> Work_phone;
		cout << " �������� ������� --> ";
		cin >> Cellphone;
		cout << " ��������� ���������� --> ";
		cin >> Info;
		phone_book->set_Name(Name);
		phone_book->set_HomePhone(Home_phone);
		phone_book->set_WorkPhone(Work_phone);
		phone_book->set_Cellphone(Cellphone);
		phone_book->set_Info(Info);
		cout << Prof << "ϲ� : " << phone_book->get_Name() << endl;
		cout << "     ������� ������� : " << phone_book->get_HomePhone() << endl;
		cout << "     ������� ������� : " << phone_book->get_WorkPhone() << endl;
		cout << "     �������� ������� : " << phone_book->get_Cellphone() << endl;
		cout << "     ��������� ���������� : " << phone_book->get_Info() << endl;

	}
}

int main() {

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char switch_on;
	do
	{
		system("cls");
		Menu* menu = new Menu;
		menu->Vmenu();
		cout << "\n --> ";
		switch_on = _getch();
		system("cls");
		cout << endl;

		switch (switch_on)
		{
		case '0': {
			break;
		}break;
		
		case '1': {

			Tochka* tochka = new Tochka;
			Print_Tochka(tochka);

			string path = "File.txt";
			fstream File;
			File.open(path, ios::out);

			if (!File.is_open()) {
				cout << endl;
				cout << " Error " << endl;
			}
			else {
				cout << endl;
				cout << " ���� ���������� ������� � File.txt ;)";
				File << tochka->get_x() << "." << tochka->get_y() << "." << tochka->get_z() << endl;
			}

			File.close();
			cout << endl << endl;
			cout << " ";
			system("pause");
		}break;
		case '2': {

			Drib* drib = new Drib;
			Print_Drib(drib);

			cout << endl;
			cout << " ";
			system("pause");
		}break;
		case '3': {

			Student* student = new Student;
			Print_Student(student);

			cout << endl;
			cout << " ";
			system("pause");
		}break;
		case '4': {
			char switch_on1 = '0';
			Phone_book * phone_book = new Phone_book;
			do
			{
				Print_Phanebook(phone_book, switch_on1);
			menu->MenuPhone();
			switch_on1 = _getch();
			switch (switch_on1)
			{
			case '1':
			{
				Print_Phanebook(phone_book, switch_on1);
				system("pause");
			}break;
			case '2':
			{
				system("pause");
			}break;
			case '3':
			{
				system("pause");
			}break;
			default:
				break;
			}
			} while (switch_on1 != '0');

			system("pause");
		}break;
		default:
			break;
		}

	} while (switch_on != '0');

	return 0;
}



