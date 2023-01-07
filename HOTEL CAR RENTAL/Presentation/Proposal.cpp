#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;


char citizenship2[100],name[100];  
char vehicle1[100],vehiclename[100];  //caroption
float motorprice;  //harga bahagian motor
char typecarandmotor1[100],driver2[100];    //driveroption
float costdriver,totaldriver,totaldiscount,totalcostoverall,discount;   //driveroption and price semua tentang harga  //citizen
char  nodriver;  //info
char idcard[100],license[100];
int vehicleprice,days,totalprice,driver,citizenship,vehicle,typecar,carandmotor,typemotor;
int manyperson; //bookinfuture
char namebook[100],phonenumber[100],date[100]; //userinformation
float totalprofit=0,amount=0;

//main
void intro();
double info(char[100],char[100],char[100]);
void citizen(int);

//car
void vehicleoption();
void carAndMotorType();
void driveroption();
void allreceipt();

//FIXED
void vehicletype();

//baruloop
void userinformation(char[100],char[100],char[100]);
void main()
{
	char countt;
	do
	{
          intro();
          vehicletype();  
	      intro();
		  cout<<"\n\t   PLEASE CHOOSE STATUS :";
          cout<<"\n\t   [1] CITIZEN";
		  cout<<"\n\t   [2] FOREIGNER";
		  cout<<endl;
		  cout<<"\n\t   -->";
          cin>>citizenship;
          citizen(citizenship);
		  intro();
		  info(name,idcard,license);
		  intro();
		  cout<<"\n\t  Insert Number of days to rent:";
          cin>>days;
		  intro();
		  vehicleoption();
		  intro();
		  carAndMotorType();
		  intro();
		  driveroption();
		  intro();
          userinformation(namebook,phonenumber,date);
		  intro();
		  allreceipt();
		  cout<<"\n\tDo you want to continue?[Y-yes/N-no]";
		  cout<<"\n\t-->";
		  cin>> countt;
		  amount=amount+1;
	}while(countt=='Y'||countt=='y');
    
   intro();
   cout<<"\n\t **********************************************";
   cout<<"\n\t |               SYSTEM  SUMMARY              |";
   cout<<"\n\t  TOTAL PROFIT       :RM"<<totalprofit;
   cout<< fixed << setprecision(0);
   cout<<"\n\t  TOTAL CUSTOMER     :"<<amount;
   cout<<"\n\t **********************************************";
   system("pause");

}
void vehicletype()
  {

  cout<<"\n\tPLEASE CHOOSE WHAT TYPE OF VEHICLE TO RENT :";
  cout<<"\n\t[1] CAR\n\t[2] MOTORCYCLE\n\n\t -->";
  cin>>vehicle;
  }
void intro()
{
  system("cls");
  cout<<"\n\t ----------------------------------------------";
  cout<<"\n\t |                   WELCOME TO                |";
  cout<<"\n\t |       VEHICLE RENTAL AT HOTEL SEGAMAT       |";
  cout<<"\n\t ----------------------------------------------";
  cout<<endl<<endl;

             
}
double info(char*name, char* idcard, char* license)
{
  
  cout<<"\n\t  NAME :";
   cin.ignore();
  cin.getline(name,100);
  cout<<"\n\t  ID CARD:";
  cin>>idcard;
  cout<<"\n\t  LICENSE NUMBER:";
  cin>>license;

  return 0;
}
void citizen(int citizenship)
{
	bool error = false;
  
	while(!error)
	{

    if (citizenship='1')
	 {
		strcpy_s(citizenship2,"CITIZEN");
		  error = true;
		  discount=0.5;
     }
    else if (citizenship='2')
     {
	   strcpy_s(citizenship2,"FOREIGNER");
	   error = true;
	   discount=0;
     }
    else 
     {
	   cout<<"\nerror";
     }
	}
  
}

void vehicleoption()
{
	if (vehicle==1)
	{
		 strcpy_s(vehicle1,"CAR");
		
	cout<<"\n\t   PLEASE CHOOSE TYPE OF CAR :";
    cout<<"\n\t   [1] PERSONAL";
    cout<<"\n\t   [2] FAMILY";
	cout<<"\n\t   [3] LUXURY";
    cout<<endl;

	cout<<"\n\t   -->";
    cin>>typecar;
	}

	else if (vehicle==2)
	{
		 strcpy_s(vehicle1,"MOTORCYCLE");
	cout<<"\n\t   PLEASE CHOOSE TYPE OF MOTORCYCLE :";
    cout<<"\n\t   [1] SCOOTER";
    cout<<"\n\t   [2] SUPERBIKE";
	cout<<"\n\t   [3] SCRAMBLER";
    cout<<endl;

	cout<<"\n\t   -->";
    cin>>typemotor;
	}
	
	
}
void carAndMotorType()
{ 
	if(vehicle==1)
{
    if (typecar==1)
 { 
	 strcpy_s(typecarandmotor1,"PERSONAL");
	
	cout<<"\n\t   PLEASE CHOOSE CAR :";
    cout<<"\n\t   [1] WAJA(RM 50 PER DAY)";
    cout<<"\n\t   [2] WIRA(RM 40 PER DAY)";
    cout<<endl;
    cout<<"\n\t   -->";
	cin>>carandmotor;

	      if (carandmotor==1)
	     {
		    strcpy_s(vehiclename,"WAJA");
		    vehicleprice=50;
	     }
	      else if(carandmotor='WIRA')
	     {
		    strcpy_s(vehiclename,"WIRA");
		    vehicleprice=40;
	     }
	}
     else if (typecar==2)
  { 
	 strcpy_s(typecarandmotor1,"FAMILY");
	cout<<"\n\t   PLEASE CHOOSE CAR :";
    cout<<"\n\t   [1] EXORA(RM 120 PER DAY)";
    cout<<"\n\t   [2] ALPHARD(RM 140 PER DAY)";
    cout<<endl;
    cout<<"\n\t   -->";
	cin>>carandmotor;

	      if (carandmotor==1)
	    {
		   strcpy_s(vehiclename,"EXORA");
		   vehicleprice=120;
	    }
	     else if(carandmotor==2)
	    {
		   strcpy_s(vehiclename,"ALPHARD");
		   vehicleprice=140;
	    }
		  
  }

   else if (typecar==3)
  { 
	 strcpy_s(typecarandmotor1,"LUXURY");
	cout<<"\n\t   PLEASE CHOOSE CAR :";
    cout<<"\n\t   [1] BMW(RM 200 PER DAY)";
    cout<<"\n\t   [2] MERCEDES(RM 300 PER DAY)";
    cout<<endl;
    cout<<"\n\t   -->";
	cin>>carandmotor;

	     if (carandmotor==1)
	   {
		  strcpy_s(vehiclename,"BMW");
		  vehicleprice=200;
	   }
	     else if(carandmotor==2)
	   {
		  strcpy_s(vehiclename,"MERCEDES");
		  vehicleprice=300;
	   }
     }
}
else if(vehicle==2)
{
     if (typemotor==1)
    { 
	
	cout<<"\n\t   PLEASE CHOOSE SCOOTER :";
    cout<<"\n\t   [1] HONDA(RM 30 PER DAY)";
    cout<<"\n\t   [2] MODENAS(RM 40 PER DAY)";
    cout<<endl;
    cout<<"\n\t   -->";
	cin>>carandmotor;

	if (carandmotor==1)
	{
		strcpy_s(vehiclename,"HONDA");
		vehicleprice=30;
	}
	else if(carandmotor==2)
	{
		strcpy_s(vehiclename,"MODENAS");
		vehicleprice=40;
	}
  }
           else if (typemotor==2)
 { 
	cout<<"\n\t   PLEASE CHOOSE SUPERBIKE :";
    cout<<"\n\t   [1] DUCATI(RM 200 PER DAY)";
    cout<<"\n\t   [2] KAWASAKI(RM 150 PER DAY)";
    cout<<endl;
    cout<<"\n\t   -->";
	cin>>carandmotor;

	if (carandmotor==1)
	{
		strcpy_s(vehiclename,"DUCATI");
		vehicleprice=200;
	}
	     else if(carandmotor==2)
	{
		strcpy_s(vehiclename,"KAWASAKI");
		vehicleprice=150;
	}
  }

           else if (typemotor==3)
 { 
	cout<<"\n\t   PLEASE CHOOSE SCRAMBLER :";
    cout<<"\n\t   [1] TRIUMPH(RM 90 PER DAY)";
    cout<<"\n\t   [2] YAMAHA(RM 80 PER DAY)";
    cout<<endl;
    cout<<"\n\t   -->";
	cin>>carandmotor;

	if (carandmotor==1)
	{
		strcpy_s(vehiclename,"TRIUMPH");
		vehicleprice=90;
	}
	else if(carandmotor==2)
	{
		strcpy_s(vehiclename,"YAMAHA");
		vehicleprice=80;
	}
  }
  }
}
void driveroption()
{
	if (strcmp(vehicle1,"CAR")==0)
	{
	cout<<"\n\t   DO YOU WANT A DRIVER:";
	cout<<"\n\t   PRICE DRIVER PER DAY = RM 60";
    cout<<"\n\t   [1] YES";
    cout<<"\n\t   [2] NO";
    cout<<endl;
    cout<<"\n\t   -->";
	cin>>driver;

	if (driver==1)
	   {
		 strcpy_s(driver2,"YES");
		costdriver=60;
		
	   }
	else if(driver==2)
	   {
		   strcpy_s(driver2,"NO");
		costdriver=0;
	   }
	}
	else if (strcmp(vehicle1,"MOTORCYCLE")==0)
	{
	      costdriver=0;
    }

}




void allreceipt()
{
	totalprice=days*vehicleprice;
	totaldriver=days*costdriver;
	totaldiscount=totalprice*discount;
	totalcostoverall=totalprice+totaldriver-totaldiscount;
	totalprofit=totalprofit+totalcostoverall;

	cout<<"\n\t _______________________________________________";
	cout<<"\n\t                 YOUR RECEIPT                   ";
    cout<<"\n\t NAME                 :"<<name;
    cout<<"\n\t ID CARD              :"<<idcard;
	cout<<"\n\t LICENSE NUMBER       :"<<license;
	cout<<"\n\t STATUS               :"<<citizenship2;
	cout<<"\n\t TYPE OF VEHICLE      :"<<vehicle1;
	cout<<"\n\t CATEGORIES OF VEHICLE:"<<typecarandmotor1;
	cout<<"\n\t VEHICLE BRAND        :"<<vehiclename;
	cout<<"\n\t NUMBER OF DAYS RENT  :"<<days;
	cout<<"\n\t NUMBER OF PERSON USE :"<<manyperson<<" PERSON";
	cout<<"\n\t DRIVER OPTION        :"<<driver2;
	cout<< fixed << setprecision(2);
	cout<<"\n\t RENT PRICE           :RM"<<totalprice;
	cout<<"\n\t DRIVER COST          :RM"<<totaldriver;
	cout<<"\n\t DISCOUNT             :RM"<<totaldiscount;
	cout<<"\n\t TOTAL PRICE          :RM"<<totalcostoverall;
	cout<<"\n\t _______________________________________________";

}

void userinformation(char* namebook,char*phonenumber,char* date)
{
	int count=1;
	        cout << "\n\t*******YOUR INFORMATION IS RECORDED FOR SAFETY PURPOSE********";
	        cout << "\n\t**************************************************************";
	        cout << "\n\tENTER HOW MANY PERSON USES THIS VEHICLE:";
			cout << "\n\t-->";
			cin  >> manyperson;
			while (count<=manyperson)
			{
			cout << "\n\t**************************************************************";
			cout << "\n\tEnter name             :";
			cin.ignore();
			cin.getline(namebook,100);
			cout << "\n\tEnter phone number     :";    
			cin >> phonenumber;
			cout << "\n\tENTER ID CARD          :";
			cin >> date;
		    count++;
			}
}













