#include<iostream>
using namespace std;
#include<string>
#include"pathfinder.cpp"
#include <stdlib.h>
#include<fstream>
#include<windows.h>

class client:public pathfinder
{
	public:
		void message(char name[])
			{
			
				string message;
				cout<<"\n\n\t\t  $>";
				getline(cin,message);
				message = name+message+"\n";
	

				ofstream out(path,ofstream::app);
				out<<message;
				out.close();
			}
	
};
int	main()
	{
		client c;
		char name[50];
		cout<<"\n\n\n\t\t\tEnter Nickname $>";
		cin>>name;
		strcat(name," : ");
		while(true)
		{
			system("cls");
			c.message(name);

		}
		return 0;
	}

