#include<iostream>
#include<vector>
using namespace std;
bool isPrime(int x) {
	if(x <= 1 || x % 2 == 0) {
		return false;
	}
	
	for(int i = 2; i * i <= x; i++) {
		if(x % i == 0) {return false;}
	}
	
	return true;
}

int solve(string s) {
	vector<pair<string, int>> vec {{"",0}};
	
	int ans = 0;
	
	for(int i = 0; i < s.length(); i++) {
		int siz = vec.size();
		for(int j = 0; j < siz; j++) {
			pair<string, int> temp = vec[j];
			
			string str = temp.first;
			int val = temp.second;
			char tempchar = s[i];
			if(tempchar == '1') {
				temp.first = str + "1";
				temp.second = (val << 1) + 1;
			} else {
				temp.first = str + "0";
				temp.second = (val << 1) + 0;
			}
			
			vec.push_back(temp);
			int check = temp.second;
			
			if(isPrime(check)) {
				ans = max(ans, check);
			}
		}
	}
	
	return ans;
}


int main() {
	int resp = solve("110");
	
	if(resp == 0) {
		cout<<-1;
	} else {
		cout<<resp;
	}
	
	return 0;
}
