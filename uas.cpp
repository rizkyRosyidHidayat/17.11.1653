#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;
string toIna();
string toEng();

class Indonesia
{
public:
	void setKata(string k){
		kata = k;
	}
protected:
	string kata;

};

class Inggris
{
public:
	void setWord(string w){
		word = w;
	}
protected:
	string word;

};

class Translate: public Indonesia, public Inggris
{
public:
	string getKata(){
		return kata;
	}
	string getWord(){
		return word;
	}

};

struct Kamus{
    string ina[5] = {"aku","kamu","dia","mereka","kita"};
    string eng[5] = {"i","you","she/he","they","we"};
}k;

string toEng(string kata){
    for(int i=0;i<5;i++){
        if(k.ina[i] == kata){
            return k.eng[i];
        }else{
            return "Kata tidak ada";
        }
    }
}

string toIna(string kata){
    for(int i=0;i<5;i++){
        if(k.eng[i] == kata){
            return k.ina[i];
        }else{
            return "Kata tidak ada";
        }
    }
}

int main()
{
	Translate t;
	string kata;
	int pil;

	do{
        system("cls");
        cout<<"1. Indonesia ke Inggris"<<endl;
        cout<<"2. Inggris ke Indonesia"<<endl;
        cout<<"3. Exit"<<endl;
        cout<<"Masukan pilihan : ";
        cin>>pil;

        if(pil == 1){
            cout<<"Masukan kata : ";
            cin>>kata;
            t.setWord(toEng(kata));
            cout<<t.getWord();
            getch();
        }else if(pil == 2){
            cout<<"Masukan kata : ";
            cin>>kata;
            t.setKata(toIna(kata));
            cout<<t.getKata();
            getch();
        }else if(pil == 3){
            cout<<"bye bye";
            getch();
        }else{
            cout<<"Maaf pilihan anda salah";
            getch();
        }
	}while(pil != 3);

	return 0;
}
