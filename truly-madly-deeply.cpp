// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;
namespace first
{
  string x;
}

namespace second
{
  int y = 1;
}
float addFun(float, float);
float subFun(float, float);
float mulFun(float, float);
float divFun(float, float);
float SAreaFun(float);
float TAreaFun(float, float, float);
float RAreaFun(float, float);
float CAreaFun(float, float);
int main()
{
    int zz;
    bool login1 = true;
    do
    {
        printf("\n1 - Entrar \n2 - Sair\n");
        scanf("%d", &zz);
        {
            using namespace first;
            if(zz==1 && zz!=0)
            {
                login1 = true;
                cout<<"\nEnter your username: ";
                cin>>x;
                //getline(cin, x);
                cout<<"\n> "<<x;
            }
            {
                using namespace second;
                if(zz==1 && zz!=0)
                {
                    login1 = true;
                    cout<<"\nEnter your password: ";
                    cin>>y;
                    cout<<"\n> "<<&y;
                }
            }
        }
    } while (login1 != true);
    float w, x, y, z;
    float PI = 3.14159;
    int choice;
    do
    {
        cout<<"\n------------------------\n";
        cout<<"\n1. Addition"<<"\n2. Subtraction"<<"\n3. Multiplication"<<"\n4. Division"<<"\n5. Menu Areas"<<"\n6. Exit"<<"\nEnter Your Choice(1-6):";
        cin>>choice;
        if(choice>=1 && choice<5)
        {
            cout<<"\nEnter any two numbers: ";
            cin>>x>>y;
        }
        switch(choice)
        {
            case 1:
                z = addFun(x, y);
                cout<<"\n"<<x<<" + "<<""<<y<<" = "<<""<<z;
                break;
            case 2:
                z = subFun(x, y);
                cout<<"\n"<<x<<" - "<<""<<y<<" = "<<""<<z;
                break;
            case 3:
                z = mulFun(x, y);
                cout<<"\n"<<x<<" * "<<""<<y<<" = "<<""<<z;
                break;
            case 4:
                z = divFun(x, y);
                cout<<"\n"<<x<<" / "<<""<<y<<" = "<<""<<z;
                break;
                cout<<"\n------------------------\n";
            case 5:
            do
            {
            cout<<"\n------------------------\n";
            cout<<"\n1. Square Area"<<"\n2. Triangle Area"<<"\n3. Rectangle Area"<<"\n4. Circle Area"<<"\n5. Exit"<<"\nEnter Your Choice(1-5):";
            cin>>choice;
            if(choice>=1 && choice<=5)
            {
                //Frankestein monster was here.
            }
            switch(choice)
            {
                case 1:
                cout<<"\nEnter only one number: ";
                cin>>x;                
                z = SAreaFun(x);
                cout<<"\n"<<x<<" * "<<""<<x<<" = "<<""<<z;
                break;
                case 2:
                cout<<"\nEnter length of three sides (one by one) : ";
                cin>>w>>x>>y;                
                z = TAreaFun(w, x, y);
                cout<<"\n"<<w<<" * "<<x<<" * "<<""<<y<<" = "<<""<<z;
                break;
                case 3:
                cout<<"\nEnter the height and breadth: ";
                cin>>x>>y;                
                z = RAreaFun(x, y);
                cout<<"\n"<<x<<" - "<<""<<y<<" = "<<""<<z;
                break;                
                case 4:
                cout<<"\nEnter the radius of the circle: ";
                cin>>x;                 
                z = CAreaFun(PI, x);
                cout<<"\n"<<PI<<" * "<<x<<" * "<<""<<x<<" = "<<""<<z;
                break;
                case 5:
                return 0;
                default:
                cout<<"\nWrong Choice!";
                break;
            }
            }while(choice!=6);
            case 6:
            return 0;
            default:
            cout<<"\nWrong Choice!";
            break;
        }
        cout<<"\n------------------------\n";        
    }while(choice!=6);
    cout<<endl;
    return 0;    
}
float addFun(float a, float b)
{
    return (a+b);
}
float subFun(float a, float b)
{
    return (a-b);
}
float mulFun(float a, float b)
{
    return (a*b);
}
float divFun(float a, float b)
{
    return (a/b);
}
float SAreaFun(float b)
{
    return (b*b);
}
float TAreaFun(float a, float b, float c)
{
    return (a*b*c/2);
}
float RAreaFun(float a, float b)
{
    return (a*b);
}
float CAreaFun(float PI, float b)
{
    return (PI*b*b);
}



