#include"Server.cpp"
main()
{
	ServerSide obj;
	
	while(true)
	{
		FILE *f=fopen("//MINI_CRASHXZ/Users/Mainak/Documents/Voodle/Voodle1.log","r");
		char choice = obj.menu();
		
		switch (choice)
		{
			case '1':
				{
					obj.create();
					system("cls");
					cout<<"\n\n\n\n\t\t\t ---|SERVER CREATED|---";
					Sleep(5000);
					break;
				}
				case '2':
				{
					obj.message();
					system("cls");
					cout<<"\n\n\n\n\t\t\t --|Message Sent|--";
					Sleep(5000);
					break;
				}
				case '3':
				{
					obj.close();
					system("cls");
					cout<<"\n\n\n\n\t\t\t --|Terminating Connection|--";
					Sleep(5000);
					obj.quit();
					break;
				}
				case 'X':
				{
					obj.quit(1);
					break;
				}
				
		}	
		
		
	}
}


