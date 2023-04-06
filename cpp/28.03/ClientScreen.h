#pragma once
#include "library.h"
#include "Phone.h"
#include "PhoneProvider.h"

struct ClientScreen 
{
	void displayPage(const vector<Phone> &phonedata, int startIndex, int endIndex)
	{
		auto const *phone_provider = new PhoneProvider();
		for (int i = startIndex; i < endIndex && i < phonedata.size(); i++) {
			phone_provider->printMenuPhone(&phonedata[i]);
		}
		delete phone_provider;
	}

	void menu()
	{
		auto const *phone_provider = new PhoneProvider();
		vector<Phone> phonedata;
		phone_provider->readPhoneData(phonedata);

		int pageNum = 0;
		int possiblePages = phonedata.size() / PAGE_SIZE;
		(phonedata.size() % PAGE_SIZE != 0) ? possiblePages++ : possiblePages = possiblePages;
		int startIndex = pageNum * PAGE_SIZE;
		int endIndex = (pageNum + 1) * PAGE_SIZE;
		while (true) {
			system("cls");
			cout << "\n<-------------- PAGE " << pageNum + 1 << " ---------------->\n";
			displayPage(phonedata, startIndex, endIndex);
			cout << "<---                              --->\n  w                                 e  \nany nubmer - info\nq - exit\n";
			cout << "Input action -> ";
			string action;
			cin >> action;
			std::stringstream ss1(action);
			std::stringstream ss2(action); // tried to do it with one ss, but it didn't work
			int num;
			char ch;
			ss1 >> num;
			ss2 >> ch;
			if (ch == 'e' && pageNum + 1 != possiblePages) {
				pageNum++;
			}
			else if (ch == 'w' && pageNum > 0) {
				pageNum--;
			}
			else if (ch == 'q') {
				break;
			}
			if (num > 0 && num < phonedata.size() + 1)
			{
				system("cls");

				Phone const *curr_phone = &phonedata[num - 1];

				phone_provider->printPhone(curr_phone);
				char input;
				cout << "b - buy\nq - exit\n\nInput action -> ";
				cin >> input;
				if (input == 'b')
				{
					string fullName;
					cout << "Input full name of the reciever\n-> ";
					cin.ignore();
					getline(cin, fullName);
					string phoneNumber;
					cout << "Input phone number of the reciever\n-> ";
					cin.ignore();
					getline(cin, phoneNumber);
					string city;
					cout << "Input the place where you want to recieve your package\n-> ";
					cin.ignore();
					getline(cin, city);
					int deliveryMethod;
					cout << "Input how do you want to get your package (1 - delivery, 0 - pickup)\n-> ";
					cin >> deliveryMethod;
					int paymentMethod;
					cout << "Input how do you want to pay for the package (1 - cash, 0 - credit card)\n-> ";
					cin >> paymentMethod;

					phone_provider->printPhone(curr_phone);
					cout << "Your total will be:\n";
					cout << '\t' << curr_phone->getPrice() << "$\n";

					bool isPurchasing;
					cout << "Input 1 to complete your purchase\n-> ";
					cin >> isPurchasing;
					if (isPurchasing)
					{
						cout << "Thank you for using our services! You'll get message to your email when your phone arrives to the closest post office.\n";
						system("pause>0");
					}
					else
					{
						cout << "Operation denied\n";
						system("pause>0");
						return;
					}
				}
				else if (input != 'q')
				{
					cout << "Error: wrong input!\n";
					system("pause");
				}
			}
			startIndex = pageNum * PAGE_SIZE;
			endIndex = (pageNum + 1) * PAGE_SIZE;
		}

		delete phone_provider;
	}

private:
	const int PAGE_SIZE = 8;

};

