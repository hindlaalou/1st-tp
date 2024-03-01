#include<iostream>
#include<string>
using namespace std;
main()
{
	string h;
	int state=0,i=0;
	
	cout<<"donnez l'heure\n";
	getline(cin,h);
	
	while(true){
		switch(state){
			case 0: 
			
				if(h[i]=='0'|| h[i]=='1')
				{
					i++;
					state=1;
				}
				else if(h[i]=='2')
				{
					state=2;i++;
				}	
				else{
					cout<<"horraire invalide";return 1;
				}
				break;
			case 1:
				
				if(h[i]>='0' && h[i]<='9')
				{
					i++;
					state=3;
				}
				else{
					cout<<"horraire invalide";return 1;
				}	
				break;	
			case 2:
				if (h[i]>='0' && h[i]<='3')
				{
					i++;
					state=3;
				}
				else{
					cout<<"horraire invalide";return 1;
				}
				break;
			
			case 3:
				if (h[i]==':')
				{
					i++;
					state=4;
				}
				else {
					cout<<"horraire invalide";return 1;
				} break;
				
			case 4: 
				if (h[i]>='0' &&h[i]<='5')
				{
					i++;
					state=5;
				}
				else
				{
					cout<<"horraire invalide";return 1;
				}
				break;
			case 5:
					if(h[i]>='0' && h[i]<='9')
				{
					i++;
					state=6;
				}
				else{
					cout<<"horraire invalide";return 1;
				}break;
			case 6:
				if(i==h.length())
				{
					cout<<"horraire valide";return 0;	
				}
				else {
					cout<<"horraire invalide";return 1;
				}break;	
			
			
		
			
			
}
}} 
