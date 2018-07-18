#include <iostream>
#define max 10

using namespace std;

void menu();

class Pegawai{
    protected:
        int idPegawai;
        string username;
        string password;

    public:
        bool Login(string u, string p){
            username = u;
            password = p;
            if(username == "admin" && password == "admin"){
                return true;
            }else{
                return false;
            }
        }
};

class Barang{
    protected:
        int idBarang[max];
        string nama[max];
        int jumlah[max];
        int harga[max];

    public:
        void dataBarang(){
            int id[max] = {1,2,3,4,5};
            string n[max] = {"sabun","shampo","piring","sendok","garpu"};
            int j[max] = {5,6,7,8,9};
            int h[max] = {2000,1000,3000,1000,1000};
            for(int i = 0;i<max;i++){
                idBarang[i] = id[i];
                nama[i] = n[i];
                jumlah[i] = j[i];
                harga[i] = h[i];
            }
        }
        void print(int id[max]){
            int jml = 0;
            int pilih;
            do{
                jml++;
                for(int i = 0;i<jml;i++){
                    if(idBarang[i] == id[jml]){
                        cout<<idBarang[i]<<endl;
                        cout<<nama[i]<<endl;
                        cout<<jumlah[i]<<endl;
                        cout<<harga[i]<<endl;
                    }
                }
                cin>>pilih;
            }while(pilih != 2);

        }
};

class Struk: public Barang{
    private:
        int total;

    public:
        int printStruk(){
            //return idBarang;
        }
};

void menu(){
    Barang b;
    Struk s;
    int arr[max];
    arr[0] = 1;
    //b.dataBarang();
    b.print(arr);
}


int main(){
    string uname, pass;

    Pegawai p;

    cout<<"Username = "; cin>>uname;
    cout<<"Password = "; cin>>pass;

    if(p.Login(uname, pass)){
        menu();
    }else{
        cout<<"Login gagal";
    }


    return 0;
}
