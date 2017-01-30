#include <iostream>
#include <array>
#include <vector>
#include <queue>

using namespace std;

void tablica(array <int, 9>& tab1,int r){

for(int i=0;i<r;i++){
	for(int j=1; j<r;j++){
		if(tab1[j-1]>=tab1[j])
			swap(tab1[j-1],tab1[j]);
	}
}
}

void wektor(vector<int> *w,int a){

for(int i=0;i<a;i++){
	for(int j=1; j<a;j++){
		if(w->at(j-1)>=w->at(j))
			swap(w->at(j-1),w->at(j));
	}
}

}





int main(){

int nr;
cout<<"Starting program"<<endl;
cout<<"choose nr"<<endl<<"1 -array"<<endl<<"2 -vector"<<endl<<"3 -queue"<<endl;
cin>>nr;
switch(nr){
	case 1:
	{
		array <int, 9> tab;
		int size;
		size=tab.size();
		for(int i=0; i<size;i++){

			tab[i]= rand()% 10;
		}
		for(int i=0;i<size;i++){
			cout<<tab[i]<<" ";
		}
		cout<<endl;
		tablica(tab,size);
		for(int i=0;i<size;i++){
			cout<<tab[i]<<" ";
		}

		break;
	}
	case 2:
	{
		vector<int> v;
		
		for(int i=0;i<9;i++){
			int lb=rand() % 10;
			v.push_back(lb);
		}
		cout<<"before sort";
		for(int i : v){
			cout<< i <<" ";
		}
		int r;
		r=v.size();
		vector<int> *wsk;
		wsk=&v;
		wektor(wsk,r);
		cout<<endl;
		for(int i : v){
			cout<< i <<" ";
		}

		break;
	}
	case 3:
	{
		queue<int> kol;
		int size=9;
		array <int, 9> pomoc;
		for (int i=0; i<size;i++){
			int lb= rand() % 100;
			kol.push(lb);
		}
		int j=0;
		while(!kol.empty())
		{
		   	int w = kol.front();
		   	pomoc[j]=w;
		    cout << w<<" ";
		    kol.pop();
		    j++;
		}
		for (int i=0; i<size;i++){			
			kol.push(pomoc[i]);
		}
		cout<<endl;

		tablica(pomoc,size);
		for(int i=0;i<size;i++){
			cout<<pomoc[i]<<" ";
		}

		break;
	}
	default:
		break;
}

cout<<endl<<"koniec"<<endl;
return 0;


}