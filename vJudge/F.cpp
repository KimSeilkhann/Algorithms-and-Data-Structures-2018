#include<iostream>
#include<deque>
#include<sstream>

using namespace std;
deque<string> ss;
int main()
{
	string s,v="";
	bool swt = false;
	bool open = false;
	bool close = false;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		open = false;
		close = false;
		if(s[i]=='[')
		{
			open = true;
		}
		else if(s[i]==']')
		{
		
			close = true;
		}
		if(swt==false&&!open&&!close)
		{
			v+=s[i];
		}
		else if(swt&&open)
		{
			ss.push_back(v);
			v = "";
		}
		else if(swt)
		{
			v+=s[i];
		}
		
		else if(close)
		{
			ss.push_front(v);
			v = "";
		}
		if(s[i]=='[')
		{
			swt = true;
		}
		else if(s[i]==']')
		{
			swt = false;
		}
	}
	while(ss.size()!=0)
	{
		cout<<ss.front();
		ss.pop_front();
	}
	return 0;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
