#include <iostream>

using namespace std;


int main(){
	int N, M, i, j;
	
	cin>> N >> M;
	int A[N][M];
	int lin[N]={0}, col[M]={0};
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++) {
		  cin>> A[i][j];
		}
	}
	
	for(int i = 0; i < N; i++) {
	  for(j = 0; j < M; j++) {
		lin[i] = lin[i] + A[i][j];
		col[i] = col[i] + A[j][i];
		}
	}
		  
		  
  for(i = 0; i < N; i++)
	cout<< lin[i] << ' ';
		    
	cout<< "\n";
		    
	for(int i = 0; i < M; i++)  
		cout<< col[i] << ' ';
		    
	cout<< "\n";
	
	return 0;		    
}