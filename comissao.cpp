#include<iostream>

using namespace std;

 int main(){
 	
	string nome;
	double valorVenda;
	double taxaComissao = 0.05;
	double comissao;
	
	cout << "Digite o nome do vendendor: ";
	cin >> nome;
	
	cout << "Digite o valor de venda ";
	cin >> valorVenda;
	 
	 comissao = valorVenda * taxaComissao;
	 
	 cout <<"vendendor: "<<nome<<endl;
	 cout <<"Comissao: R$ "<< comissao << endl;
	 
	 
	return 0;
 }
