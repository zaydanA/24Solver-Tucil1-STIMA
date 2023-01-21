#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <set>
#include <fstream>
#include <time.h> 


using namespace std;
set<string> result;

bool validateInput(string x){

	if (x.compare("A") == 0){
		return true;
	}
	if (x.compare("2") == 0){
		return true;
	}
	if (x.compare("3") == 0){
		return true;
	}
	if (x.compare("4") == 0){
		return true;
	}
	if (x.compare("5") == 0){
		return true;
	}
	if (x.compare("6") == 0){
		return true;
	}
	if (x.compare("7") == 0){
		return true;
	}
	if (x.compare("8") == 0){
		return true;
	}
	if (x.compare("9") == 0){
		return true;
	}
	if (x.compare("10") == 0){
		return true;
	}
	if (x.compare("J") == 0){
		return true;
	}
	if (x.compare("Q") == 0){
		return true;
	}
	if (x.compare("K") == 0){
		return true;
	}

	return false;
}

float remitofloat(string x){
	if (x.compare("A") == 0){
		return 1;
	}
	if (x.compare("2") == 0){
		return 2;
	}
	if (x.compare("3") == 0){
		return 3;
	}
	if (x.compare("4") == 0){
		return 4;
	}
	if (x.compare("5") == 0){
		return 5;
	}
	if (x.compare("6") == 0){
		return 6;
	}
	if (x.compare("7") == 0){
		return 7;
	}
	if (x.compare("8") == 0){
		return 8;
	}
	if (x.compare("9") == 0){
		return 9;
	}
	if (x.compare("10") == 0){
		return 10;
	}
	if (x.compare("J") == 0){
		return 11;
	}
	if (x.compare("Q") == 0){
		return 12;
	}
	if (x.compare("K") == 0){
		return 13;
	}

	return 0;
}

string floattoremi(float x)
{
	if (x == 1){
		return "A";
	}
	if (x == 2){
		return "2";
	}
	if (x == 3){
		return "3";
	}
	if (x == 4){
		return "4";
	}
	if (x == 5){
		return "5";
	}
	if (x == 6){
		return "6";
	}
	if (x == 7){
		return "7";
	}
	if (x == 8){
		return "8";
	}
	if (x == 9){
		return "9";
	}
	if (x == 10){
		return "10";
	}
	if (x == 11){
		return "J";
	}
	if (x == 12){
		return "Q";
	}
	if (x == 13 ){
		return "K";
	}

	return " ";
}

string floattoString(float x)
{
	if (x == 1){
		return "1";
	}
	if (x == 2){
		return "2";
	}
	if (x == 3){
		return "3";
	}
	if (x == 4){
		return "4";
	}
	if (x == 5){
		return "5";
	}
	if (x == 6){
		return "6";
	}
	if (x == 7){
		return "7";
	}
	if (x == 8){
		return "8";
	}
	if (x == 9){
		return "9";
	}
	if (x == 10){
		return "10";
	}
	if (x == 11){
		return "11";
	}
	if (x == 12){
		return "12";
	}
	if (x == 13 ){
		return "13";
	}

	return " ";
}

vector<float>  randomNumber()
{
	vector<float> inputR;
    int lb = 1, ub = 13;
	float a;
	int i;

    srand(time(0));
	for (i=0;i<4;i++){
		inputR.push_back((rand() % (ub - lb + 1)) + lb);
	}
	return inputR;
}

bool isRepeat(string a1,string b1,string c1,string d1){
	if (a1.compare(b1) == 0 || a1.compare(c1) == 0 || a1.compare(d1) == 0 || b1.compare(c1) == 0 || b1.compare(d1) == 0 || c1.compare(d1) == 0){
		return false;
	}
	return true;
}
bool isRepeatFloat(float a1,float b1,float c1,float d1){
	if (a1==b1 || a1==c1 || a1==d1 || b1==c1 || b1==d1 || c1==d1){
		return false;
	}
	return true;
}

void swapFloat(int x, float *a, float *b, float *c, float *d, float p, float q, float r, float s)
// merubah posisi a b c d
{

	// Algoritma
	switch (x)
	{
		case 1:
		{
			*a = p;
			*b = q;
			*c = s;
			*d = r;
			break;
		}
		case 2:
		{
			*a = p;
			*b = r;
			*c = q;
			*d = s;
			break;
		}
		case 3:
		{
			*a = p;
			*b = r;
			*c = s;
			*d = q;
			break;
		}
		case 4:
		{
			*a = p;
			*b = s;
			*c = q;
			*d = r;
			break;
		}
		case 5:
		{
			*a = p;
			*b = s;
			*c = r;
			*d = q;
			break;
		}
		case 6:
		{
			*a = q;
			*b = p;
			*c = r;
			*d = s;
			break;
		}
		case 7:
		{
			*a = q;
			*b = p;
			*c = s;
			*d = r;
			break;
		}
		case 8:
		{
			*a = q;
			*b = r;
			*c = p;
			*d = s;
			break;
		}
		case 9:
		{
			*a = q;
			*b = r;
			*c = s;
			*d = p;
			break;
		}
		case 10:
		{
			*a = q;
			*b = s;
			*c = p;
			*d = r;
			break;
		}
		case 11:
		{
			*a = q;
			*b = s;
			*c = r;
			*d = p;
			break;
		}
		case 12:
		{
			*a = r;
			*b = p;
			*c = q;
			*d = s;
			break;
		}
		case 13:
		{
			*a = r;
			*b = p;
			*c = s;
			*d = q;
			break;
		}
		case 14:
		{
			*a = r;
			*b = q;
			*c = p;
			*d = s;
			break;
		}
		case 15:
		{
			*a = r;
			*b = q;
			*c = s;
			*d = p;
			break;
		}
		case 16:
		{
			*a = r;
			*b = s;
			*c = p;
			*d = q;
			break;
		}
		case 17:
		{
			*a = r;
			*b = s;
			*c = q;
			*d = p;
			break;
		}
		case 18:
		{
			*a = s;
			*b = p;
			*c = q;
			*d = r;
			break;
		}
		case 19:
		{
			*a = s;
			*b = p;
			*c = r;
			*d = q;
			break;
		}
		case 20:
		{
			*a = s;
			*b = q;
			*c = p;
			*d = r;
			break;
		}
		case 21:
		{
			*a = s;
			*b = q;
			*c = r;
			*d = p;
			break;
		}
		case 22:
		{
			*a = s;
			*b = r;
			*c = p;
			*d = q;
			break;
		}
		case 23:
		{
			*a = s;
			*b = r;
			*c = q;
			*d = p;
			break;
		}
		default : break;
	}
}

float calculate(char op1,float num1,float num2){
	switch (op1) {
        case '+':
            return num1+num2;
        case '-':
            return num1-num2;
        case '*':
            return num1*num2;
        case '/':
            return num1/num2;
    }
        
    return 0;
	
}

void way1(float a,float b,float c,float d,char op1[4]) {
    	float temp1, temp2, temp3;
		int i;
		char *tempStr;
		string Str1,Str2,Str3,Str4,Str5,Str6,Str7;
		float p,q,r,s;
		p=a;
		q=b;
		r=c;
		s=d;
        for (i=0;i<24;i++) {
			swapFloat(i,&a,&b,&c,&d,p,q,r,s);
            for (int i=0;i<4;i++) {
                for (int j=0;j<4;j++) {
                    for (int k=0;k<4;k++) {
                        
                        // Way1 --> (nums[0] opI nums[1]) opJ (num[2] opK nums[3])
                        
                        temp1 = calculate(op1[i],a,b);
                        temp2 = calculate(op1[k],c,d);
                        temp3 = calculate(op1[j],temp1,temp2);
                        
                        if (24-temp3 <= 0.000001 && 24-temp3 >= -0.000001){
							Str1=floattoString(a);
							Str2=op1[i];
							Str3=floattoString(b);
							Str4=op1[j];
							Str5=floattoString(c);
							Str6=op1[k];
							Str7=floattoString(d);
							result.insert("(" + Str1 + Str2 + Str3 +")" +Str4 + "(" + Str5  +  Str6 + Str7 + ")");
							
						}
                            
                    }
                }
				
            }
			
        }

    }

void way2(float a,float b,float c,float d,char op1[4]) {
    	float temp1, temp2, temp3;
		int i;
		char *tempStr;
		string Str1,Str2,Str3,Str4,Str5,Str6,Str7;
		float p,q,r,s;
		p=a;
		q=b;
		r=c;
		s=d;
        for (i=0;i<24;i++) {
			swapFloat(i,&a,&b,&c,&d,p,q,r,s);
            for (int i=0;i<4;i++) {
                for (int j=0;j<4;j++) {
                    for (int k=0;k<4;k++) {
                        
                        // Way2 --> ((nums[0] opI nums[1]) opJ num[2]) opK nums[3]
                        
                        temp1 = calculate(op1[i],a,b);
                        temp2 = calculate(op1[j],temp1,c);
                        temp3 = calculate(op1[k],temp2,d);
                        //cout<<"way1 --"<<ops[i]<<" "<<ops[j]<<" "<<ops[k]<<" "<<temp1<<" "<<temp2<<" "<<temp3<<"\n";
                        if (24-temp3 <= 0.000001 && 24-temp3 >= -0.000001){
							Str1=floattoString(a);
							Str2=op1[i];
							Str3=floattoString(b);
							Str4=op1[j];
							Str5=floattoString(c);
							Str6=op1[k];
							Str7=floattoString(d);
							result.insert("((" + Str1 + Str2 + Str3 +")" +Str4  + Str5 + ")" +  Str6 + Str7 + ")");
							
						}
                            
                    }
                }
				
            }
			
        }

    }
void way3(float a,float b,float c,float d,char op1[4]) {
    	float temp1, temp2, temp3;
		int i;
		char *tempStr;
		string Str1,Str2,Str3,Str4,Str5,Str6,Str7;
		float p,q,r,s;
		p=a;
		q=b;
		r=c;
		s=d;
        for (i=0;i<24;i++) {
			swapFloat(i,&a,&b,&c,&d,p,q,r,s);
            for (int i=0;i<4;i++) {
                for (int j=0;j<4;j++) {
                    for (int k=0;k<4;k++) {
                        
                        // Way2 --> (nums[0] opI (nums[1] opJ num[2])) opK nums[3]
                        
                        temp1 = calculate(op1[j],b,c);
                        temp2 = calculate(op1[i],a,temp1);
                        temp3 = calculate(op1[k],temp2,d);
                        //cout<<"way1 --"<<ops[i]<<" "<<ops[j]<<" "<<ops[k]<<" "<<temp1<<" "<<temp2<<" "<<temp3<<"\n";
                        if (24-temp3 <= 0.000001 && 24-temp3 >= -0.000001){
							Str1=floattoString(a);
							Str2=op1[i];
							Str3=floattoString(b);
							Str4=op1[j];
							Str5=floattoString(c);
							Str6=op1[k];
							Str7=floattoString(d);
							result.insert("(" + Str1 + Str2 +"("+ Str3  +Str4  + Str5 + "))" +  Str6 + Str7 + ")");
							
						}
                            
                    }
                }
				
            }
			
        }

    }

void way4(float a,float b,float c,float d,char op1[4]) {
    	float temp1, temp2, temp3;
		int i;
		char *tempStr;
		string Str1,Str2,Str3,Str4,Str5,Str6,Str7;
		float p,q,r,s;
		p=a;
		q=b;
		r=c;
		s=d;
        for (i=0;i<24;i++) {
			swapFloat(i,&a,&b,&c,&d,p,q,r,s);
            for (int i=0;i<4;i++) {
                for (int j=0;j<4;j++) {
                    for (int k=0;k<4;k++) {
                        
                        // Way2 --> nums[0] opI (nums[1] opJ num[2]) opK nums[3])
                        
                        temp1 = calculate(op1[j],b,c);
                        temp2 = calculate(op1[k],temp1,d);
                        temp3 = calculate(op1[i],a,temp2);
                        //cout<<"way1 --"<<ops[i]<<" "<<ops[j]<<" "<<ops[k]<<" "<<temp1<<" "<<temp2<<" "<<temp3<<"\n";
                        if (24-temp3 <= 0.000001 && 24-temp3 >= -0.000001){
							Str1=floattoString(a);
							Str2=op1[i];
							Str3=floattoString(b);
							Str4=op1[j];
							Str5=floattoString(c);
							Str6=op1[k];
							Str7=floattoString(d);
							result.insert("(" + Str1 + Str2 +"("+ Str3  +Str4  + Str5 + ")" +  Str6 + Str7 + "))");
							
						}
                            
                    }
                }
				
            }
			
        }

    }

void way5(float a,float b,float c,float d,char op1[4]) {
    	float temp1, temp2, temp3;
		int i;
		char *tempStr;
		string Str1,Str2,Str3,Str4,Str5,Str6,Str7;
		float p,q,r,s;
		p=a;
		q=b;
		r=c;
		s=d;
        for (i=0;i<24;i++) {
			swapFloat(i,&a,&b,&c,&d,p,q,r,s);
            for (int i=0;i<4;i++) {
                for (int j=0;j<4;j++) {
                    for (int k=0;k<4;k++) {
                        
                        // Way2 -->(nums[0] opI (nums[1] opJ (num[2]) opK nums[3]))
                        
                        temp1 = calculate(op1[k],c,d);
                        temp2 = calculate(op1[j],b,temp1);
                        temp3 = calculate(op1[i],a,temp2);
                        //cout<<"way1 --"<<ops[i]<<" "<<ops[j]<<" "<<ops[k]<<" "<<temp1<<" "<<temp2<<" "<<temp3<<"\n";
                        if (24-temp3 <= 0.000001 && 24-temp3 >= -0.000001){
							Str1=floattoString(a);
							Str2=op1[i];
							Str3=floattoString(b);
							Str4=op1[j];
							Str5=floattoString(c);
							Str6=op1[k];
							Str7=floattoString(d);
							result.insert("(" + Str1 + Str2 +"("+ Str3  +Str4  + "(" + Str5  +  Str6 + Str7 + "))");
							
						}
                            
                    }
                }
				
            }
			
        }

    }

void splashScreen(){
	cout << "            _____\n";
	cout << "           |A .  | _____\n";
	cout << "           | /.\\ ||A ^  | _____\n";
	cout << "           |(_._)|| / \\ ||A _  | _____\n";
	cout << "           |  |  || \\ / || ( ) ||A_ _ |\n";
	cout << "           |____V||  .  ||(_'_)||( v )|\n";
	cout << "                  |____V||  |  || \\ / |\n";
	cout << "                         |____V||  .  |\n";
	cout << "                                |____V|\n\n\n";

}

int main()
{
	char op1[4]={'+','-','*','/'};
	string a1,b1,c1,d1;
	vector<float> inputK;
	float a,b,c,d;
	float count;
	count=0;
	float p,q,r,s;
	int i,j,k;
	bool cek1=false;
	bool cek2=false;
	bool cek3=false;
	bool cek4=false;
	bool cekrepeat=false;
	string choice;
	bool isValid=false; 
	string save;
	time_t start, end;
	
	splashScreen();
	while (!isValid){
		
		cout << "=============================================Pilih Cara Input================================================= \n";
		cout << "1.Random\n";
		cout << "2.Keyboard\n";
		cout << "Input : " ;cin >> choice;
		if (choice.compare("1") == 0 || choice.compare("2") == 0){
			break;
		}
		
		if (!isValid)
		{
			printf("\n =========================================== invalid input ===========================================");
			printf("\n -------------------------------------- press enter to continue -------------------------------------\n ");
			cin.get();
			cin.get();
			system("cls");
		}	
		
	}

	if (choice.compare("2") == 0){
		while (!cek1 || !cek2 || !cek3 || !cek4 ){
			cout << "\nKartu hanya bisa digunakan sekali! \n";
			cout << "Input {A,1,2,3,4,5,6,7,8,9,10,J,Q,K} : \n";
			cout << "1. ";
			cin >> a1;
			cout << "2. ";
			cin >> b1;
			cout << "3. ";
			cin >> c1;
			cout << "4. ";
			cin >> d1;
			cek1 = validateInput(a1);
			cek2 = validateInput(b1);
			cek3 = validateInput(c1);
			cek4 = validateInput(d1);
			if (cek1 == false || cek2 == false || cek3 == false || cek4==false)
			{
				printf("\n ======================================== Masukan tidak sesuai ===========================================");
				printf("\n -------------------------------------- press enter to continue ------------------------------------------\n ");
				cin.get();
				cin.get();
				system("cls");
			}	
		}
		a=remitofloat(a1);
		b=remitofloat(b1);
		c=remitofloat(c1);
		d=remitofloat(d1);


	}else {

			inputK=randomNumber();
			// for (auto num:inputK) cout << num << " ";
			
			// cout << endl;

			a=inputK[0];
			b=inputK[1];
			c=inputK[2];
			d=inputK[3];

			
			

			a1=floattoremi(a);
			b1=floattoremi(b);
			c1=floattoremi(c);
			d1=floattoremi(d);
		

	}
	


    start = clock();
  
    
	
	way1(a,b,c,d,op1);
	way2(a,b,c,d,op1);
	way3(a,b,c,d,op1);
	way4(a,b,c,d,op1);
	way5(a,b,c,d,op1);

	cout << a1 << " " << b1 << " " << c1 << " " << d1 << endl;


	for (auto j = result.begin(); j != result.end(); ++j){
        count++;}
	cout << count << " Solutions\n";
	
    end = clock();
    double duration_sec = double(end-start)/CLOCKS_PER_SEC*1000;

	cout << "Excecution Time : " << duration_sec << " ms\n";



    // cout << "Time taken by program is : " << fixed
    //      << time_taken << setprecision(10);
    // cout << " sec " << endl;

	while (!isValid){
		cout << "Save? (Y/N) : ";
		cin >>  save;
		if (save.compare("Y") == 0 || save.compare("N") == 0){
			break;
		}
		if (!isValid)
		{
			printf("\n =========================================== invalid input ===========================================");
			printf("\n -------------------------------------- press enter to continue -------------------------------------\n ");
			cin.get();
			cin.get();
			system("cls");
		}	
	}
		
	if (save.compare("Y") == 0){
		ofstream File("output.txt");
		File << a1 << " " << b1 << " " << c1 << " " << d1 << endl;
		File << count << " Solutions\n";
		for (auto j = result.begin(); j != result.end(); ++j){
			// cout << *j << "\n";
			File << *j << "\n";
		}
		File.close();
	}	
	
}