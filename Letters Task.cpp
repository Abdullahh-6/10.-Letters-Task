# include <iostream>
# include <cstring>
 


using namespace std;

int main(){
	
	cout << "Enter a string containing (a,b,c,d) : ";
	
	string a;
	getline (cin,a);
	
	int	count_a = 0;
		int	count_b = 0;
	int	count_c = 0;
        int	count_d = 0;
    int invalid = 0;
        int n = a.length();
     

	
	for (int i=0; i<n; i++){
		int j = a[i];
		switch (j) {
			case 'a':
				count_a++;
				break;
			case 'b':
				count_b++;
				break;
			case 'c':
				count_c++;
				break;
			case 'd':
				count_d++;
				break;
		    default :
		    	invalid++;
		}
	} 
	cout << count_a << "a" << count_b << "b" << count_c << "c" << count_d << "d";
    cout << "\n" << invalid << " Invalids";
	
	
	
	
	return 0;
}
