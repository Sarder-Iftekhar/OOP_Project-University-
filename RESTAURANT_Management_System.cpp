#include<iostream>
#include<stdlib.h>
using namespace
 std;
 int main()
 {
 	int a,b,c;
 	double s=0;
 	char ch,yn;int cn,tn,lp,dp,fr,rv,th,nfr,nrv,nth,ncc,npc,nmr;
 	
 	system("color 0A");
 	
	abc:cout<<"\n Choose Option:\n"<<endl;
 	cout<<"1)Break Fast:"<<endl;
 	cout<<"2)Lunch:" <<endl;
 	cout<<"3)Soft Drinks: "<<endl;
	 cin>>ch;
	 cout<<"\n\n"<<endl;
	 system("color 0B");
	 while(ch>='0'&& ch<='3')
 	{
 		switch(ch){
 			case '1':
			 {aa:cout<<"\t\t 1)Coffe($ 3)  "<<endl;
			 cout<<"\t\t 2)Tea ($ 2) "<<endl;
			 cout<<"Enter from above::  "<<endl;
			 cin>>a;
			 system("color 0C");
			     switch(a){
			     	case 1:
			     		{
			     			cout<<"\n\tEnter How many cup of Coffe:"<<endl;
			     			cin>>cn;
			     			s=s+(3*cn);
			     			cout<<"\nDo you want more from **BREAK FAST**?(Y/N):"<<endl;
			     			cin>>yn;
			     		if(yn=='y'|| yn=='Y')
			     			goto aa;
			     			else 
			     			cout<<"\nDo you want anything else?(Y/N):"<<endl;
			     			cin>>yn;
			     			if(yn=='y'||yn=='Y')
			     			goto abc;
			     			else
			     			break;
						 }
						 case 2:
						 	{cout<<"\n\tEnter How many cup of Tea:"<<endl;
						 	cin>>tn;
						 	s=s+(tn*2);
						 	cout<<"\nDo you want more from **BREAK FAST**?(Y/N):"<<endl;
			     			cin>>yn;
			     			if(yn=='y'|| yn=='Y')
			     			goto aa;
			     			else 
			     			cout<<"\nDo you want anything else?(Y/N)"<<endl;
			     			cin>>yn;
			     			if(yn=='y'||yn=='Y')
			     			goto abc;
			     			else
			     			break;
							 }break;
	              					 
				 }
				 break;
				 case '2':
				 	{
				 		bb:cout<<"\n 1)Fried Rice ($ 10)"<<endl;
				 		cout<<"\n 2)Rice veg($ 7)."<<endl;
				 		cout<<"\n 3)Tehri($ 12)."<<endl;
				 		cin>>lp;
				 		system("color 0d");
				 		switch(lp)
				 		{
				 			case 1:
				 				{cout<<"\n How many plate of Fried Rice?:"<<endl;
				 				cin>>nfr;
				 				s=s+(10*nfr);
				 				cout<<"\n DO you want anything more from lunch platter?(Y/N):"<<endl;
				 				cin>>yn;
				 				if(yn=='y'|| yn=='Y')
				 				goto bb;
				 				else 
				 				cout<<"\nDo you wanth anything else?(Y/N):"<<endl;
				 				cin>>yn;
				 				if(yn=='y'||yn=='Y')
				 				goto abc;
				 				else
								 break;
								 }break;
								 case 2:
								 	{
								 	cout<<"\n How many plate of Rice Vegetable?"<<endl;
				 				cin>>nrv;
				 				s=s+(7*nrv);
				 				cout<<"\n DO you want anything more from lunch platter?(Y/N):"<<endl;
				 				cin>>yn;
				 				if(yn=='y'|| yn=='Y')
				 				goto bb;
				 				else 
								 cout<<"\nDo you wanth anything else?(Y/N):"<<endl;
				 				cin>>yn;
				 				if(yn=='y'||yn=='Y')
				 				goto abc;
				 				else
								 break;	
									 }break;
									 case 3:
									 	{ cout<<"\n How many playe of Tehri?"<<endl;
									 	cin>>nth;
									 	s=s+(12*nth);
									 	cout<<"\n Do want more from **LUNCH** ?(Y/N):"<<endl;
									 	cin>>yn;
									 	if(yn=='y'||yn=='Y')
									 	goto bb;
									 	cout<<"\nDo you wanth anything else?(Y/N):"<<endl;
				 				cin>>yn;
				 				if(yn=='y'||yn=='Y')
				 				goto abc;
				 				else
								 break;
										 }
						 }break;
						 case '3':
						 	{  
						 	    cc:cout<<"choose drinks:"<<endl;
						 		cout<<"\n1)Coca-cola($$ 1.4)"<<endl;
						 		cout<<"2)Pepsi($$ 1.5)"<<endl;
						 		cout<<"3)Miranda($$ 1.2)"<<endl;
						 		cin>>dp;
						 		system("color 0e");
						 		switch(dp){
						 			case 1:
						 				{cout<<"\n How many Bottle of Coca-cola?:"<<endl;
				 				cin>>ncc;
				 				s=s+(1.4*ncc);
				 				cout<<"\n DO you want anything more from **SOFT DRINKS?*(Y/N)"<<endl;
				 				cin>>yn;
				 				if(yn=='y'|| yn=='Y')
				 				goto cc;
				 				else 
				 				cout<<"\nDo you wanth anything else?(Y/N):"<<endl;
				 				cin>>yn;
				 				if(yn=='y'||yn=='Y')
				 				goto abc;
				 				else
								 break;
						 					
										 }break;
										 case 2:
										 	{
										 		cout<<"\n How many Bottle of PEPSI?:"<<endl;
				 				cin>>npc;
				 				s=s+(1.5*npc);
				 				cout<<"\n DO you want anything more from **SOFT DRINKS??**(Y/N):"<<endl;
				 				cin>>yn;
				 				if(yn=='y'|| yn=='Y')
				 				goto cc;
				 				else 
				 				cout<<"\nDo you wanth anything else?(Y/N):"<<endl;
				 				cin>>yn;
				 				if(yn=='y'||yn=='Y')
				 				goto abc;
				 				else
								 break;
											 }break;
											 case 3:
											 	{
											 		cout<<"\n How many Bottle of MIRANDA?:"<<endl;
				 				cin>>nmr;
				 				s=s+(1.2*nmr);
				 				cout<<"\n DO you want anything more from **SOFT DRINKS??**"<<endl;
				 				cin>>yn;
				 				if(yn=='y'|| yn=='Y')
				 				goto cc;
				 				else 
				 				cout<<"\nDo you wanth anything else??"<<endl;
				 				cin>>yn;
				 				if(yn=='y'||yn=='Y')
				 				goto abc;
				 				else
								 break;
												 }break;
						 			
								 }break;
							 }break;
						 break;
					 }break;
				 break;
				 
				 }	break;
 			break;
		 }break;
	 }
	 cout<<"---------------------BILL-------------------------"<<endl;
	 
	 cout<<"#n\t Your BILL IS:\t\t $$ "<<s<<endl;
	 system("PAUSE");
	 cout<<"\n"<<endl;
	 system("CLS");
	 main();
	 return 0;

 }
