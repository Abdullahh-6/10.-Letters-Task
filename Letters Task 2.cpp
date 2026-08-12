# include <iostream>
# include <cstring>
 

using namespace std;

int main(){
	
	string a;
	cout << "Enter a string : ";
	getline (cin,a);
	int n = a.length();
	int count_y = 0;
	int count_k = 0;
	
	for (int i=0; i<n; i++){
		
		int j = a[i];
		
		switch (j) {
					
		case 'y' :
			count_y++;
			break;
		case 'k' :
			count_k++;
			break;
	}	   
	
		
	}
	 if ((count_y == 1) && (count_k ==2))
	  cout << "Valid";
	  
	 else 
	 cout << "Invalid";
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
    return 0;	
}
