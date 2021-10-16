#include<iostream>
#include<cmath>

using namespace std;


void addition()
{
    float a, sum=0,c=0;
    char op_add = 'y';
    cout<<"Enter number for addition ";
    cin>>a;
    sum=a;
    while(op_add =='y')
    {
        cout<<"\n"<<sum<<" + ";
        cin>>c;
        sum+=c;
        cout<<"\nSum = "<<sum;
        cout<<"\nDo you want to continue adding numbers y/n ? ";
        cin>>op_add;
        if(op_add == 'n')
        {
 			exit;
        }
  
    };
}

void subtraction()
{
    float a, minus=0,c=0;
    char op_minus = 'y';
    cout<<"Enter number for subtraction ";
    cin>>a;
    minus=a;
    while(op_minus =='y')
    {
        cout<<"\n"<<minus<<" * ";
        cin>>c;
        minus-=c;
        cout<<"\nMinus = "<<minus;
        cout<<"\nDo you want to continue subtracting numbers y/n ? ";
        cin>>op_minus;
        if(op_minus == 'n')
        {
 			exit;
 		}
    };
}


void division()
{
    float a, div=0,c=0;
    char op_div = 'y';
    cout<<"Enter number for division ";
    cin>>a;
    div=a;
    while(op_div =='y')
    {
        cout<<"\n"<<div<<" / ";
        cin>>c;
        div/=c;
        cout<<"\nDivision = "<<div;
        cout<<"\nDo you want to continue dividing numbers y/n ? ";
        cin>>op_div;
        if(op_div == 'n')
        {
 			exit;
 		}
    };
    
}

void multiplication()
{
    float a, multi=0,c=0;
    char op_multi = 'y';
    cout<<"Enter number for multiplication ";
    cin>>a;
    multi=a;
    while(op_multi =='y')
    {
        cout<<"\n"<<multi<<" * ";
        cin>>c;
        multi*=c;
        cout<<"\nMultiplication = "<<multi;
        cout<<"\nDo you want to continue multiplying numbers y/n ? ";
        cin>>op_multi;
        if(op_multi == 'n')
        {
 			exit;
 		}
    };
}

void arithmetic()
{
    cout<<"\nArithmetic Function includes various type of functions ";
    char opt ='y';
    int sec=0;
    while(opt=='y')
    {
        cout<<"\nChoose [1] for Addition ";
        cout<<"\nChoose [2] for Subtraction ";
        cout<<"\nChoose [3] for Division ";
        cout<<"\nChoose [4] for Multiplication ";
        cout<<"\nYour choice - ";
        cin>>sec;
    
        switch(sec)
        {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                division();
                break;
            case 4:
                multiplication();
                break;
            default:
               cout<<"\nYou Have Entered Invalid Input ! ";
               break;                                  
        }
        cout<<"\nDo you still want to continue with Arithmetic Function y/n ?";
        cin>>opt;
        if(opt =='n')
        {
            exit;
        }
    };
}

void trignometric()
{
	int op = 0;
	float val = 0.0;
    char op_trigo ='y';
    while(op_trigo =='y')
    {
	    cout<<"Select one of the Trignometric function\n";
	    cout<<"[1] Sine\n";
	    cout<<"[2] Cosine\n";
	    cout<<"Op: ";
	    cin>>op;
	    cout<<"Enter value: ";
	    cin>>val;
	    if(op == 1)
        {
		    cout<<sin(val);
	    }
	    else if(op == 2)
        {
		    cout<<cos(val);
	    }
	    else
        {
		    cout<<"Invalid operation";
	    }
	    cout<<endl;
        cout<<"\nDo you still want to continue with Trignometric Function y/n ?";
        cin>>op_trigo;
        if(op_trigo =='n')
        {
            exit;
        }
    };
}


void exponential()
{
  
    float n, p;
    char op_power ='y';
    while(op_power == 'y')
    {
        double r=0;
        cout<<"Enter number - ";
        cin>>n;
        cout<<"\nEnter power - ";
        cin>>p;
        r=pow(n,p);
        cout<<"\nResult "<<r<<endl;
        cout<<"\nDo you still want to continue with Exponential Function y/n ?";
        cin>>op_power;
        if(op_power =='n')
        {
            exit;
        }
    };
}

void logarithmic()
{
    float value = 0.0;
    char op_log ='y';
    while(op_log =='y')
    {
	    cout<<"Enter the value to calculate the log(e): ";
	    cin>>value;
	    cout<<"\nResult = "<<log(value)<<endl;
        cout<<"\nDo you still want to continue with Logarithmic Function y/n ?";
        cin>>op_log;
        if(op_log =='n')
        {
            exit;
        }
    };
}



int main()
{
    char choice = 'y';
    int sel = 0;
	cout<<"\n\n\nAdvanced Calculator\n";

    cout<<"Created by Harpreet Singh\n";
    cout<<"Last Modified Date - 16-10-21\n";

    while(choice == 'y')
    {

	    cout<<"[1] Arithmetic\n";
	    cout<<"[2] Trignometric\n";
	    cout<<"[3] Exponential\n";
	    cout<<"[4] Logarithmic\n";
	    //cout<<"Your choice:";
	
	
		cout<<"Enter the type of operation you want to calculate\n";
		cin>>sel;
		
		switch(sel)
        {
			case 1:
				arithmetic();
				break;
			case 2:
				trignometric();
				break;
			case 3:
				exponential();
				break;
			case 4:
				logarithmic();
				break;
			default:
				cout<<"Invalid Operation";
		}
		
		cout<<"Do you want to continue? y/n"<<endl;
		cin>>choice;
		if(choice == 'n')
        {
			break;
		}
	};		
	return 0;
}