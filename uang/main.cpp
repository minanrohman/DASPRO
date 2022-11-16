#include <iostream>

using namespace std;

int main()
{
    int money=5000;
    int candy;
    int b;
    cout<<"Uang yang di miliki 5000 "<<endl;
    cout<<"Pilih harga permen 1000/500/300 = "<<endl;
    cin>>candy;
    cout<<endl;

    if(candy==1000)
    {
        cout<<"Jadi Permen yg di dapat Andrian yaitu = "<< 3000/candy<<endl;
        cout<<" (menghitung) ";
        for(int b=1000; b<=3000; b++)
        {
            if(b % 1000==0)
                cout<< b <<" ";
        }
    }

    else if(candy==500)
    {
        cout<<"Jadi Permen yg di dapat Andrian yaitu = "<< money/candy<<endl;
        cout<<" (menghitung) ";
        for(int c=500; c<=money; c++)
        {
            if(c % 500==0)
                cout<< c <<" ";
        }
    }

    else if(candy==300)
    {
        cout<<"Jadi Permen Yg di dapat Andrian yaitu = ..."<<endl;
        cout<<" (menghitung) ";
        for(int d=300; d<=money; d++)
        {
            if(d % 300 == 0)
                cout<<d<<" ";
        }
    }
    else
    {
        cout<<"Harga yg anda masukan tidak sesuai"<<endl;
    }



    return 0;
}


/*
NAMA:  MOH MINANUR ROHMAN
NIM: A11.2022. 14597
*/
