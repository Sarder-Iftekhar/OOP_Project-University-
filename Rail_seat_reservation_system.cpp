#include<iostream>
#include<string.h>
using namespace std;
class service{
	public:
		string name;int age;
		void get(){
			cout<<"enter name:";
			cin>>name;
			cout<<"enter age:";
			cin>>age;
		} 
		
};
class train:public service{
	public:
		void get(){
			service::get();
		
		}
};
class dc:public train{
	
	public:
		int d_c;
		void get(){
			cout<<"Dhaka-Chittagong"<<endl;
			train::get();
		
		}
};
class dk:public train{
	public:
		void get()
		{cout<<"\nDhaka-Khulna"<<endl;
			train::get();
		}
};
class subarna:public dc{
	public:
		void get(){
	dc::get();		
		}
};
class seat:public subarna{
	public:
		void get()
		{
			subarna::get();
		}
};
int main()
{
	int a;
	dc s;
	dk k;
	subarna sub;
	seat subS1;
	cout<<"\nSelect Destination:";
	cout<<"\n1)Dhaka-Chittagong";
	cout<<"\n2)Dhaka-Khulna\n";
	cin>>a;

	if(a==1)
	{
	cout<<"\n**TRain name**\t\t**Time**";
	cout<<"\n1)Subarna\t\t  12 AM"<<endl;
	subS1.get();
	}
	
	
	if(a==2)
	{	k.get();
	}
	

	return 0;
}
