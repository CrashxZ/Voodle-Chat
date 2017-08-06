#include<iostream>
using namespace std;
#include<string.h>
#include <stdlib.h>
#include<stdio.h>
#include<windows.h>
#include"pathfinder.cpp"
class ServerSide:pathfinder
{
	
	public:
		void close()
		{
			FILE *f=fopen(path,"a+");
			fprintf(f,"\n-999");
			fclose(f);
		}
		void create()
		{
			FILE *f=fopen(path,"w");
			fprintf(f,"\t\t\tConnection Succesfull\n");
			fprintf(f,"Admin says Hello\n");
			fclose(f);
			
			
		}
		void message()
		{
			FILE *f=fopen(path,"a+");
			char message[100];
			cout<<"\n\n\t\t Enter Message $>";
			cin>>message;
			fprintf(f,"Administrator : %s",message);	
			fclose(f);
		}
		void quit()
		{
			FILE *f=fopen(path,"w");
			fprintf(f,"\n-999");
			fclose(f);
			
		}
		char menu()
		{
			cout<<"\n\n\n\t\t\t 1. Start.";
			cout<<"\n\t\t\t 2. Administrator message";
			cout<<"\n\t\t\t 3. Close server"; 	
			cout<<"\n\t\t\t X. Exit";
			cout<<"\n\n\t\t\t Enter Choice $>";
			char choice;
			cin>>choice;
			return choice;		
		}
		void quit(int x)
		{
					system("cls");
					cout<<"\n\n\n\n\t\t\t --|Exiting|--";
					Sleep(3000);
					exit(1);
		}
	
};


