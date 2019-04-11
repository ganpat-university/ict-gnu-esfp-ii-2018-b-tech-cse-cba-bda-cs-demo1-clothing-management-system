#include<iostream>
#include<cstring>
using namespace std;
class cloth_mgmt
{
	public :
		int cloth_id[10],cloth_price[10],choice1,choice2,a,member,i;
		string cloth_type[10],cloth_description[10],cloth_category[10],cloth_stock_avaibility[10],cloth_gender_type[10];
		float cloth_sales_percentage_margin[10];
		void get_data()
		{
			for(int i=0;i<2;i++)
			{
				cout << "Enter cloth ID : ";
				cin >> cloth_id[i];
					
				
				cout << "Enter cloth type (cotton/silk): ";
				cin >> cloth_type[i];
				
				cout << "Enter description \nEnter available_in_pieces for not_available_in_pieces : ";
				cin >> cloth_description[i];
			
				cout << "Enter Category of cloth (shirt/saree): ";
				cin >> cloth_category[i];

				cout << "Enter cloth price : ";
				cin >> cloth_price[i];

				cout << "Enter cloth stock avaibility : ";
				cin >> cloth_stock_avaibility[i];

				cout << "Enter Sales Percentage Margin : ";
				cin >> cloth_sales_percentage_margin[i];

				cout << "Enter Cloth gender Type Male or Female : ";
				cin >> cloth_gender_type[i];/*
				if(choice2 == 1)
				{
					cloth_gender_type[i]= "Male";
				}
				else if(choice2 == 2)
				{
					cloth_gender_type[i]= "Female";
				}
				else
				{
					cout << "Wrong Input\n";
				}*/
			}
		}
		void show_data()
		{
			for(int i=0;i<2;i++)
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
		void display()
		{
			cout << "Enter The Member Number to Perform The Task : ";
			cin >> member;
			if(member == 1)
			{
				
				
				for(int i=0;i<2;i++)
				{
					if(cloth_type[i] == "cotton")
					{
						cout << "Cloth ID : " << cloth_id[i] << "\n";
						cout << "Cloth Type : " << cloth_type[i] << "\n";
						cout << "Cloth Description : " << cloth_description[i] << "\n";
						cout << "Cloth Category : " << cloth_category[i] << "\n";
						cout << "Cloth Price : " << cloth_price[i] << "\n";
						cout << "Cloth_Stock_Avaibility : " << cloth_stock_avaibility[i] << "\n";
						cout << "Cloth Gender Type : " << cloth_gender_type[i] << "\n";
						cout << "Sales Percentage Margin : " <<cloth_sales_percentage_margin[i] << "\n\n";
					}
				}
			}
			else if(member ==2)
			{
				for(int i=0;i<2;i++)
				{
					if(cloth_description[i] == "available_in_pieces")
					{
						cout << "Cloth ID : " << cloth_id[i] << "\n";
						cout << "Cloth Type : " << cloth_type[i] << "\n";
						cout << "Cloth Description : " << cloth_description[i] << "\n";
						cout << "Cloth Category : " << cloth_category[i] << "\n";
						cout << "Cloth Price : " << cloth_price[i] << "\n";
						cout << "Cloth_Stock_Avaibility : " << cloth_stock_avaibility[i] << "\n";
						cout << "Cloth Gender Type : " << cloth_gender_type[i] << "\n";
						cout << "Sales Percentage Margin : " << cloth_sales_percentage_margin[i] << "\n";	
					}
				}
			}
			else if(member ==3)
			{
				for(int i=0;i<2;i++)
				{
					if(cloth_price[i] <= 500)
					{
						cout << "Cloth ID : " << cloth_id[i] << "\n";
						cout << "Cloth Type : " << cloth_type[i] << "\n";
						cout << "Cloth Description : " << cloth_description[i] << "\n";
						cout << "Cloth Category : " << cloth_category[i] << "\n";
						cout << "Cloth Price : " << cloth_price[i] << "\n";
						cout << "Cloth_Stock_Avaibility : " << cloth_stock_avaibility[i] << "\n";
						cout << "Cloth Gender Type : " << cloth_gender_type[i] << "\n";
						cout << "Sales Percentage Margin : " << cloth_sales_percentage_margin[i] << "\n";
					}
				}
			}
			
			
		}
		
};
int main()
{
	cloth_mgmt ob;
	ob.get_data();
	ob.show_data();
	ob.display();

	return 0;
} 
