#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
void pemesanan_ticket_pesawat ()
{
                char kota,kelas,kembali;
                float harga_tiket,ppn,jumlah;
                do
                {
                                cout<<"\n__________________ HARGA TIKET PESAWAT ___________________\n";
                                cout<<"\n__________________________________________________________\n";
                                cout<<"Tujuan Anda        Kelas         Kelas        Kelas     \n";
                                cout<<"                   Ekonomi    Bisnis    Eksekutif\n";
                                cout<<"____________________________________________________________\n";
                                cout<<"1. Jakarta         $30           $45          $60         \n";
                                cout<<"2. Zimbabwe        $40           $55          $70         \n";
                                cout<<"____________________________________________________________\n";
                                cout<<"\n___________________ Pilih Kota Tujuan ____________________\n";
                                cout<<"\n1. Jakarta";
                                cout<<"\n2. Zimbabwe";
                                cout<<"\nPilih tujuan              : ";
                                
                                cin>>kota;
                                system("cls");
                               
                                switch(kota)
                                {
                                     case '1':
                                           {
                                        	cout<<"Kota Tujuan Anda                    : Jakarta\n"<<endl;
                                     			cout<<"___________________ Pilih Kelas Pesawat ___________________";
                                            	cout<<"\n1.Pilih Ekonomi ";
                                            	cout<<"\n2.Pilih Buisness";
                                            	cout<<"\n3.Pilih Eksekutif";
                                            	cout<<endl;
                                            	cout<<"pilih kelas :";
                                            	cin>>kelas;
                                            	cout<<endl;
                                              		if (kelas=='1' || kelas=='1')
                                                   		{
                                                		harga_tiket=30*14000;
                                                    	ppn=0;
                                                    	jumlah=harga_tiket+ppn;
                                                    	cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                    	cout<<"PPN          = Rp."<<ppn<<endl;
                                                    	cout<<"Jumlah Bayar = Rp."<<jumlah<<endl;
                                                    	}
                                                     	else if (kelas=='2' || kelas=='2')
                                                       		{
                                                        	harga_tiket=45*14000;
                                                        	ppn=0.1*harga_tiket;
                                                        	jumlah=harga_tiket+ppn;
                                                        	cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                        	cout<<"PPN          = Rp."<<ppn<<endl;
                                                    		cout<<"Jumlah Bayar = Rp."<<jumlah<<endl;
                                                    		}
                                                            else if (kelas=='3' || kelas=='3')
                                                        		{
                                                               harga_tiket=60*14000;
                                                               ppn=0.2*harga_tiket;
                                                               jumlah=harga_tiket+ppn;
                                                               	cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                            	cout<<"PPN          = Rp."<<ppn<<endl;
                                                            	cout<<"Jumlah Bayar = Rp."<<jumlah<<endl;
                                                               	}
                                break;
                                            					system("cls");
                                           }
                                     case '2':
                                        	{
                                            cout<<"Kota Tujuan Anda                    : Zimbabwe\n"<<endl;
                                     			cout <<"___________________ Pilih Kelas Pesawat ___________________";
                                                cout<<"\n1.Ekonomi ";
                                                cout<<"\n2.Buisness";
                                                cout<<"\n3.Eksekutif"<< endl;
                                                cout<<endl;
                                                cout<< "pilih kelas :";
                                                cin>>kelas;
                                                cout<<endl;
                                                    if (kelas=='1' || kelas=='1')
                                                     	{
                                                        harga_tiket=40*14000;
                                                        ppn=0;
                                                        jumlah=harga_tiket+ppn;
                                                        cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                        cout<<"PPN          = Rp."<<ppn<<endl;
                                                        cout<<"Jumlah Bayar = Rp."<<jumlah<<endl;
                                                       }
                                                        else if (kelas=='2' || kelas=='2')
                                                            {
                                                            harga_tiket=55*14000;
                                                            ppn=0.1*harga_tiket;
                                                            jumlah=harga_tiket+ppn;
                                                            cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                            cout<<"PPN          = Rp."<<ppn<<endl;
                                                            cout<<"Jumlah Bayar = Rp."<<jumlah<<endl;
                                                        	}
                                                                else if (kelas=='3' || kelas=='3')
                                                                {
                                                                harga_tiket=70*14000;
                                                                ppn=0.2*harga_tiket;
                                                                jumlah=harga_tiket+ppn;
                                                                cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                            	cout<<"PPN          = Rp."<<ppn<<endl;
                                                                cout<<"Jumlah Bayar = Rp."<<jumlah<<endl;
                                                        		}
                                            break;
                                                            system("cls");
                                            }
                                                default:
                                                	
                                                cout<<"you are not choose anything"<<endl; 
                                }
                                cout<<"\nAnda Ingin Memesan Kembali Y/T   : ";
                                cin>>kembali;
								system("cls"); 
                }
                while(kembali=='Y' || kembali=='y');
                getch();
}
int main(){
	pemesanan_ticket_pesawat();
	return 0;
}
