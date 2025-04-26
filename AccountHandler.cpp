#include<iostream>
#include <string.h>
#include<fstream>
#include <cstring>
using namespace std;
class features;
class App
{ string  password, email;
char user_name[20];
string social_username1[20];
string social_password1[30];
string social_email1[30];
string social_username2[20];
string social_password2[30];
string social_email2[30];
string social_username3[20];
string social_password3[30];
string social_email3[30];
int date,month,year;
 string storedpassword1;
  string storedpassword2;
   string storedpassword3;
string storedusername1;
string storedusername2;
string storedusername3;   
int age;
string name,g;
double phone;
int z1=0,z2=0,z3=0;
  public:
 App()
  {
  age=0;
  phone=0;
  date=0;
  month=0;
  year=0;
  for(int i=0;i<5;i++)
{
	social_username1[i]="No Account";
	social_password1[i]=" ";
	social_email1[i]=" ";
	
		social_username2[i]="No Account";
	social_password2[i]=" ";
	social_email2[i]=" ";
	
		social_username3[i]="No Account";
	social_password3[i]=" ";
	social_email3[i]=" ";
  }  
  }
 ~App()
 {
  cout<<"\nThanks For Using Our Webapp!!"<<endl;
 }

void introduce();
int create_account();
void login();
void social_account_info1();
void social_account_info2();
void social_account_info3();
void isValidUsername(string name);
friend void rate_us(App , features);
friend istream &operator>>(istream &in,App &p)
{
cout<<"\n\n\tUSERNAME SHOULD CONTAIN SOME CHARACHTERS, SOME SPECIAL CHARACTERS(@ OR # OR $ OR _ )AND SOME NUMBERS\n";
cout << "\n\t\t\t\tEnter the username you want to create:\t";
in>>p.user_name;
cout<<"\n\n\tPASSWORD SHOULD CONTAIN SOME CHARACHTERS, SOME SPECIAL CHARACTERS(@ OR # OR $ OR _ )AND SOME NUMBERS\n";
cout << "\n\t\t\t\tEnter the password you want to create:\t";
        in>>p.password;
cout<<"\n\t\t\t\t\t\tEnter age:";
in>>p.age;
       return in;
}
};

int App::create_account()
{
   int s,s1;
   int i = 0, flag1 = 0, flag2 = 0, flag3 = 0;
while (true)
{
	flag1 = flag2 = flag3 = i = 0;
	while (user_name[i] != '\0') {
	if ((user_name[i] >= 'A' && user_name[i] <= 'Z') || (user_name[i] >= 'a' && user_name[i] <= 'z')) {
		flag1 = 1;
            }
			if (user_name[i] >= '0' && user_name[i] <= '9') {
			flag2 = 1;
			}
			if (user_name[i] == '#' || user_name[i] == '@' || user_name[i] == '$' || user_name[i] =='_') {
			flag3 = 1;
				}
			i++;
		}

        if (flag1 == 1 && flag2 == 1 && flag3 == 1) {



            cout << "\n\t\t\t\t\t\tVALID USERNAME\n";

             s=1;



            break;



        } else {
            cout << "\nINVALID USERNAME,USERNAME SHOULD CONTAIN SOME CHARACHTERS, SOME SPECIAL CHARACTERS(@ OR # OR $ OR _ )AND SOME NUMBERS\n";

        }
}
    int j = 0, f1 = 0, f2 = 0, f3 = 0,f4=0;



      while (true)
    {
           f1 = f2 = f3=f4 = j = 0;
         while (password[j] != '\0') {
                if ((password[j] >= 'A' && password[j] <= 'Z') || (password[j] >= 'a' && password[j]<= 'z')) {

                    f1 = 1;
                }
                if (password[j] >= '0' && password[j]<= '9') {

                    f2 = 1;
                }
                if (password[j] == '#' || password[j] == '@' || password[j] == '$' || password[j] =='_') {
				  f3 = 1;
                }
                j++;
                if(password!=user_name)

                {
                f4=1;
                }
            }

            if (f1 == 1 && f2 == 1 && f3 == 1 && f4==1)
            {
			 cout << "\n\t\t\t\t\t\tVALID password\n";

                int s2=1;

                if(s==1 && s2==1)

                {

                    ofstream ofile;
                          static  int count=1;
                               int location;
                                        if(count==1)
                                        {
										
                                          ofile.open("C:\\Users\\RIYA\\Desktop\\files\\f1.txt");

                                       for(int i=0;password[i]!='\0';i++)

                                      {

                                        int t=ofile.tellp();

                                           ofile.seekp(t);

                                      ofile.write((char*)&password[i] , sizeof(password[i]));
                                            
                                      }
                                       storedpassword1=password;

                                       string str=("\n");

                                       ofile.write((char*)&str , sizeof(str));

                                       for(int i=0;user_name[i]!='\0';i++)

                                                {

                                                 int t=ofile.tellp();

                                                  ofile.seekp(t);

                                                ofile.write((char*)&user_name[i] , sizeof(user_name[i]));

                                                

                                                }
                                              storedusername1=user_name;
                                       ofile.close();
                                       int z1=1;
                                       count++;
                                   }
                                   else if(count==2)
                                   {
                                   	  ofile.open("C:\\Users\\RIYA\\Desktop\\files\\f2.txt");

                                       for(int i=0;password[i]!='\0';i++)

                                      {

                                        int t=ofile.tellp();

                                           ofile.seekp(t);

                                      ofile.write((char*)&password[i] , sizeof(password[i]));

                                    

                                      }
                                           storedpassword2=password;
                                       string str=("\n");

                                       ofile.write((char*)&str , sizeof(str));

                                       for(int i=0;user_name[i]!='\0';i++)

                                                {

                                                 int t=ofile.tellp();

                                                  ofile.seekp(t);

                                                ofile.write((char*)&user_name[i] , sizeof(user_name[i]));


                                                  

                                                }
                                                  storedusername2=user_name;
                                       ofile.close();
                                       count++;
                                       int z2=1;
								   }
								   else
								   {
								   	ofile.open("C:\\Users\\RIYA\\Desktop\\files\\f3.txt");

                                       for(int i=0;password[i]!='\0';i++)

                                      {

                                        int t=ofile.tellp();

                                           ofile.seekp(t);

                                      ofile.write((char*)&password[i] , sizeof(password[i]));

                                         

                                      }
                                             storedpassword3=password;
                                       string str=("\n");

                                       ofile.write((char*)&str , sizeof(str));

                                       for(int i=0;user_name[i]!='\0';i++)

                                                {

                                                 int t=ofile.tellp();

                                                  ofile.seekp(t);

                                                ofile.write((char*)&user_name[i] , sizeof(user_name[i]));
                                                    
                                                 
                                                }
                                              storedusername3=user_name;
                                       ofile.close();
                                       count++;
                                       int z3=1;
								   }
                }
                break;
            } else {
                cout << "\nINVALID password,password SHOULD CONTAIN SOME CHARACHTERS, SOME SPECIAL CHARACTERS(@ OR # OR $ OR _ )AND SOME NUMBERS\n";
}
        }
try{
		int n;
        if(age >=15)
        {
        cout<<"\n_*YOU CAN USE THIS APPLICATION*"<<endl;
        cout<<"\n\t\t\t\t\tEnter your name:";
		cin>>name;
        cout<<"\t\t\t\t\tGender:";
        cin>>g;
        cout<<"\t\t\t\t\tEnter phone number:";
        cin>>phone;
        }
        else
        {
        throw n;
        }
    }catch(int k)
    {

    cout<<"\n\t**YOU ARE NOT ABLE TO USE THIS APP"<<endl;
}
  return age;
}
void App::introduce()
{
cout<<"\n\n_";
cout<<"\n\n\t\t\t\t\t\tGlimpse of the Creators (4-MEMBERS):-";
cout<<"\n\n_";
cout<<"\n\t1)\tNAME : Sakshi Gopal Ghardale\t\t\t2)\tName:Riya Vijay Jadhav\n\t\tROLL NO : SYC0B087\t\t\t\t\tROLL NO : SYC0B100\n\t\tDIV : B\t\t\t\t\t\t\tDIV : B\n\t\tINSTITUTE : PCCoE\t\t\t\t\tINSTITUTE : PCCoE";
cout<<"\n\n\t3)\tNAME : Roshni vikas Kadam\t\t\t4)\tName:Janhvi Sanjay Jathot\n\t\tROLL NO : SYC0B114\t\t\t\t\tROLL NO : SYC0B109\n\t\tDIV : B\t\t\t\t\t\t\tDIV : B\n\t\tINSTITUTE : PCCoE\t\t\t\t\tINSTITUTE : PCCoE";
cout<<"\n\n_";
}



void App::login()
{

string username, pass_word;
int view=0;
cout << "\nEnter the username: ";
//for(int i=0;i<10;i++)
    cin >> username;
    
    cout << "\nEnter the password: ";
  //  for(int i=0;i<10;i++)
    cin >> pass_word;
//    cout<<"Enter which account to view (1 , 2 , 3)";
//    cin>>view;
    int j1=0;
//     if(view==1)
//     {

      if (username == storedusername1 && pass_word == storedpassword1)
       {     
  ifstream file1("C:\\Users\\RIYA\\Desktop\\files\\f1.txt");
  
      if (!file1.is_open()) {
        cout << "\nError opening the file." <<endl;
        return;
    }
            cout << "\n\t\t\t\t\t\tLogin successful." <<endl;
            j1=1;
        
		   if(j1==1)
          { 
        social_account_info1();	
		  }
		  else
		  {
		  	cout<<"\n INVALID :";
		  }
        file1.close();
		} 
else if(username == storedusername2 && pass_word == storedpassword3)
{
	 ifstream file2("C:\\Users\\RIYA\\Desktop\\files\\f2.txt");

    if (!file2.is_open()) {
        cout << "\nError opening the file." <<endl;
        return;
    }

            cout << "\n\t\t\t\t\t\tLogin successful." <<endl;
            j1=1;
             if(j1==1)
        { 
        social_account_info2();
        	
		}

    file2.close();
        } 
else
{
	  ifstream file3("C:\\Users\\RIYA\\Desktop\\files\\f3.txt");

    if (!file3.is_open()) {
        cout << "\nError opening the file." <<endl;
        return;
    }
            cout << "\n\t\t\t\t\t\tLogin successful." <<endl;
            j1=1;
             if(j1==1)
        { 
        social_account_info3();
        	
		}
file3.close();

        }
}
void App ::social_account_info1(){
	int ch,choice,m;
	cout<<endl<<endl<<"\n*Now no need to remember all passwords for different accounts!!\n\n\t\t\tWe are here to help you!!*\n\nEnter your social media accounts details here!!"<<endl;
	
  do{
  cout<<endl<<"\n1.Enter info \n2.Display \n3)Delete \n4.Exit\nEnter your choice :";
cin>>choice;
switch(choice){
	
 case 1:
	do{
	cout<<endl<<"\n\t\t\t\n1.Instagram\t\t\t\n2.LinkedIn\t\t\t\n3.Facebook\t\t\t\n4.X\t\t\t\n5.Threads\t\t\t\n6.Exit\nEnter your choice :";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			cout<<"Instagram account info ::"<<endl;
			cout<<"Enter email :";
			cin>>social_email1[0];
			cout<<"Enter username :";
			cin>>social_username1[0];
			cout<<"Enter password :";
			cin>>social_password1[0];
			break;
		case 2:
			cout<<"LinkedIn account info ::"<<endl;
			cout<<"Enter email :";
			cin>>social_email1[1];
			cout<<"Enter username :";
			cin>>social_username1[1];
			cout<<"Enter password :";
			cin>>social_password1[1];
			break;
		case 3:
			cout<<"Facebook account info ::"<<endl;
			cout<<"Enter email :";
			cin>>social_email1[2];
			cout<<"Enter username :";
			cin>>social_username1[2];
			cout<<"Enter password :";
			cin>>social_password1[2];
			break;
		case 4:
			cout<<"X account info ::"<<endl;
			cout<<"Enter email :";
			cin>>social_email1[3];
			cout<<"Enter username :";
			cin>>social_username1[3];
			cout<<"Enter password :";
			cin>>social_password1[3];
			break;
		case 5:
			cout<<"Threads account info ::"<<endl;
			cout<<"Enter email :";
			cin>>social_email1[4];
			cout<<"Enter username :";
			cin>>social_username1[4];
			cout<<"Enter password :";
			cin>>social_password1[4];
			break;
		default:
			cout<<"\nEnter valid choice!!"<<endl;
			break;	
	}
}while(ch<6);
break;
 case 2:
 	cout<<"\nAll Social Media Accounts related info ::"<<endl;
 	for(int i=0;i<5;i++)
 	{
 		switch(i)
 		{
 			case 0:
 				{
 					cout<<endl<<i+1<<") Instagram::"<<endl;
 					cout<<"Username :"<<social_username1[i]<<endl;
 					cout<<"Email :"<<social_email1[i]<<endl;
 					cout<<"Password :"<<social_password1[i]<<endl;
				 }
			    break;
			case 1:
 				{
 					cout<<endl<<i+1<<") LinkeIn::"<<endl;
 					cout<<"Username :"<<social_username1[i]<<endl;
 					cout<<"Email :"<<social_email1[i]<<endl;
 					cout<<"Password :"<<social_password1[i]<<endl;
				 }
			    break;
			case 2:
 				{
 					cout<<endl<<i+1<<") Facebook::"<<endl;
 					cout<<"Username :"<<social_username1[i]<<endl;
 					cout<<"Email :"<<social_email1[i]<<endl;
 					cout<<"Password :"<<social_password1[i]<<endl;
				 }
			    break;
 			case 3:
 				{
 					cout<<endl<<i+1<<") X::"<<endl;
 					cout<<"Username :"<<social_username1[i]<<endl;
 					cout<<"Email :"<<social_email1[i]<<endl;
 					cout<<"Password :"<<social_password1[i]<<endl;
				 }
			    break;
			case 4:
 				{
 					cout<<endl<<i+1<<") Threads::"<<endl;
 					cout<<"Username :"<<social_username1[i]<<endl;
 					cout<<"Email :"<<social_email1[i]<<endl;
 					cout<<"Password :"<<social_password1[i]<<endl;
				 }
			    break;		
 			
		 }
		 	
	 }
	 break;
	  case 3: 
	     string acc;
	      cout<<"\nEnter the account username to delete : ";
	      cin>>acc;
	      for(int i=0;i<5;i++)
	      {
	      if(acc==social_username1[i])
	      {
	      		social_username1[i]="No Account";
            	social_password1[i]=" ";
	            social_email1[i]=" ";
	      	cout<<"\nYOUR ONE ACCOUNT HAS BEEN DELETED :";
		  }
	  }
	  break;
	    
}
}while(choice<4);
}

void App ::social_account_info2(){
	int ch,choice,m;
	cout<<endl<<endl<<"\n*Now no need to remember all passwords for different accounts!!\n\n\t\t\tWe are here to help you!!*\n\nEnter your social media accounts details here!!"<<endl;
	
  do{
  cout<<endl<<"\n1.Enter info \n2.Display \n3)Delete \n4.Exit\nEnter your choice :";
cin>>choice;
switch(choice){
	
 case 1:
	do{
	cout<<endl<<"\n\t\t\t\n1.Instagram\t\t\t\n2.LinkedIn\t\t\t\n3.Facebook\t\t\t\n4.X\t\t\t\n5.Threads\t\t\t\n6.Exit\nEnter your choice :";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			cout<<"Instagram account info ::"<<endl;
			cout<<"Enter email :";
			cin>>social_email2[0];
			cout<<"Enter username :";
			cin>>social_username2[0];
			cout<<"Enter password :";
			cin>>social_password2[0];
			break;
		case 2:
			cout<<"LinkedIn account info ::"<<endl;
			cout<<"Enter email :";
			cin>>social_email2[1];
			cout<<"Enter username :";
			cin>>social_username2[1];
			cout<<"Enter password :";
			cin>>social_password2[1];
			break;
		case 3:
			cout<<"Facebook account info ::"<<endl;
			cout<<"Enter email :";
			cin>>social_email2[2];
			cout<<"Enter username :";
			cin>>social_username2[2];
			cout<<"Enter password :";
			cin>>social_password2[2];
			break;
		case 4:
			cout<<"X account info ::"<<endl;
			cout<<"Enter email :";
			cin>>social_email2[3];
			cout<<"Enter username :";
			cin>>social_username2[3];
			cout<<"Enter password :";
			cin>>social_password2[3];
			break;
		case 5:
			cout<<"Threads account info ::"<<endl;
			cout<<"Enter email :";
			cin>>social_email2[4];
			cout<<"Enter username :";
			cin>>social_username2[4];
			cout<<"Enter password :";
			cin>>social_password2[4];
			break;
		default:
			cout<<"\nEnter valid choice!!"<<endl;
			break;	
	}
}while(ch<6);
break;
 case 2:
 	cout<<"\nAll Social Media Accounts related info ::"<<endl;
 	for(int i=0;i<5;i++)
 	{
 		switch(i)
 		{
 			case 0:
 				{
 					cout<<endl<<i+1<<") Instagram::"<<endl;
 					cout<<"Username :"<<social_username2[i]<<endl;
 					cout<<"Email :"<<social_email2[i]<<endl;
 					cout<<"Password :"<<social_password2[i]<<endl;
				 }
			    break;
			case 1:
 				{
 					cout<<endl<<i+1<<") LinkeIn::"<<endl;
 					cout<<"Username :"<<social_username2[i]<<endl;
 					cout<<"Email :"<<social_email2[i]<<endl;
 					cout<<"Password :"<<social_password2[i]<<endl;
				 }
			    break;
			case 2:
 				{
 					cout<<endl<<i+1<<") Facebook::"<<endl;
 					cout<<"Username :"<<social_username2[i]<<endl;
 					cout<<"Email :"<<social_email2[i]<<endl;
 					cout<<"Password :"<<social_password2[i]<<endl;
				 }
			    break;
 			case 3:
 				{
 					cout<<endl<<i+1<<") X::"<<endl;
 					cout<<"Username :"<<social_username2[i]<<endl;
 					cout<<"Email :"<<social_email2[i]<<endl;
 					cout<<"Password :"<<social_password2[i]<<endl;
				 }
			    break;
			case 4:
 				{
 					cout<<endl<<i+1<<") Threads::"<<endl;
 					cout<<"Username :"<<social_username2[i]<<endl;
 					cout<<"Email :"<<social_email2[i]<<endl;
 					cout<<"Password :"<<social_password2[i]<<endl;
				 }
			    break;		
 			
		 }
		 	
	 }
	 break;
	  case 3: 
	     string acc;
	      cout<<"\nEnter the account username to delete : ";
	      cin>>acc;
	      for(int i=0;i<5;i++)
	      {
	      if(acc==social_username2[i])
	      {
	      		social_username2[i]="No Account";
            	social_password2[i]=" ";
	            social_email2[i]=" ";
	      	cout<<"\nYOUR ONE ACCOUNT HAS BEEN DELETED :";
		  }
	  }
	  break;
	    
}
}while(choice<4);
}

void App ::social_account_info3(){
	int ch,choice,m;
	cout<<endl<<endl<<"\n*Now no need to remember all passwords for different accounts!!\n\n\t\t\tWe are here to help you!!*\n\nEnter your social media accounts details here!!"<<endl;
	
  do{
  cout<<endl<<"\n1.Enter info \n2.Display \n3)Delete \n4.Exit\nEnter your choice :";
cin>>choice;
switch(choice){
	
 case 1:
	do{
	cout<<endl<<"\n\t\t\t\n1.Instagram\t\t\t\n2.LinkedIn\t\t\t\n3.Facebook\t\t\t\n4.X\t\t\t\n5.Threads\t\t\t\n6.Exit\nEnter your choice :";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			cout<<"Instagram account info ::"<<endl;
			cout<<"Enter email :";
			cin>>social_email3[0];
			cout<<"Enter username :";
			cin>>social_username3[0];
			cout<<"Enter password :";
			cin>>social_password3[0];
			break;
		case 2:
			cout<<"LinkedIn account info ::"<<endl;
			cout<<"Enter email :";
			cin>>social_email3[1];
			cout<<"Enter username :";
			cin>>social_username3[1];
			cout<<"Enter password :";
			cin>>social_password3[1];
			break;
		case 3:
			cout<<"Facebook account info ::"<<endl;
			cout<<"Enter email :";
			cin>>social_email3[2];
			cout<<"Enter username :";
			cin>>social_username3[2];
			cout<<"Enter password :";
			cin>>social_password3[2];
			break;
		case 4:
			cout<<"X account info ::"<<endl;
			cout<<"Enter email :";
			cin>>social_email3[3];
			cout<<"Enter username :";
			cin>>social_username3[3];
			cout<<"Enter password :";
			cin>>social_password3[3];
			break;
		case 5:
			cout<<"Threads account info ::"<<endl;
			cout<<"Enter email :";
			cin>>social_email3[4];
			cout<<"Enter username :";
			cin>>social_username3[4];
			cout<<"Enter password :";
			cin>>social_password3[4];
			break;
		default:
			cout<<"\nEnter valid choice!!"<<endl;
			break;	
	}
}while(ch<6);
break;
 case 2:
 	cout<<"\nAll Social Media Accounts related info ::"<<endl;
 	for(int i=0;i<5;i++)
 	{
 		switch(i)
 		{
 			case 0:
 				{
 					cout<<endl<<i+1<<") Instagram::"<<endl;
 					cout<<"Username :"<<social_username3[i]<<endl;
 					cout<<"Email :"<<social_email3[i]<<endl;
 					cout<<"Password :"<<social_password3[i]<<endl;
				 }
			    break;
			case 1:
 				{
 					cout<<endl<<i+1<<") LinkeIn::"<<endl;
 					cout<<"Username :"<<social_username3[i]<<endl;
 					cout<<"Email :"<<social_email3[i]<<endl;
 					cout<<"Password :"<<social_password3[i]<<endl;
				 }
			    break;
			case 2:
 				{
 					cout<<endl<<i+1<<") Facebook::"<<endl;
 					cout<<"Username :"<<social_username3[i]<<endl;
 					cout<<"Email :"<<social_email3[i]<<endl;
 					cout<<"Password :"<<social_password3[i]<<endl;
				 }
			    break;
 			case 3:
 				{
 					cout<<endl<<i+1<<") X::"<<endl;
 					cout<<"Username :"<<social_username3[i]<<endl;
 					cout<<"Email :"<<social_email3[i]<<endl;
 					cout<<"Password :"<<social_password3[i]<<endl;
				 }
			    break;
			case 4:
 				{
 					cout<<endl<<i+1<<") Threads::"<<endl;
 					cout<<"Username :"<<social_username3[i]<<endl;
 					cout<<"Email :"<<social_email3[i]<<endl;
 					cout<<"Password :"<<social_password3[i]<<endl;
				 }
			    break;		
 			
		 }
		 	
	 }
	 break;
	  case 3: 
	     string acc;
	      cout<<"\nEnter the account username to delete : ";
	      cin>>acc;
	      for(int i=0;i<5;i++)
	      {
	      if(acc==social_username3[i])
	      {
	      		social_username3[i]="No Account";
            	social_password3[i]=" ";
	            social_email3[i]=" ";
	      	cout<<"\nYOUR ONE ACCOUNT HAS BEEN DELETED :";
		  }
	  }
	  break;
	    
}
}while(choice<4);
}

 class shared

 {



  public:

  int b;

  virtual void shared_fun()=0;

  shared()

  {

 b=0;

  }

 };

class features:public App,public shared



{



int op;







public:



   friend void rate_us(App,features);



  void shared_fun()

  {



  }



};







void rate_us(App x,features y)
{
int r;
    cout<<"\n\t\t5\t\t4\t\t\t3\t\t\t2\t\t\t1";
    cout<<"\n \tExcellent\t\tVeryGood\t\tGood\t\tSatisfactory\t\tNotgood";
cout<<"\nEnter your choice : ";
cin>> r;
switch(r)
{
case 1:
cout<<"\n\t\tWe are happy for your feedback : ";
break;
case 2:
cout<<"\n\t\tWe are happy for your feedback : ";
break;
case 3:
cout<<"\n\t\tWe will try in more better way : ";
break;
case 4:
cout<<"\n\t\tWe will try in more better way : ";
break;

case 5:
cout<<"\n\t\tWe will try in more better way : ";
break;
default :
break;
}

}


int main()
{
    shared *ptrs;
App a;

features f;

int ch,b;

cout<<"\n\n\t\t*";

cout<<"\n\n\n\t\t\t\t\t\tWelcome To ACCOUNT HANDLER";

cout<<"\n\n\n\t\t*";

cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tTo know Creators (enter 1 else 2) : ";
    cin>>ch;

    if(ch==1)
{
  a.introduce();
}


cout<<"\n\n\n\t\t\t\t\tClick 1 to continue : ";



cin>>ch;



int c;

if(ch==1)
{
do{
cout<<"\n\t\t1)CREATE THE ACCOUNT:\n\t\t2)Login\n\t\t3)Rate us!!\n\t\t4)EXIT!";
cout<<"\n\n\tEnter your choice :";
cin>>c;

switch(c)
{
int ag;

case 1:

                cin >> a;

          ag =a.create_account();
          if(ag<=15)
          {
            cout<<"\nUNABLE TO CREATE ACCOUNT !";
            break;
         }

break;

case 2:
            a.login();

break;
case 3:
	ptrs=&f;
          ptrs->shared_fun();
          cout<<"\nPLEASE RATE OUR APP :";
                rate_us(a,f);
    break;
case 4:
	return 0;
default:
cout<<"\nEnter valid choice!!"<<endl;
break;

}
}while(ch<4);
}
  return 0;

}