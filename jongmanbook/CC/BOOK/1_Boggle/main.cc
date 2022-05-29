#include <iostream>
#include <ostream>
#include <vector>
using namespace std;

const int dx[8]={-1, -1, -1, 1, 1, 1, 0, 0};
const int dy[8]={-1,0,1,-1,0,1,-1,1};

char board[5][5]={
	{'U','R','L','P','M'},
	{'X','P','R','E','T'},
	{'G','I','A','E','T'},
	{'X','T','N','Z','Y'},
	{'X','O','Q','R','S'}
};

bool inRange(int y, int x){
	if (y<0 || x<0 || y>=8 || x>=8) return false;
	return true;
}

bool hasWord(int y, int x, const string& word){
	if(!inRange(y,x)) return false;
	if(board[y][x] != word[0]) return false;
	if(word.size() == 1) return true;

	for (int direction=0; direction <8; ++ direction){
		int nextY = y + dy[direction], nextX = x + dx[direction];
		if(hasWord(nextY, nextX, word.substr(1)))
			return true;
	}
	return false;

}

int main(){

	string word;
	cin >> word;

	bool flag = false;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			if(hasWord(i,j,word))
				flag = true;
		}
	}
	if (flag) cout << "FIND ! " << endl;
	else cout << "NOPE ! " << endl;
	return 0;

}

