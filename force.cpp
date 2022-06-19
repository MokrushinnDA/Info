#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	char dictionary[90] = {"QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm0123456789!@#$%^&*()-_=+¹;~<>{}[]\|/.,"};
	char a,b,c;
	char a1=0,b1=0,c1=0;
	int q =0;
	cout<<"Enter the password:";
	cin>>a>>b>>c;
	for(int i=0;i<90;i++)
		for(int j=0; j<90; j++)
			for(int g=0; g<90; g++)
				{
					a1=dictionary[i];
					b1=dictionary[j];
					c1=dictionary[g];
					q++;
					if(a==a1&&b==b1&&c==c1)
						cout<<a1<<b1<<c1;
						
						
				}
	cout<<"\nNumbers:"<<q;			
	a1=0;
	b1=0;
	c1=0;
	int u=0;
	while (a != a1 ||b != b1 || c != c1)
	{
			a1 = dictionary[rand() % 90];
			b1 = dictionary[rand() % 90];
			c1 = dictionary[rand() % 90];
			u++;
	}
	cout<<"\n"<<a1 << b1 << c1 << endl;
	cout <<u<<endl;
			
	return 0;
}

