#include<iostream>
using namespace std;
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total=0;
void enter()
{
		int ch=0;
			cout<<"How many students do u want to enter??"<<endl;
			cin>>ch;
			if(total==0)
			{
			total=ch+total;
			for(int i=0;i<ch;i++)
			{
				cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;
				cout<<"Enter name \n";
				cin>>arr1[i];
				cout<<endl;
				cout<<"Enter Roll no \n";
				cin>>arr2[i];
				cout<<endl;
				cout<<"Enter course \n";
				cin>>arr3[i];
				cout<<endl;
				cout<<"Enter class \n";
				cin>>arr4[i];
				cout<<endl;
				cout<<"Enter contact \n";
				cin>>arr5[i];
				
			}
	    	}
	    	else
	    	{
	    		
	    		for(int i=total;i<ch+total;i++)
			{
				cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;
				cout<<"Enter name ";
				cin>>arr1[i];
				cout<<"Enter Roll no ";
				cin>>arr2[i];
				cout<<"Enter course ";
				cin>>arr3[i];
				cout<<"Enter class ";
				cin>>arr4[i];
				cout<<"Enter contact ";
				cin>>arr5[i];
			}
			total=ch+total;
			}
	
}
void show()
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else{
		for(int i=0;i<total;i++)
	    		{
	    		cout<<"\nData of Student "<<i+1<<endl<<endl;
	    		cout<<"Name "<<arr1[i]<<endl;
	    		cout<<"Roll no "<<arr2[i]<<endl;
	    		cout<<"Course "<<arr3[i]<<endl;
	    		cout<<"Class "<<arr4[i]<<endl;
	    		cout<<"Contact "<<arr5[i]<<endl;
	    	    }
	    	}
}
void search()
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else{
	string rollno;
				cout<<"Enter the roll no of student"<<endl;
				cin>>rollno;
				for(int i=0;i<total;i++)
				{
					if(rollno==arr2[i])
					{
						cout<<"Name "<<arr1[i]<<endl;
	    	        	cout<<"Roll no "<<arr2[i]<<endl;
	    		        cout<<"Course "<<arr3[i]<<endl;
	    		        cout<<"Class "<<arr4[i]<<endl;
	    	        	cout<<"Contact "<<arr5[i]<<endl;
					}
				}
			}
}
void update()
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else{
		string rollno;
				cout<<"Enter the roll no of student which you want to update"<<endl;
				cin>>rollno;
					for(int i=0;i<total;i++)
				{
					if(rollno==arr2[i])
					{
						cout<<"\nPrevious data"<<endl<<endl;
						cout<<"Data of Student "<<i+1<<endl;
						cout<<"Name "<<arr1[i]<<endl;
	    	        	cout<<"Roll no "<<arr2[i]<<endl;
	    		        cout<<"Course "<<arr3[i]<<endl;
	    		        cout<<"Class "<<arr4[i]<<endl;
	    	        	cout<<"Contact "<<arr5[i]<<endl;
	    	        	cout<<"\nEnter new data"<<endl<<endl;
							cout<<"Enter name ";
				            cin>>arr1[i];
				            cout<<"Enter Roll no ";
				            cin>>arr2[i];
			             	cout<<"Enter course ";
				            cin>>arr3[i];
				            cout<<"Enter class ";
				            cin>>arr4[i];
				            cout<<"Enter contact ";
				            cin>>arr5[i];
					}
				}
			}
		}

void deleterecord()
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else{
		int a;
	        	cout<<"Press 1 to delete all record"<<endl;
				cout<<"Press 2 to delete specific record"<<endl;
				cin>>a;
				if(a==1)
				{
					total=0;
					cout<<"All record is deleted..!!"<<endl;
				}
				else if(a==2)
				{
				string rollno;
				cout<<"Enter the roll no of student which you wanted to delete"<<endl;
				cin>>rollno;
				for(int i=0;i<total;i++)
				{
					if(rollno==arr2[i])
					{
						for(int j=i;j<total;j++)
						{
						arr1[j]=arr1[j+1];
						arr2[j]=arr2[j+1];
					    arr3[j]=arr3[j+1];
						arr4[j]=arr4[j+1];
						arr5[j]=arr5[j+1];
				     	}
					total--;
					cout<<"Your required record is deleted"<<endl;
					}
				}
				}
				 
			
			else 
			{
				cout<<"Invalid input";
			}
}
}
void timetable()
{
	int table;
	cout<<"press 1 for Software Engineering Timetable";
	cout<<"Press 2 for Computer Science Time Table";
	cin>>table;
	switch(table)
	{
		case 1:
    cout<<"\t\t\t\t\t|---------------------------------------------------------|\n";
	cout<<"\t\t\t\t\t|                     SE Timetable Fall 2020              |\n";
    cout<<"\t\t\t\t\t|          CAPITAL UNIVERSITY OF SCIENCE AND TECHNOLOGY   |\n";
    cout<<"\t\t\t\t\t|---------------------------------------------------------|\n";
	cout<<"\t\t\t\t\t|Time Slot | MONDAY  |TUESDAY |WEDNESDAY|THURSDAY |FRIDAY |\n";             
	cout<<"\t\t\t\t\t|---------------------------------------------------------|\n";
	cout<<"\t\t\t\t\t| 8:00     |Physics  |  ITP   |English  |   ITP   |Physics|\n";
	cout<<"\t\t\t\t\t| 9:30     |Calculus |   -    |Calculus |    -    |English|\n";
	cout<<"\t\t\t\t\t| 11:00    |   -     |ITP LAB |    -    |    -    |       |\n";
	cout<<"\t\t\t\t\t| 12:30    |   -     |ITP LAB |    -    |    -    |       |\n";
	cout<<"\t\t\t\t\t| 3:30     |   -     |   -    |    -    |PAKSTUDY |       |\n";
	cout<<"\t\t\t\t\t| 5:00     |   -     |PAKSTUDY|    -    |    -    |       |\n";
	cout<<"\t\t\t\t\t|---------------------------------------------------------|\n";
	cout<<"\t\t\t\t\t|          Created and Presented by                       |\n";
	cout<<"\t\t\t\t\t|                   Muhammad Zohaib Khan                  |\n";
	cout<<"\t\t\t\t\t|                       Talha Rehman                      |\n";
	cout<<"\t\t\t\t\t|                    Hani Mustafa Hashmi                  |\n";
	cout<<"\t\t\t\t\t|---------------------------------------------------------|\n";	
	break;
	case 2:
    cout<<"\t\t\t\t\t|---------------------------------------------------------|\n";
	cout<<"\t\t\t\t\t|                     CS Timetable Fall 2020              |\n";
    cout<<"\t\t\t\t\t|          CAPITAL UNIVERSITY OF SCIENCE AND TECHNOLOGY   |\n";
    cout<<"\t\t\t\t\t|---------------------------------------------------------|\n";
	cout<<"\t\t\t\t\t|Time Slot | MONDAY  |TUESDAY |WEDNESDAY|THURSDAY |FRIDAY |\n";            
	cout<<"\t\t\t\t\t|---------------------------------------------------------|\n";
	cout<<"\t\t\t\t\t| 8:00     |Physics  |  ITP   |English  |   ITP   |Physics|\n";
	cout<<"\t\t\t\t\t| 9:30     |Calculus |   -    |Calculus |    -    |English|\n";
	cout<<"\t\t\t\t\t| 11:00    |   -     |ITP LAB |    -    |    -    |       |\n";
	cout<<"\t\t\t\t\t| 12:30    |   -     |ITP LAB |    -    |    -    |       |\n";
	cout<<"\t\t\t\t\t| 3:30     |   -     |   -    |    -    |PAKSTUDY |       |\n";
	cout<<"\t\t\t\t\t| 5:00     |   -     |PAKSTUDY|    -    |    -    |       |\n";
	cout<<"\t\t\t\t\t|---------------------------------------------------------|\n";
	cout<<"\t\t\t\t\t|                  Created and Presented by               |\n";
	cout<<"\t\t\t\t\t|                   Muhammad Zohaib Khan                  |\n";
	cout<<"\t\t\t\t\t|                       Talha Rehman                      |\n";
	cout<<"\t\t\t\t\t|                    Hani Mustafa Hashmi                  |\n";
	cout<<"\t\t\t\t\t|---------------------------------------------------------|\n";
		
	}
}

main()
{
	int value;
	while(true)
	{
	cout<<"\t\t\t\t\t|--------------------------------------------|\n";
	cout<<"\t\t\t\t\t|   WELCOME TO UNIVERSITY MANAGEMENT SYSTEM  |\n";
    cout<<"\t\t\t\t\t|CAPITAL UNIVERSITY OF SCIENCE AND TECHNOLOGY|\n";
    cout<<"\t\t\t\t\t|--------------------------------------------|\n";
	cout<<"\t\t\t\t\t|          Press 1 to Enter data             |"<<endl;
	cout<<"\t\t\t\t\t|          Press 2 to Show data              |"<<endl;
	cout<<"\t\t\t\t\t|          Press 3 to Search data            |"<<endl;
	cout<<"\t\t\t\t\t|          Press 4 to Update data            |"<<endl;
	cout<<"\t\t\t\t\t|          Press 5 to Delete data            |"<<endl;
	cout<<"\t\t\t\t\t|          Press 6 to Print TimeTable        |"<<endl;
	cout<<"\t\t\t\t\t|          Press 7 to Exit                   |"<<endl;
	cout<<"\t\t\t\t\t|--------------------------------------------|\n";
	cout<<"\t\t\t\t\t|          Created and Presented by          |\n";
	cout<<"\t\t\t\t\t|           Muhammad Zohaib Khan             |\n";
	cout<<"\t\t\t\t\t|                Talha Rehman                |\n";
	cout<<"\t\t\t\t\t|            Hani Mustafa Hashmi             |\n";
	cout<<"\t\t\t\t\t|--------------------------------------------|\n";
	cin>>value;
	switch(value)
	{
		case 1:
			enter();
			break;
		case 2:
			show();
			break;
		case 3:
			search();
			break;
		case 4:
			update();
			break;
		case 5:
			deleterecord();
			break;
		case 6:
			timetable();
			break;
		case 7:
			exit(0);
			break;
		default:
			cout<<"Invalid input"<<endl;
			break;
	}
}
}
