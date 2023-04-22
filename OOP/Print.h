
void Print_Student(Student* student) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " ПІБ  _______________________________ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << student->get_surname() << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " Дата народження  ___________________ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << student->get_date_of_birth() << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " Контактний телефон _________________ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << student->get_contact_phone() << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " Місто  _____________________________ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << student->get_city() << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " Країна  ____________________________ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << student->get_country() << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " Місто та країна" << endl;
	cout << " де знаходиться навчальний заклад ___ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << student->get_city_and_country_institution() << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " Номер групи ________________________ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << student->get_number_groups() << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " Назва навчального закладу  _________ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << student->get_name_of_the_institution() << endl;

}
void Print_Tochka(Tochka* tochka) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << " Ваші координати -- > ";
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
	//додавання 
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

	//віднімання 
	cout << drib->get_x();
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 9));
	cout << " - ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << drib->get_y();
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 9));
	cout << " = ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << drib->get_res2() << endl;

	//множення
	cout << drib->get_x();
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 9));
	cout << " * ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << drib->get_y();
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 9));
	cout << " = ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << drib->get_res3() << endl;

	//ділення 
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
	cout << Prof << "ПІБ : " << phone_book->get_Name() << endl;
	cout << "     Домашній телефон : " << phone_book->get_HomePhone() << endl;
	cout << "     Робочій телефон : " << phone_book->get_WorkPhone() << endl;
	cout << "     Мобільний телефон : " << phone_book->get_Cellphone() << endl;
	cout << "     Додаткова інформація : " << phone_book->get_Info() << endl;

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
		cout << " ПІБ --> ";
		cin >> Name;
		cout << " Домашній телефон --> ";
		cin >> Home_phone;
		cout << " Робочій телефон --> ";
		cin >> Work_phone;
		cout << " Мобільний телефон --> ";
		cin >> Cellphone;
		cout << " Додаткова інформація --> ";
		cin >> Info;
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);
	}
	if (i >= 1) {
		cout << Prof << "ПІБ : " << phone_book->get_Name() << endl;
		cout << "     Домашній телефон : " << phone_book->get_HomePhone() << endl;
		cout << "     Робочій телефон : " << phone_book->get_WorkPhone() << endl;
		cout << "     Мобільний телефон : " << phone_book->get_Cellphone() << endl;
		cout << "     Додаткова інформація : " << phone_book->get_Info() << endl;

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
		Info = "Немає додаткової інформації";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);

		Name = "Daria";
		Home_phone = "098 687 98 09";
		Work_phone = "096 686 66 98";
		Cellphone = "098 789 34 53";
		Info = "Немає додаткової інформації";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);

		Name = "Tom";
		Home_phone = "098 234 45 12";
		Work_phone = "098 468 66 34";
		Cellphone = "097 753 43 33";
		Info = "Немає додаткової інформації";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);
	}
	if (a == 1 && i >= 1) {

		Name = "Bob";
		Home_phone = "098 777 66 62";
		Work_phone = "098 777 66 61";
		Cellphone = "098 777 66 60";
		Info = "Немає додаткової інформації";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);

		Name = "Daria";
		Home_phone = "098 687 98 09";
		Work_phone = "096 686 66 98";
		Cellphone = "098 789 34 53";
		Info = "Немає додаткової інформації";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);

		Name = "Tom";
		Home_phone = "098 234 45 12";
		Work_phone = "098 468 66 34";
		Cellphone = "097 753 43 33";
		Info = "Немає додаткової інформації";
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
		Info = "Немає додаткової інформації";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);

		Name = "Tom";
		Home_phone = "098 234 45 12";
		Work_phone = "098 468 66 34";
		Cellphone = "097 753 43 33";
		Info = "Немає додаткової інформації";
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
		Info = "Немає додаткової інформації";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);

		Name = "Daria";
		Home_phone = "098 687 98 09";
		Work_phone = "096 686 66 98";
		Cellphone = "098 789 34 53";
		Info = "Немає додаткової інформації";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);

	}
	if (a == 1 && i != 1) {

		Name = "Daria";
		Home_phone = "098 687 98 09";
		Work_phone = "096 686 66 98";
		Cellphone = "098 789 34 53";
		Info = "Немає додаткової інформації";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);

		Name = "Tom";
		Home_phone = "098 234 45 12";
		Work_phone = "098 468 66 34";
		Cellphone = "097 753 43 33";
		Info = "Немає додаткової інформації";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);
	}
	if (a == 2 && i != 1) {
		Name = "Bob";
		Home_phone = "098 777 66 62";
		Work_phone = "098 777 66 61";
		Cellphone = "098 777 66 60";
		Info = "Немає додаткової інформації";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);

		Name = "Tom";
		Home_phone = "098 234 45 12";
		Work_phone = "098 468 66 34";
		Cellphone = "097 753 43 33";
		Info = "Немає додаткової інформації";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);
	}
	if (a == 3 && i != 1) {
		Name = "Bob";
		Home_phone = "098 777 66 62";
		Work_phone = "098 777 66 61";
		Cellphone = "098 777 66 60";
		Info = "Немає додаткової інформації";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);

		Name = "Daria";
		Home_phone = "098 687 98 09";
		Work_phone = "096 686 66 98";
		Cellphone = "098 789 34 53";
		Info = "Немає додаткової інформації";
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
		Info = "Немає додаткової інформації";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);
	}
	else if (PIB == "Daria") {
		Name = "Daria";
		Home_phone = "098 687 98 09";
		Work_phone = "096 686 66 98";
		Cellphone = "098 789 34 53";
		Info = "Немає додаткової інформації";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);
	}
	if (PIB == "Tom") {
		Name = "Tom";
		Home_phone = "098 234 45 12";
		Work_phone = "098 468 66 34";
		Cellphone = "097 753 43 33";
		Info = "Немає додаткової інформації";
		Print_Kontakt(phone_book, Name, Home_phone, Work_phone, Cellphone, Info);
	}
	else {
		cout << "Такого контакту не існує " << endl;
	}
}