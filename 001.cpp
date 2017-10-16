#include <iostream>
using namespace std;
int bmp[4][4];
bool up(int uper[4][4]){
	bool any=true;
	
	for(int j=0;j<4;j++){
		int n=0;
		while(n<4){
			if(uper[j][0]!=0){if(uper[j][0]==uper[j][1]){uper[j][1]+=uper[j][0];
				uper[j][0]=0;n=3;
			}else{any=false;break;}}
			
			for(int i=0;i<3;i++){
			
				uper[j][i]=uper[j][i+1];
				
			}
			uper[j][3]=0;
			n++;
		}
		
	}
	return any;
}
bool down(int uper[4][4]){
	bool any=true;
	
	for(int j=0;j<4;j++){
		int n=0;
		while(n<4){
			if(uper[j][3]!=0){if(uper[j][3]==uper[j][2]){uper[j][2]+=uper[j][3];
				uper[j][3]=0;n=3;
			}else{any=false;break;}}
			
			for(int i=3;i>0;i--){
			
				uper[j][i]=uper[j][i-1];
				
			}
			uper[j][0]=0;
			n++;
		}

bool up(int uper[4][4]){
	bool any=true;
	
	for(int j=0;j<4;j++){
		int n=0;
		while(n<4){
			if(uper[j][0]!=0){if(uper[j][0]==uper[j][1]){uper[j][1]+=uper[j][0];
				uper[j][0]=0;n=3;
			}else{any=false;break;}}
			
			for(int i=0;i<3;i++){
			
				uper[j][i]=uper[j][i+1];
				
			}
			uper[j][3]=0;
			n++;
		}
		
	}
	return any;
}
bool down(int uper[4][4]){
	bool any=true;
	
	for(int j=0;j<4;j++){
		int n=0;
		while(n<4){
			if(uper[j][3]!=0){if(uper[j][3]==uper[j][2]){uper[j][2]+=uper[j][3];
				uper[j][3]=0;n=3;
			}else{any=false;break;}}
			
			for(int i=3;i>0;i--){
			
				uper[j][i]=uper[j][i-1];
				
			}
			uper[j][0]=0;
			n++;
		}
		
	}
	return any;
}
bool left(int uper[4][4]){
	bool any=true;
	
	for(int j=0;j<4;j++){
		int n=0;
		while(n<4){
			if(uper[0][j]!=0){if(uper[0][j]==uper[1][j]){uper[1][j]+=uper[0][j];
				uper[0][j]=0;n=3;
			}else{any=false;break;}}
			
			for(int i=0;i<3;i++){
			
				uper[i][j]=uper[i+1][j];
				
			}
			uper[3][j]=0;
			n++;
		}
		
	}
	return any;
}
bool right(int uper[4][4]){
	bool any=true;
	
	for(int j=0;j<4;j++){
		int n=0;
		while(n<4){
			if(uper[3][j]!=0){if(uper[3][j]==uper[2][j]){uper[2][j]+=uper[3][j];
				uper[3][j]=0;n=3;
			}else{any=false;break;}}
			
			for(int i=3;i>0;i--){
			
				uper[i][j]=uper[i-1][j];
				
			}
			uper[0][j]=0;
			n++;
		}
		
	}
	return any;
}
void bmpout(){
    for(int j=0;j<4;j++){
    	for(int i=0;i<4;i++){
    	   if(bmp[i][j]==0){cout<<"*";continue;}cout<<bmp[i][j];
    	} cout<<"\n";
    }
    cout<<"\n";
}
int main() {char com=' ';
	bmp[1][1]=2;
	bmp[1][2]=2;
	bmp[1][3]=2;
	bmp[2][3]=4;
	bmp[0][3]=2;
	
        
	while(com!='q'){
	
	  switch(com){
	  	case 'j':
	  	down(bmp);
	  	break;
	  	case 'k':
	  	up(bmp);
	  	break;
	  	case 'h':
	  	left(bmp);
	  	break;
	  	case 'l':
	  	right(bmp);
	  	break;
	  	
	  }
	  bmpout();
	  	cin>>com;
	}
	return 0;
}
