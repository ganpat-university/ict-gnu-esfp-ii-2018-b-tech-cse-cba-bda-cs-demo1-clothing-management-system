#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
//cloth_mgmt
class cloth_mgmt
{
	public :
		int choice1,choice2,a,member,i,price;
		string cloth_id,cloth_price,cloth_type,cloth_description,cloth_category,cloth_stock_avaibility,cloth_gender_type,
		cloth_sales_percentage_margin, temp;

		//void get_data() used to get data from the user.
		void get_data()
		{
		a:		cout << "Enter cloth ID : ";//cloth_id
				cin >> cloth_id;
				temp=validatenum(cloth_id);
				if(temp=="a"){goto a;}
				
		b:		cout << "Enter cloth type(cotton/silk) : ";//cloth_type
				cin >> cloth_type;
				temp=validatealpha(cloth_type);
				if(temp=="a"){goto b;}
			
				cout << "Enter description \nEnter available_in_pieces or not_available_in_pieces ( available_in_pieces): ";
				cin >> cloth_description;
				

		c:		cout << "Enter Category of cloth(shirt/saree) : ";//cloth_category
				cin >> cloth_category;
				temp=validatealpha(cloth_category);
				if(temp=="a"){goto c;}

		d:		cout << "Enter cloth price : ";//cloth_price
				cin >> cloth_price;
				temp=validatenum(cloth_price);x
				if(temp=="a"){goto d;}
				

		e:		cout << "Enter cloth stock avaibility : ";//cloth_stock
				cin >> cloth_stock_avaibility;
				temp=validatenum(cloth_stock_avaibility);
				if(temp=="a"){goto e;}

		f:		cout << "Enter Sales Percentage Margin : ";//sales percentage margin
				cin >> cloth_sales_percentage_margin;
				temp=validatenum(cloth_sales_percentage_margin);
				if(temp=="a"){goto f;}

		g:		cout << "Enter Cloth gender Type \n (1)Press 1 for Male \n (2)Press 2 for female : ";//cloth gender
				cin >> choice2;
				if(choice2==1 || choice2==2){}else{cout<<"wrong input :";goto g;}

				if(choice2 == 1)
				{
					cloth_gender_type= "Male";
				}
				else if(choice2 == 2)
				{
					cloth_gender_type= "Female";
				}
				else
				{
					cout << "Wrong Input\n";
				}
			
		}
		string validatenum(string sa)
		{
			int i,k;
			k=sa.length();
			for(i=0;i<k;i++)
			{
				if(sa[i] >= 65 && sa[i] <= 122 || sa[i]=='*' || sa[i]=='?'|| sa[i]=='!'|| sa[i]=='$'|| sa[i]=='@'|| 					sa[i]=='%')
				{
					cout<<"Wrong input:";
					return "a";
					break;
				}
			return "s";
			}
		}
		string validatealpha(string sa)
		{
			int i,k;
			k=sa.size();
			for(i=0;i<k;i++)
			{
				if(sa[i] >= 48 && sa[i] <= 57 || sa[i]=='*' || sa[i]=='?'|| sa[i]=='!' || sa[i]=='$'|| sa[i]=='@'|| 					sa[i]=='%'|| sa[i]=='&')
				{
					cout<<"Wrong input:";
					return "a";
					break;
				}
			}
			return "s";
		}
		//void show_data()will show the data.
		void show_data()
		{
				cout << "Cloth ID : " << cloth_id << "\n";
				cout << "Cloth Type : " << cloth_type << "\n";
				cout << "Cloth Description : " << cloth_description << "\n";
				cout << "Cloth Category : " << cloth_category << "\n";
				cout << "Cloth Price : " << cloth_price << "\n";
				cout << "Cloth_Stock_Avaibility : " << cloth_stock_avaibility << "\n";
				cout << "Cloth Gender Type : " << cloth_gender_type << "\n";
				cout << "Sales Percentage Margin : " << cloth_sales_percentage_margin << "\n\n";
			
		}
		//void display() will display the data.
		void display(int member)
		{
			if(member == 1)
			{
					/*if(cloth_type == "cotton")
					{
						ofstream ob("project1.txt",ios::out|ios::app);
						ob<<cloth_id<<"\t";
						ob<<cloth_type<<"\t";
						ob<<cloth_category<<"\t";
						ob<<cloth_price<<"\t";
						ob<<cloth_stock_avaibility<<endl;
						 cout.width(10);
						 cout<<left<<cloth_id ;
						 cout.width(10);
						 cout<<left<<cloth_type;
						 cout.width(10);
						 cout<< left<<cloth_category;
						 cout.width(10);
						 cout<<left<< cloth_price;
						 cout.width(15);
						 cout<< left<<cloth_stock_avaibility;
						 cout.width(10);
						cout<< left<<cloth_gender_type << "\n";
						ob.close();
					}
			
				
					if(cloth_description == "a")
					{
						cout.width(10);
						 cout<< cloth_id ;
						 cout.width(10);
						 cout<< cloth_type;
						 cout.width(10);
						 cout<< cloth_category;
						 cout.width(10);
						 cout<< cloth_price;
						 cout.width(15);
						 cout<< cloth_stock_avaibility;
						 cout.width(10);
						cout<< cloth_gender_type << "\n";	
					}
				
					if(cloth_price <= 500)
					{
						cout.width(10);
						 cout<< cloth_id ;
						 cout.width(10);
						 cout<< cloth_type;
						 cout.width(10);
						 cout<< cloth_category;
						 cout.width(10);
						 cout<< cloth_price;
						 cout.width(15);
						 cout<< cloth_stock_avaibility;
						 cout.width(10);
						cout<< cloth_gender_type << "\n";
					
					}*/
			}
			/*else if(member == 2)
			{
				
				for(int i=0;i<5;i++)
				{
						if(cloth_category[i] == "trouser")
						{	
						cout << "Cloth ID : " << cloth_id[i] << "\n";
						cout << "Cloth Type : " << cloth_type[i] << "\n";
						cout << "Cloth Description : " << cloth_description[i] << "\n";
						cout << "Cloth Category : " << cloth_category[i] << "\n";
						cout << "Cloth Price : " << cloth_price[i] << "\n";
						cout << "Cloth_Stock_Avaibility : " << cloth_stock_avaibility[i] << "\n";
						cout << "Cloth Gender Type : " << cloth_gender_type[i] << "\n";
						cout << "Sales Percentage Margin : " << cloth_sales_percentage_margin[i] << "\n	;
						}
				}
			}
				for(int i=0;i<5;i++)
				{
					if(cloth_sales_percentage_margin[i]>10% && cloth_sales_percentage_margin[i]<25%)
					{
						cout << "Cloth ID : " << cloth_id[i] << "\n";
						cout << "Cloth Type : " << cloth_type[i] << "\n";
						cout << "Cloth Description : " << cloth_description[i] << "\n";
						cout << "Cloth Category : " << cloth_category[i] << "\n";
						cout << "Cloth Price : " << cloth_price[i] << "\n";
						cout << "Cloth_Stock_Avaibility : " << cloth_stock_avaibility[i] << "\n";
						cout << "Cloth Gender Type : " << cloth_gender_type[i] << "\n";
						cout << "Sales Percentage Margin : " << cloth_sales_percentage_margin[i] << "\n\n";
				
					}
				}
			}
				for(int i=0;i<5;i++)
				{
					if(compu_product_damage_status[i] == "Repair")
					{
						cout << "\n\n ============ Database According to Damage Type Repair ============\n";
						cout << "\nComputer ID : " << compu_id[i] << "\n";
						cout << "Computer Product : " << compu_product[i] << "\n";
						cout << "Product Damage Status : " << compu_product_damage_status[i] << "\n";
						cout << "Date Of Product Brought : " << compu_date_brought[i] << "\n";
						cout << "Month Of Product Brought : " << compu_month_brought[i] << "\n";
						cout << "Expected Date Of Delivery : " << compu_date_delivery_back[i] << "\n";
						cout << "Computer Product Type : " << compu_type[i] << "\n\n\n";
					}
				}	
			}*/
			else if(member == 3)
			{
						
					if(cloth_type == "silk" && cloth_category == "saree")
					{
						ofstream ob("project1.txt",ios::out|ios::app);
						ob<<cloth_id<<"\t";
						ob<<cloth_type<<"\t";
						ob<<cloth_category<<"\t";
						ob<<cloth_price<<"\t";
						ob<<cloth_stock_avaibility<<endl;
						 cout.width(10);
						 cout<<left<<cloth_id ;
						 cout.width(10);
						 cout<<left<<cloth_type;
						 cout.width(10);
						 cout<< left<<cloth_category;
						 cout.width(10);
						 cout<<left<< cloth_price;
						 cout.width(15);
						 cout<< left<<cloth_stock_avaibility;
						 cout.width(10);
						cout<< left<<cloth_gender_type << "\n";
						ob.close();
					}
				
				
					if(cloth_category == "shirt")	
					{	
						cout.width(10);
						 cout<< cloth_id ;
						 cout.width(10);
						 cout<< cloth_type;
						 cout.width(10);
						 cout<< cloth_category;
						 cout.width(10);
						 cout<< cloth_price;
						 cout.width(15);
						 cout<< cloth_stock_avaibility;
						 cout.width(10);
						cout<< cloth_gender_type << "\n";
					}
			}
			else
			{
				cout << "Wrong Input\n\n";
			}
		}

		
};
int main()
{	int i,member;
	cloth_mgmt ob[10];
	for(i=0;i<2;i++)
	{
		ob[i].get_data();
	}
	
	cout << "Enter The Member Number to Perform The Task : ";
	cin >> member;
	cout.width(10);
	cout <<left<<"ID";
	cout.width(10);cout << left<<"Type";cout.width(10);cout << left<<"Category";cout.width(10);cout <<left<< "Price";cout.width(15);cout << 	left<<"Avaibility";cout.width(10);cout <<left<< "Gender"<<endl;
	for(i=0;i<2;i++)
	{
		ob[i].display(member);
	}
	return 0;
}