# ILP
Códigos


Questão A:
**************************************************************************************************

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

*******************************************************************************************************
CAÇA-PALAVRAS:

#include <iostream>
#include <string>

using namespace std;

int main(){
	int N, M, i, j;
	string word;
	
	cin>> N >> M;
	char Mat[N][M];
	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
			cin>> Mat[i][j];
		}
	}
	
	cin>> word;
	
	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
			if(word[i] == Mat[i][j])
			  cout<< "Sim\n";
			else
			  cout<< "Nao\n";
		}
	}
	
	for(i=N-1; i>=0; i--){
		for(j=M-1; j>0; j--){
			if(word[i] == Mat[i])
			  cout<< "Sim\n";
			else
			  cout<< "Nao\n";
		}
	}
	
	
	return 0;
}

***************************************************************************************
SNAKE:

#include <iostream>

using namespace std;

int main(){
	int N, M, i, j, ovos=0;
	  
	  cin>> N >> M;
		int mat[N][M];
		
		for(i=0; i<N; i++){
			for(j=0; j<M; j++){
				cin>> mat[i][j];
			}
		}
		
		for(i=0; i<N; i++){
			for(j=0; j<M; j++){
				ovos += mat[i][j];
									
				}
				
			}	
	
	cout<< ovos << "\n";
	
	return 0;
}

********************************************************************************************************


