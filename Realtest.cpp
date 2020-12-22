#include<iostream>
#include<cmath>
#include<string>
using namespace std;

//1
/*string hideVowels(string s){
    string A = "";
    int l1 = s.size();
    int i = 0;
    while(i<l1){
    if(s[i] == 'A' || s[i] == 'E' ||s[i] == 'I' ||s[i] == 'O' ||s[i] == 'U'||s[i] == 'a' ||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u'){
        s[i] = '_';
    }
    i++;
    }
return s;
}

int main(){
    cout<<hideVowels("banana")<<endl;
    cout<<hideVowels("HELLO WORLD")<<endl;
    cout<<hideVowels("Apple Pie")<<endl;
    cout<<hideVowels("Chiang Mai University");
}*/
//done

//2
/*int main(){
    int n,k,count = 0;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter k: ";
    cin>>k;
    while(count<n){
        cout<<"-";
        count++;
    }
    cout<<endl;
    count = 0;
    int i = n*n;
    while(i>0){
        if(i>=0){
            if(i%k == 0){
                cout<<"o";
            }else{
                cout<<"x";
            }
            if(n==1 || i%n ==1){
                cout<<endl;
            }
        }else{
             while(count<n){
        cout<<"-";
        count++;
        }
        }
        i--;
    }
    count = 0;
    while(count<n){
        cout<<"-";
        count++;
    }
}*/
//done

//3
/*string checkDangAvailability(int hour,int minute,string AP,int hourend,int minend,string APend){
    string YN[] = {"Yes","No"};
    if(AP == "AM" && APend =="AM"){
        if(hour<= 8 && minute<30){
            return YN[1];
        }else if(hourend<=12 && minend>59){
            return YN[1];
        }else{
            return YN[0];
        }
    }else if(AP == "AM" && APend == "PM"){
        if(hour<=8 && minute<30){
            return YN[1];
        }else if(hourend >=6 && minend >30){
            return YN[1];
        }else{
            return YN[0];
        }
    }else if(AP == "PM" && APend == "AM"){
        if(hour >=6 && minute>30){
            return YN[1];
        }else if(hourend <= 8 && minend<30){
            return YN[1];
        }else{
            return YN[0];
        }
    }else if(AP =="PM" && APend =="PM"){
        if(hourend>=6 && minend>30 ){
            return YN[1];
        }else if(hourend>6){
            return YN[1];
        }else{
            return YN[0];
        }
    }
    return 0;
}
        


int main(){
    cout << checkDangAvailability(10,25,"AM",12,45,"AM")<<endl;
    cout << checkDangAvailability(8,25,"AM",1,0,"PM")<<endl;
    cout << checkDangAvailability(8,45,"AM",1,0,"PM")<<endl;
    cout << checkDangAvailability(6,0,"AM",8,0,"AM")<<endl;
    cout << checkDangAvailability(5,0,"PM",6,20,"PM")<<endl;
    cout << checkDangAvailability(8,30,"AM",6,30,"PM")<<endl;
    cout << checkDangAvailability(8,30,"AM",8,31,"AM")<<endl;
    cout << checkDangAvailability(3,50,"PM",7,0,"PM")<<endl;
}*/

//4

/*void printNum(int x){
	if(x < 0){
		cout << "(" << x << ")";
	}else{
		cout << x;
	}
}
//เอาเลขลบใส่ในวงเล็บ

void printPow(int x, int y){
	printNum(x);
	cout << "^";
	printNum(y);
}
//


int main(){
	
	int a[] = {3,0,-2,44,-4,1,69,2,-5,2,-2,0,7,-12,4,1,6,35,0,5};
	int b[] = {4,1,0,117,10,1,260,2,-12,-2,-2,-1,25,0,7,2,9,12,-49,0};
	int c[] = {5,1,2,125,25,2,-269,1,-13,0,-1,6,25,12,11,3,6,37,49,5};
	int k;
	cout << "Enter k: ";
	cin >> k;
	
	int i = 0, count = 0;
	while(i < 20){
		if(pow(c[i],k) == pow(a[i],k)+pow(b[i],k)){
			printPow(c[i],k);
			cout << " = ";
			printPow(a[i],k);
			cout << " + ";
			printPow(b[i],k);	
            cout<<endl;		
            count ++;
		}

		i++;	
        
	}
	cout << "Totally "<< count<<" place(s)"; 
	
	return 0;
}*/
//done