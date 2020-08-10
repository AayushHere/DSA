#include<iostream>
#include<cstring>
#include<stack>
#include<map>
using namespace std;

int is_Balanced(char *exp)
{
	map<char,char>x;     // create a map
	x[')']='(';       
	x['}']='{';        // As map use kry value pair concept so we create map and intitalise it
	x[']']= '[';
	
	map<char,char> :: iterator it;        // create map iterator
	
	stack<char>st;
	
	for(int i=0;i<strlen(exp);i++)
	{
		if(exp[i]=='(' || exp[i]=='{' || exp[i] == '[' )
		{
			st.push(exp[i]);
		}
		else if(exp[i]==')' || exp[i] == '}' || exp[i]==']')
		{
			if(st.empty())
			{
				return false;
			}
			else
			{
				char temp= st.top();
				it = x.find(exp[i]);      // find a value 
				if(temp == it->second)
				{
					st.pop();
				}
				else
				{
					return false;
				}
			}
		}
	}
	 return st.empty() ? true : false;
}


int main() {
 
    char A[] = "{([a+b]*[c-d])/e}";
    cout << is_Balanced(A) << endl;
 
    char B[] = "{([a+b]}*[c-d])/e}";
    cout << is_Balanced(B) << endl;
 
    char C[] = "{([{a+b]*[c-d])/e}";
    cout << is_Balanced(C) << endl; 
}


