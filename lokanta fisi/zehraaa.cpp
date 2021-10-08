#include<iostream>
#include<cstring>
#include<iomanip>
#include<fstream>

using namespace std;
int main()
{       
	
	cout<<"\n";
        cout.width(40);cout<<right<<"****MENU****"<<endl;
        
        string z1="  \t Yemekler";  string z2="\t\tIcecekler";
        cout<<z1<<"                              "<<z2<<"                                  "<<endl;
        string zz1="\t1-corba=5tl";  string zz2="4-su=1tl";
        cout<<zz1<<"                                    "<<zz2<<"                                                    "<<endl;
        string zz4="\t2-pilav=6tl";  string zz3="5-ayran=3tl";
        cout<<zz4<<"                                    "<<zz3<<"                                                    "<<endl;
        string zz5="\t3-makarna=10tl";  string zz6="6-visne suyu=4tl";
        cout<<zz5<<"                                 "<<zz6<<"                                                    "<<endl;
        
        int x,y;
       int a;
       cout<<"lutfen bir yemek ve bir icecek seciniz!"<<endl;
	   cout<<"siparis numarasi giriniz: "<<endl;
	   cin>>x; cin>>y;
	   
	
	
	ofstream dosya;
	dosya.open("zehra.txt");
	if(dosya.is_open())
	{cout<<"fis yazdirildi"<<endl;
	}
	else
	cout<<"fis yazdirilamadi";
	
	
	
	  if(x==1 && y==4  || x==4 && y==1)
	   {
	    int a;
	    double kdvliFiyat;
	    double tutar;
	    cout<<"kac kisi?";
	    cin>>a;
	    cout<<" \n";
	   
	   string s1="    LOKANTAYA HOSGELDINIZ";  string s2="TARIH=13/05/2020";
        dosya <<s1<<"            "<<s2<<endl;
        cout<<s1<<"               "<<s2<<endl;
        dosya<<"------------------------------------------------------------------"<<endl;
        cout<<"-------------------------------------------------------------------"<<endl;
	   
		tutar=5+1;
		string c1="   Yemek Listesi";  string c2="   Fiyat";  string c3="Kisi Sayisi";
       dosya<<c1<<"           "<<c2<<"X"<<c3<<endl;
    cout<<c1<<"           "<<c2<<"X"<<c3<<endl;
       dosya<<"    "<<x<<"    "<<y<<"                       "<<tutar<<"X"<<a<<endl;
       cout<<"    "<<x<<"    "<<y<<"                       "<<tutar<<"X"<<a<<endl;
       dosya<<"\n";
       cout<<"\n";
       dosya<<"KDV %5 uygulanmaktadir"<<endl;
        cout<<"KDV %5 uygulanmaktadir"<<endl;
		dosya<<"Tutar: "<<(5+1)*a<<endl;
		cout<<"Tutar: "<<(5+1)*a<<endl;
		tutar=5+1;
		kdvliFiyat=((tutar*5)/100+tutar)*a;
		dosya<<"KDV li tutar:"<<kdvliFiyat<<endl;
       cout<<"KDV li tutar:"<<kdvliFiyat<<endl;
       dosya<<"----------------------------------------------"<<endl;
       cout<<"----------------------------------------------"<<endl;
        dosya<<"Garson:Zehra"<<endl;
         cout<<"Garson:Zehra"<<endl;
		dosya<<"Yine Bekleriz"<<endl;
		cout<<"Yine Bekleriz"<<endl;}
		
		
		
		
		
		if(x==1 && y==5  || x==5 && y==1)
	   {
	    int a;
	    double kdvliFiyat;
	    double tutar;
	    cout<<"kac kisi?";
	    cin>>a;
	    cout<<" \n";
	   
	   string s1="    LOKANTAYA HOSGELDINIZ";  string s2="TARIH=13/05/2020";
        dosya <<s1<<"            "<<s2<<endl;
        cout<<s1<<"               "<<s2<<endl;
        dosya<<"------------------------------------------------------------------"<<endl;
        cout<<"-------------------------------------------------------------------"<<endl;
	   
		tutar=5+3;
		string c1="   Yemek Listesi";  string c2="   Fiyat";  string c3="Kisi Sayisi";
       dosya<<c1<<"           "<<c2<<"X"<<c3<<endl;
    cout<<c1<<"           "<<c2<<"X"<<c3<<endl;
       dosya<<"    "<<x<<"    "<<y<<"                       "<<tutar<<"X"<<a<<endl;
       cout<<"    "<<x<<"    "<<y<<"                       "<<tutar<<"X"<<a<<endl;
       dosya<<"\n";
       cout<<"\n";
       dosya<<"KDV %5 uygulanmaktadir"<<endl;
        cout<<"KDV %5 uygulanmaktadir"<<endl;
		dosya<<"Tutar: "<<(5+3)*a<<endl;
		cout<<"Tutar: "<<(5+3)*a<<endl;
		tutar=5+3;
		kdvliFiyat=((tutar*5)/100+tutar)*a;
		dosya<<"KDV li tutar:"<<kdvliFiyat<<endl;
       cout<<"KDV li tutar:"<<kdvliFiyat<<endl;
       dosya<<"----------------------------------------------"<<endl;
       cout<<"----------------------------------------------"<<endl;
        dosya<<"Garson:Zehra"<<endl;
         cout<<"Garson:Zehra"<<endl;
		dosya<<"Yine Bekleriz"<<endl;
		cout<<"Yine Bekleriz"<<endl;
		}
		
		
		
		if(x==1 && y==6  || x==6 && y==1)
	   {
	    int a;
	    double kdvliFiyat;
	    double tutar;
	    cout<<"kac kisi?";
	    cin>>a;
	    cout<<" \n";
	   
	   string s1="    LOKANTAYA HOSGELDINIZ";  string s2="TARIH=13/05/2020";
        dosya <<s1<<"            "<<s2<<endl;
        cout<<s1<<"               "<<s2<<endl;
        dosya<<"------------------------------------------------------------------"<<endl;
        cout<<"-------------------------------------------------------------------"<<endl;
	   
		tutar=5+4;
		string c1="   Yemek Listesi";  string c2="   Fiyat";  string c3="Kisi Sayisi";
       dosya<<c1<<"           "<<c2<<"X"<<c3<<endl;
    cout<<c1<<"           "<<c2<<"X"<<c3<<endl;
       dosya<<"    "<<x<<"    "<<y<<"                       "<<tutar<<"X"<<a<<endl;
       cout<<"    "<<x<<"    "<<y<<"                       "<<tutar<<"X"<<a<<endl;
       dosya<<"\n";
       cout<<"\n";
       dosya<<"KDV %5 uygulanmaktadir"<<endl;
        cout<<"KDV %5 uygulanmaktadir"<<endl;
		dosya<<"Tutar: "<<(5+4)*a<<endl;
		cout<<"Tutar: "<<(5+4)*a<<endl;
		tutar=5+4;
		kdvliFiyat=((tutar*5)/100+tutar)*a;
		dosya<<"KDV li tutar:"<<kdvliFiyat<<endl;
       cout<<"KDV li tutar:"<<kdvliFiyat<<endl;
       dosya<<"----------------------------------------------"<<endl;
       cout<<"----------------------------------------------"<<endl;
        dosya<<"Garson:Zehra"<<endl;
         cout<<"Garson:Zehra"<<endl;
		dosya<<"Yine Bekleriz"<<endl;
		cout<<"Yine Bekleriz"<<endl;
		}
		
		
		if(x==2 && y==4  || x==4 && y==2)
	   {
	    int a;
	    double kdvliFiyat;
	    double tutar;
	    cout<<"kac kisi?";
	    cin>>a;
	    cout<<" \n";
	   
	   string s1="    LOKANTAYA HOSGELDINIZ";  string s2="TARIH=13/05/2020";
        dosya <<s1<<"            "<<s2<<endl;
        cout<<s1<<"               "<<s2<<endl;
        dosya<<"------------------------------------------------------------------"<<endl;
        cout<<"-------------------------------------------------------------------"<<endl;
	   
		tutar=6+1;
		string c1="   Yemek Listesi";  string c2="   Fiyat";  string c3="Kisi Sayisi";
       dosya<<c1<<"           "<<c2<<"X"<<c3<<endl;
    cout<<c1<<"           "<<c2<<"X"<<c3<<endl;
       dosya<<"    "<<x<<"    "<<y<<"                       "<<tutar<<"X"<<a<<endl;
       cout<<"    "<<x<<"    "<<y<<"                       "<<tutar<<"X"<<a<<endl;
       dosya<<"\n";
       cout<<"\n";
       dosya<<"KDV %5 uygulanmaktadir"<<endl;
        cout<<"KDV %5 uygulanmaktadir"<<endl;
		dosya<<"Tutar: "<<(6+1)*a<<endl;
		cout<<"Tutar: "<<(6+1)*a<<endl;
		tutar=6+1;
		kdvliFiyat=((tutar*5)/100+tutar)*a;
		dosya<<"KDV li tutar:"<<kdvliFiyat<<endl;
       cout<<"KDV li tutar:"<<kdvliFiyat<<endl;
       dosya<<"----------------------------------------------"<<endl;
       cout<<"----------------------------------------------"<<endl;
        dosya<<"Garson:Zehra"<<endl;
         cout<<"Garson:Zehra"<<endl;
		dosya<<"Yine Bekleriz"<<endl;
		cout<<"Yine Bekleriz"<<endl;
		}
		
		
		
		
		if(x==2 && y==5  || x==5 && y==2)
	   {
	    int a;
	    double kdvliFiyat;
	    double tutar;
	    cout<<"kac kisi?";
	    cin>>a;
	    cout<<" \n";
	   
	   string s1="    LOKANTAYA HOSGELDINIZ";  string s2="TARIH=13/05/2020";
        dosya <<s1<<"            "<<s2<<endl;
        cout<<s1<<"               "<<s2<<endl;
        dosya<<"------------------------------------------------------------------"<<endl;
        cout<<"-------------------------------------------------------------------"<<endl;
	   
		tutar=6+4;
		string c1="   Yemek Listesi";  string c2="   Fiyat";  string c3="Kisi Sayisi";
       dosya<<c1<<"           "<<c2<<"X"<<c3<<endl;
    cout<<c1<<"           "<<c2<<"X"<<c3<<endl;
       dosya<<"    "<<x<<"    "<<y<<"                       "<<tutar<<"X"<<a<<endl;
       cout<<"    "<<x<<"    "<<y<<"                       "<<tutar<<"X"<<a<<endl;
       dosya<<"\n";
       cout<<"\n";
       dosya<<"KDV %5 uygulanmaktadir"<<endl;
        cout<<"KDV %5 uygulanmaktadir"<<endl;
		dosya<<"Tutar: "<<(6+4)*a<<endl;
		cout<<"Tutar: "<<(6+4)*a<<endl;
		tutar=6+4;
		kdvliFiyat=((tutar*5)/100+tutar)*a;
		dosya<<"KDV li tutar:"<<kdvliFiyat<<endl;
       cout<<"KDV li tutar:"<<kdvliFiyat<<endl;
       dosya<<"----------------------------------------------"<<endl;
       cout<<"----------------------------------------------"<<endl;
        dosya<<"Garson:Zehra"<<endl;
         cout<<"Garson:Zehra"<<endl;
		dosya<<"Yine Bekleriz"<<endl;
		cout<<"Yine Bekleriz"<<endl;
		}
		
		
		
		if(x==2 && y==6  || x==6 && y==2)
	   {
	    int a;
	    double kdvliFiyat;
	    double tutar;
	    cout<<"kac kisi?";
	    cin>>a;
	    cout<<" \n";
	   
	   string s1="    LOKANTAYA HOSGELDINIZ";  string s2="TARIH=13/05/2020";
        dosya <<s1<<"            "<<s2<<endl;
        cout<<s1<<"               "<<s2<<endl;
        dosya<<"------------------------------------------------------------------"<<endl;
        cout<<"-------------------------------------------------------------------"<<endl;
	   
		tutar=6+4;
		string c1="   Yemek Listesi";  string c2="   Fiyat";  string c3="Kisi Sayisi";
       dosya<<c1<<"           "<<c2<<"X"<<c3<<endl;
    cout<<c1<<"           "<<c2<<"X"<<c3<<endl;
       dosya<<"    "<<x<<"    "<<y<<"                       "<<tutar<<"X"<<a<<endl;
       cout<<"    "<<x<<"    "<<y<<"                       "<<tutar<<"X"<<a<<endl;
       dosya<<"\n";
       cout<<"\n";
       dosya<<"KDV %5 uygulanmaktadir"<<endl;
        cout<<"KDV %5 uygulanmaktadir"<<endl;
		dosya<<"Tutar: "<<(6+4)*a<<endl;
		cout<<"Tutar: "<<(6+4)*a<<endl;
		tutar=6+4;
		kdvliFiyat=((tutar*5)/100+tutar)*a;
		dosya<<"KDV li tutar:"<<kdvliFiyat<<endl;
       cout<<"KDV li tutar:"<<kdvliFiyat<<endl;
       dosya<<"----------------------------------------------"<<endl;
       cout<<"----------------------------------------------"<<endl;
        dosya<<"Garson:Zehra"<<endl;
         cout<<"Garson:Zehra"<<endl;
		dosya<<"Yine Bekleriz"<<endl;
		cout<<"Yine Bekleriz"<<endl;
		}
		
		
		if(x==3 && y==4  || x==4 && y==3)
	   {
	    int a;
	    double kdvliFiyat;
	    double tutar;
	    cout<<"kac kisi?";
	    cin>>a;
	    cout<<" \n";
	   
	   string s1="    LOKANTAYA HOSGELDINIZ";  string s2="TARIH=13/05/2020";
        dosya <<s1<<"            "<<s2<<endl;
        cout<<s1<<"               "<<s2<<endl;
        dosya<<"------------------------------------------------------------------"<<endl;
        cout<<"-------------------------------------------------------------------"<<endl;
	   
		tutar=10+1;
		string c1="   Yemek Listesi";  string c2="   Fiyat";  string c3="Kisi Sayisi";
       dosya<<c1<<"           "<<c2<<"X"<<c3<<endl;
    cout<<c1<<"           "<<c2<<"X"<<c3<<endl;
       dosya<<"    "<<x<<"    "<<y<<"                       "<<tutar<<"X"<<a<<endl;
       cout<<"    "<<x<<"    "<<y<<"                       "<<tutar<<"X"<<a<<endl;
       dosya<<"\n";
       cout<<"\n";
       dosya<<"KDV %5 uygulanmaktadir"<<endl;
        cout<<"KDV %5 uygulanmaktadir"<<endl;
		dosya<<"Tutar: "<<(10+1)*a<<endl;
		cout<<"Tutar: "<<(10+1)*a<<endl;
		tutar=10+1;
		kdvliFiyat=((tutar*5)/100+tutar)*a;
		dosya<<"KDV li tutar:"<<kdvliFiyat<<endl;
       cout<<"KDV li tutar:"<<kdvliFiyat<<endl;
       dosya<<"----------------------------------------------"<<endl;
       cout<<"----------------------------------------------"<<endl;
        dosya<<"Garson:Zehra"<<endl;
         cout<<"Garson:Zehra"<<endl;
		dosya<<"Yine Bekleriz"<<endl;
		cout<<"Yine Bekleriz"<<endl;
		}
		
		
		if(x==3 && y==5  || x==5 && y==3)
	   {
	    int a;
	    double kdvliFiyat;
	    double tutar;
	    cout<<"kac kisi?";
	    cin>>a;
	    cout<<" \n";
	   
	   string s1="    LOKANTAYA HOSGELDINIZ";  string s2="TARIH=13/05/2020";
        dosya <<s1<<"            "<<s2<<endl;
        cout<<s1<<"               "<<s2<<endl;
        dosya<<"------------------------------------------------------------------"<<endl;
        cout<<"-------------------------------------------------------------------"<<endl;
	   
		tutar=10+3;
		string c1="   Yemek Listesi";  string c2="   Fiyat";  string c3="Kisi Sayisi";
       dosya<<c1<<"           "<<c2<<"X"<<c3<<endl;
    cout<<c1<<"           "<<c2<<"X"<<c3<<endl;
       dosya<<"    "<<x<<"    "<<y<<"                       "<<tutar<<"X"<<a<<endl;
       cout<<"    "<<x<<"    "<<y<<"                       "<<tutar<<"X"<<a<<endl;
       dosya<<"\n";
       cout<<"\n";
       dosya<<"KDV %5 uygulanmaktadir"<<endl;
        cout<<"KDV %5 uygulanmaktadir"<<endl;
		dosya<<"Tutar: "<<(10+3)*a<<endl;
		cout<<"Tutar: "<<(10+3)*a<<endl;
		tutar=10+3;
		kdvliFiyat=((tutar*5)/100+tutar)*a;
		dosya<<"KDV li tutar:"<<kdvliFiyat<<endl;
       cout<<"KDV li tutar:"<<kdvliFiyat<<endl;
       dosya<<"----------------------------------------------"<<endl;
       cout<<"----------------------------------------------"<<endl;
        dosya<<"Garson:Zehra"<<endl;
         cout<<"Garson:Zehra"<<endl;
		dosya<<"Yine Bekleriz"<<endl;
		cout<<"Yine Bekleriz"<<endl;
		}
		
		
		if(x==3 && y==6  || x==6 && y==3)
	   {
	    int a;
	    double kdvliFiyat;
	    double tutar;
	    cout<<"kac kisi?";
	    cin>>a;
	    cout<<" \n";
	   
	   string s1="    LOKANTAYA HOSGELDINIZ";  string s2="TARIH=13/05/2020";
        dosya <<s1<<"            "<<s2<<endl;
        cout<<s1<<"               "<<s2<<endl;
        dosya<<"------------------------------------------------------------------"<<endl;
        cout<<"-------------------------------------------------------------------"<<endl;
	   
		tutar=10+4;
		string c1="   Yemek Listesi";  string c2="   Fiyat";  string c3="Kisi Sayisi";
       dosya<<c1<<"           "<<c2<<"X"<<c3<<endl;
    cout<<c1<<"           "<<c2<<"X"<<c3<<endl;
       dosya<<"    "<<x<<"    "<<y<<"                       "<<tutar<<"X"<<a<<endl;
       cout<<"    "<<x<<"    "<<y<<"                       "<<tutar<<"X"<<a<<endl;
       dosya<<"\n";
       cout<<"\n";
       dosya<<"KDV %5 uygulanmaktadir"<<endl;
        cout<<"KDV %5 uygulanmaktadir"<<endl;
		dosya<<"Tutar: "<<(10+4)*a<<endl;
		cout<<"Tutar: "<<(10+4)*a<<endl;
		tutar=10+4;
		kdvliFiyat=((tutar*5)/100+tutar)*a;
		dosya<<"KDV li tutar:"<<kdvliFiyat<<endl;
       cout<<"KDV li tutar:"<<kdvliFiyat<<endl;
       dosya<<"----------------------------------------------"<<endl;
       cout<<"----------------------------------------------"<<endl;
        dosya<<"Garson:Zehra"<<endl;
         cout<<"Garson:Zehra"<<endl;
		dosya<<"Yine Bekleriz"<<endl;
		cout<<"Yine Bekleriz"<<endl;
		
		
		}
		}
		
		
		
		
		
		
		
