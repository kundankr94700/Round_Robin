#include <iostream>
#include <windows.h>
#include <conio.h>


using namespace std;

int main()
{
    int i;
    char z;
      system("color 47");
	  system("cls");
	  char pass[5],pass1[5]={'h','e','l','l','o'}, id[20],id1[20]={'k','u','n','d','a','n'};
for(i=0; i<120; i++)
    { 	  Sleep(2);
        cout<<"\xdb";
            }
	  cout<<"\n";
for(i=0; i<120; i++)
    { 	  Sleep(2);
        cout<<"\xdb";
            }
	  cout<<"\n";
for(i=0; i<120; i++)
    { 	  Sleep(2);
        cout<<"\xdb";
            }
	  cout<<"\n";
	  abc:
  do{
	cout<<"\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout<<"\n\t\t\t\t\t            Welcome To The Project         \n   ";
	cout<<"\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout<<"\n\t\t\t\t\t\t    Round Robin Application      \n   ";
	cout<<"\t\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout<<"\n\t\t\t\t         Enter Id:";
	cin>>id;
	cout<<"\t\t\t\t   Enter Password:";

	i=0;
while(i<5)
{       pass[i]=getch(); cout<<"*"; i++;}
int v=0,q=0;
for(i=0;i<5;i++)
{ if(pass[i]==pass1[i])
{v++;}}
for(i=0;i<6;i++)
{ if(id[i]==id1[i])
{q++;}}

if(v==5 && q==6)
{      cout<<"\n";
       cout << "\n\t\t\t\t\t   ++++++++++   Access Granted   +++++++++++++ :";
       cout<<"\n\t\t\t\t************   Successfully Logined ****************";
       cout<<"\n";
       cout<<"\n \t\t\t\t Loading : ";
for(i=0; i<50; i++)
{      cout<<"\xdb";
       Sleep(50);
         }
goto abcd  ;}
else
{
     system("color 17");
for(i=0; i<120; i++)
{      cout<<"\xdb";}
       cout<<"\n";

       cout << "\n\t\t\t\tAccess aborted...\n";
       cout<<"\n\t\t\t\t Wrong Password Or User Id \n";
       cout<<"\n\t\t\t\t Press y To Try Again and n To Exit \n ";
       cin>>z;
       cout<<endl;
       system("cls");}
}while(z!='n');
       exit(1);
{
     abcd:
system("color 17");
system("cls");

       cout<<"\n";
for(i=0; i<120; i++)
{     cout<<"\xdb";
Sleep(2);
    }
      cout<<"\n\t\t\t\t\t\t            Welcome               ";
      cout<<"\n\t\t\t\t\t  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n   ";
      cout<<"\n\t\t\t\t\t\t       Round Robin Application    \n   ";
      cout<<"\n\t\t\t\t\t  ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n   ";

for(i=0; i<110; i++)
{     cout<<"\xdb";

Sleep(10);
 }
      cout<<"\n";
      cout<<"n\t\t\t\t\t\t+++++++++ Presented By +++++++ \n   ";

	cout<<"\n";
      cout<<"\n\t\t\t\t\t******++++++ 1:Kundan Kumar  ++++++*******   \n   ";

      cout<<"\n";
      cout<<"\n\t\t\t\t\t******++++++ 2:Manish Kumar  ++++++******* \n   ";

	cout<<"\n";
      cout<<"\n\t\t\t\t\t******++++++ 3:Neeraj Kumar  ++++++******* \n   ";

	cout<<"\n";
      cout<<"\n\t\t\t\t\t******++++++ 4:Md Imam       ++++++******* \n   ";

for(i=0; i<110; i++)
{     cout<<"\xdb";
 Sleep(10);}
      cout<<"\n\tLETS BEGIN THE PROGRAM:";
for(i=0; i<10; i++)
{     cout<<".";
      Sleep(500);
      }
      cout<<"\n";
for(i=0; i<120; i++)
{     cout<<"\xdb";
Sleep(2);
}



}
system("cls");
int ch1;

{

    int n;
    for(i=0; i<50; i++)
    {     cout<<"\t\t\xdb";
            Sleep(2);
            }
            cout<<"\n";
    cout<<"Enter The total Number Of Process :";
        cin>>n;
    int i,tq,*Arr,*Burst,t,rbt[n],tat[n],wait[n],tw,ttat,rat[n],ct[n],j;
tw=0;
ttat=0;


        cout<<"\n";
        cout<<"Enter Time Quantum : ";
        cin>>tq;
        cout<<"\n";



xyz:
    system("color 67");
system("cls");

Arr=new int[n];
Burst=new int[n];


    for(i=0; i<120; i++)
    {     cout<<"\xdb";
            Sleep(2);
            }
            cout<<"\n";

        cout<<"\t\t\t\t\tEnter 1 If Arrival Time of All The Process Is Same \n";
        cout<<"\t\t\t\t\tEnter 2 If Arrival Time of All The Process are different \n";
        cout<<"\t\t\t\t\tEnter 3 To Exit \n";
        cout<<"\t\t\t\t\tEnter Choice \n";
        cin>>ch1;
    for(i=0; i<120; i++)
    {     cout<<"\xdb";
            Sleep(2);
            }
            cout<<"\n";

        switch(ch1)
        {
        case 1:
            system("color 67");
system("cls");
for(i=0; i<120; i++)
    {     cout<<"\xdb";
            Sleep(2);
            }
            cout<<"\n";

             cout<<"Enter Burst TImes :\n";
    cout<<"\n";
        for(i=0;i<n;i++)
        {
            cout<<"Enter Burst Time of Process "<<i+1<<" : ";
            cin>>Burst[i];
        }
        for(i=0; i<120; i++)
    {     cout<<"\xdb";
            Sleep(10);
            }
            cout<<"\n";
            t=0;

for (int i = 0 ; i < n ; i++)
        rbt[i] =  Burst[i];

    t = 0;

for( ; ; )
    {
        int e = 1;

        for (int i = 0 ; i < n; i++)
        {
            if (rbt[i] > 0)
            {
                e = 0;
                if (rbt[i] > tq)
                {
                     t += tq;

                    rbt[i] -= tq;
                }
                else
                {
                    t = t + rbt[i];
                    wait[i] = t - Burst[i];
                    rbt[i] = 0;
                }
            }
        }
if (e == 1)
          break;
    }

    for (int i = 0; i < n ; i++)
        tat[i] = Burst[i] + wait[i];
        cout << "Process "<< " Burst time "<<" Complete Time "<< " Turn around time " << " Waiting time \n"<<endl;


    for (int i=0; i<n; i++)
    {
        tw = tw + wait[i];
        ttat = ttat + tat[i];
        cout << " " << i+1 << "\t\t" << Burst[i] <<"\t "<< tat[i]-2<<"\t\t"
             << tat[i]-2 <<"\t\t " << wait[i] <<endl;
    }
cout << "\nAverage turn around time = "<< (float)ttat / (float)n<<endl;
    cout << "Average waiting time = "<< (float)tw / (float)n<<endl;
      int ch2;
  cout<<"Enter 1 for menu and 2 to home\n";
  cin>> ch2;
  if (ch2==1)
  {
      goto xyz;
  }

else if (ch2==2)
{
    goto abc;
}
else
{
    break;
}

        case 2:
            system("color 87");
system("cls");
for(i=0; i<120; i++)
    {     cout<<"\xdb";
            Sleep(2);
            }
            cout<<"\n";

             cout<<"Enter Arrival TImes :\n";
    cout<<"\n";
        for(i=0;i<n;i++)
        {
            cout<<"Enter Arrival Time of Process "<<i+1<<" : ";
            cin>>Arr[i];
        }
for(i=0; i<120; i++)
    {     cout<<"\xdb";
            Sleep(2);
            }
            cout<<"\n";
cout<<"Enter Burst TImes :\n";
    cout<<"\n";
        for(i=0;i<n;i++)
        {
            cout<<"Enter Burst Time of Process "<<i+1<<" : ";
            cin>>Burst[i];
        }
for(i=0; i<120; i++)
    {     cout<<"\xdb";
            Sleep(2);
            }
            cout<<"\n";

system("color 47");
system("cls");

        for (i = 0; i < n; i++) {
            rbt[i] = Burst[i];
            rat[i] = Arr[i];
        }

        t = 0;

        for(;;)

            {
         int  g = 1;
            for ( i = 0; i < n; i++) {

                if (rat[i] <= t) {
                    if (rat[i] <= tq) {
                        if (rbt[i] > 0) {
                            g = 0;
                            if (rbt[i] > tq)
                                {
                                t = t + tq;
                                rbt[i] = rbt[i] - tq;
                                rat[i] = rat[i] + tq;

                            }
                            else
                            {
                                t = t + rbt[i];
                                ct[i] = t - Arr[i];
                                wait[i] = t - Burst[i] - Arr[i];
                                rbt[i] = 0;
                            }
                        }
                    }
                    else if (rat[i] > tq)
                        {
                        for ( j = 0; j < n; j++)

                    {      if (rat[j] < rat[i])
                        {
                                if (rbt[j] > 0)
                                 {
                                    g = 0;

                                    if (rbt[j] > tq)
                                        {
                                            t = t + tq;
                                            rbt[j] = rbt[j] - tq;
                                            rat[j] = rat[j] + tq;

                                    }
                                    else {
                                        t = t + rbt[j];
                                        ct[j] = t - Arr[j];
                                        wait[j] = t - Burst[j] - Arr[j];
                                        rbt[j] = 0;

                                    }
                                }
                            }
                        }

                        if (rbt[i] > 0)
                            {
                            g = 0;

                            if (rbt[i] > tq) {
                                t = t + tq;
                                rbt[i] = rbt[i] - tq;
                                rat[i] = rat[i] + tq;

                            }
                            else
                                {
                                t = t + rbt[i];
                                ct[i] = t - Arr[i];
                                wait[i] = t - Burst[i] - Arr[i];
                                rbt[i] = 0;

                            }
                        }
                    }
                }

                else if (rat[i] > t)
                    {
                    t++;
                    i--;
                }
            }

            if (g==1)
                {
                break;
            }
        }
tw=0;
ttat=0;
        cout<<"Process    Arr time    Burst TIme      Complete time       turnaround time       waiting time"<<endl;
        for ( i = 0; i < n; i++)
            {
            cout << " " << i+1 << "\t\t"<<Arr[i]<<"\t\t" << Burst[i] <<"\t\t "<< ct[i]+Arr[i]<<"\t\t" << ct[i] <<"\t\t " << wait[i] <<endl;

            tw = tw + wait[i];
            ttat= ttat + ct[i];
        }

        cout<<"Average waiting time is" <<(float)tw /n;
       cout<<"Average compilation  time is "<<(float)tw / n<<endl<<endl;

  cout<<"Enter 1 for menu and 2 to home\n";
  cin>> ch2;
  if (ch2==1)
  {
      goto xyz;
  }

else if (ch2==2)
{
    goto abc;
}
else
{
    break;
}
        case 3:
            exit(1);
        default:
            cout<<"Wrong Choice ";
            goto xyz;
        }
    for(i=0; i<120; i++)
    {     cout<<"\xdb";
            Sleep(2);
            }
            cout<<"\n";


    }

    return 0;
    }
