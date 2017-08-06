#include<iostream>
#include<string.h>
#include <stdlib.h>
#include<fstream>
#include<windows.h>
using namespace std;

char log[100] = "//MINI_CRASHXZ/Users/Mainak/Documents/Voodle/file/file.log";
class fileshare
{


public:
	void recieve()
	{
		ifstream x;
		x.open(log, ifstream::out);
		char filename[100];
		x>>filename;
		x.close();
		if (filename == NULL)
		{
			cout << "\n\n\n\n\t\t\tNo File Present!";
		}
		else
		{
			char command[500] = "copy ";
			strcat(command,"\\\\MINI_CRASHXZ\\Users\\Mainak\\Documents\\Voodle\\file\\");
			strcat(command,filename);
			strcat(command," ");
			strcat(command,filename);
			system(command);
		}
	}

	void send()
	{
		ofstream x;
		x.open(log,ofstream::in);
		char filename[100];
		cout << "\n\n\n\n\t\tEnter Filename $> ";
		cin >> filename;
		x<<filename;
		x.close();
		char command[200] = "copy ";
		strcat(command,filename);
		strcat(command," ");
		strcat(command,"\\\\MINI_CRASHXZ\\Users\\Mainak\\Documents\\Voodle\\file");
		strcat(command,"\\");
		strcat(command,filename);
		cout<<command;
		system(command);


	}

		
		
			
};
main()
{
	system("cls");
	cout << "\n\n\n\t\t\t1. Send\n\t\t\t2. Recieve\n\t\t\t$> ";
	fileshare sh;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:{
			   system("cls");
			   sh.send();
			   break;
	}
	case 2:{
			   system("cls");
			   sh.recieve();
			   break;
	}
	}
}
