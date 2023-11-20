// Eg: palindrome "level" --> remove an element / ot replace an element with other alphabet 
// level --> levea

#include<iostream>
using namespace std;

class Solution
{
	public:
	int chk_palindrome(string str);
	void break_palindrome(string str);
};
int Solution :: chk_palindrome(string str)
{
	int i,j,count =0;
	int n=str.length();
	for(i=0;i<n/2;i++)
	{
		if(str[i] == str[n-i-1])
			count ++;
	}
//	if(count == i) cout << "Palindrome\n";
//	else cout << "Not palindrome\n";
	if(count == i) return true;
	else return false;
	
}
void Solution :: break_palindrome(string str)
{
	int x,n=str.length();
	x = chk_palindrome(str);
	if(x==1)
	{
		cout << str <<" is Palindrome\n";
		if(n%2==0) str[n/2]='a';
		else str[n/2+1] = 'b';
		str[n-1] = '\0',n--;
		cout << "break_palindrome:" << str << endl;
	}
	else cout << str << " is not palindrome.Cannot perform break_palindrome operation\n";
}
int main()
{
	string str;
	cout << "Enter string:";
	cin >> str;
	Solution obj;
	obj.chk_palindrome(str);
	obj.break_palindrome(str);
	return 0;
}
