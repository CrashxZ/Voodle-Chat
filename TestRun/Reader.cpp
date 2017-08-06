#include<iostream>
#include<string.h>
#include <stdlib.h>
#include<stdio.h>
#include<windows.h>
#include"pathfinder.cpp"
using namespace std;

class reader:pathfinder
{
	private:
		char temptext[500];
		
	public:
		FILE *f=fopen(path,"r");
		void read()
		{
			
			while (!feof(f))
			{
				fgets(temptext,500,f);
				
				cout<<"\n|\t"<<temptext;
				
		   
		    }
		  
		}
		
		int update()
		{
			
			fgets(temptext,500,f);
			if(strcmp(temptext,"-999")==0){
				return 0;
			}
			;
			cout<<"\n|\t"<<temptext;
			
			return 1;
		}
		
		
			
};
main()
{
	reader r;
	if(r.f==NULL){
		exit(1);
	}
	r.read();
	cout<<"\n\n\t\t Enter Realtime? (y/n)\n\t\t $>";
	char c;
	cin>>c;
	if(c=='y'||c=='Y')
	{
		system("cls");
		while(true)
		{
			Sleep(1000);
			int flag=r.update();
			if(flag==0){
				cin.ignore();
				system("cls");
				cout<<"\n\n\t\t\tConnection Terminated";
				break;
			}
	
		
	    }
	}
	
}
