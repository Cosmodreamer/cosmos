#include<bits/stdc++.h>
// �� �ڵ忡�� ���� ���� iostream, string(getline) 
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin>>s;
	int arr[26]={0};
	
	for(int i=0;i<s.length();i++){
		char IN;
		int OUT=0;
		IN = s[i];
		
		for ( char j = 'a'; j<='z';j++){
			if (IN == j ){
				OUT = j -'a';
				arr[OUT]++;	
			}
		}
	}
	for ( int i = 0; i<26; i++)
		cout<<arr[i]<<"";
		return 0;
}

// num�� �ϳ��ϳ� �����ؼ������ϳ�?


