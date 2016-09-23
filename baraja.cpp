#include "baraja.h"
#include "carta.h"

baraja::baraja(){
	for (int i = 0; i < 13; ++i)
	{
		switch(i){
			case 1:{
				string letra = i+"";
				cartas.push_back(new carta("♠",i,"A"));
				break;
			}
			case 2:{
				string letra = i+"";
				cartas.push_back(new carta("♠",i,letra));
				break;
			}
			case 3:{
				string letra = i+"";
				cartas.push_back(new carta("♠",i,letra));
				break;
			}
			case 4:{
				string letra = i+"";
				cartas.push_back(new carta("♠",i,letra));
				break;
			}
			case 5:{
				string letra = i+"";
				cartas.push_back(new carta("♠",i,letra));
				break;
			} 
			case 6:{
				string letra = i+"";
				cartas.push_back(new carta("♠",i,letra));
				break;
			}
			case 7:{
				string letra = i+"";
				cartas.push_back(new carta("♠",i,letra));
				break;
			}
			case 8:{
				string letra = i+"";
				cartas.push_back(new carta("♠",i,letra));
				break;
			}
			case 9:{
				string letra = i+"";
				cartas.push_back(new carta("♠",i,letra));
				break;
			}
			case 10:{
				cartas.push_back(new carta("♠",i,"J"));
				break;
			}
			case 11:{
				cartas.push_back(new carta("♠",i,"A"));
				break;
			}
			case 12:{
				cartas.push_back(new carta("♠",i,"Q"));
				break;
			}
			case 13:{
				cartas.push_back(new carta("♠",i,"K"));
				break;
			}
		}
	}
	for (int i = 0; i < 13; ++i)
	{
		switch(i){
			case 1:{
				string letra = i+"";
				cartas.push_back(new carta("♣",i,"A"));
				break;
			}
			case 2:{
				string letra = i+"";
				cartas.push_back(new carta("♣",i,letra));
				break;
			}
			case 3:{
				string letra = i+"";
				cartas.push_back(new carta("♣",i,letra));
				break;
			}
			case 4:{
				string letra = i+"";
				cartas.push_back(new carta("♣",i,letra));
				break;
			}
			case 5:{
				string letra = i+"";
				cartas.push_back(new carta("♣",i,letra));
				break;
			} 
			case 6:{
				string letra = i+"";
				cartas.push_back(new carta("♣",i,letra));
				break;
			}
			case 7:{
				string letra = i+"";
				cartas.push_back(new carta("♣",i,letra));
				break;
			}
			case 8:{
				string letra = i+"";
				cartas.push_back(new carta("♣",i,letra));
				break;
			}
			case 9:{
				string letra = i+"";
				cartas.push_back(new carta("♣",i,letra));
				break;
			}
			case 10:{
				cartas.push_back(new carta("♣",i,"J"));
				break;
			}
			case 11:{
				cartas.push_back(new carta("♣",i,"A"));
				break;
			}
			case 12:{
				cartas.push_back(new carta("♣",i,"Q"));
				break;
			}
			case 13:{
				cartas.push_back(new carta("♣",i,"K"));
				break;
			}
		}
	}
	for (int i = 0; i < 13; ++i)
	{
		switch(i){
			case 1:{
				string letra = i+"";
				cartas.push_back(new carta("♥",i,"A"));
				break;
			}
			case 2:{
				string letra = i+"";
				cartas.push_back(new carta("♥",i,letra));
				break;
			}
			case 3:{
				string letra = i+"";
				cartas.push_back(new carta("♥",i,letra));
				break;
			}
			case 4:{
				string letra = i+"";
				cartas.push_back(new carta("♥",i,letra));
				break;
			}
			case 5:{
				string letra = i+"";
				cartas.push_back(new carta("♥",i,letra));
				break;
			} 
			case 6:{
				string letra = i+"";
				cartas.push_back(new carta("♥",i,letra));
				break;
			}
			case 7:{
				string letra = i+"";
				cartas.push_back(new carta("♥",i,letra));
				break;
			}
			case 8:{
				string letra = i+"";
				cartas.push_back(new carta("♥",i,letra));
				break;
			}
			case 9:{
				string letra = i+"";
				cartas.push_back(new carta("♥",i,letra));
				break;
			}
			case 10:{
				cartas.push_back(new carta("♥",i,"J"));
				break;
			}
			case 11:{
				cartas.push_back(new carta("♥",i,"A"));
				break;
			}
			case 12:{
				cartas.push_back(new carta("♥",i,"Q"));
				break;
			}
			case 13:{
				cartas.push_back(new carta("♥",i,"K"));
				break;
			}
		}
	}
	for (int i = 0; i < 13; ++i)
	{
		switch(i){
			case 1:{
				string letra = i+"";
				cartas.push_back(new carta("♦",i,"A"));
				break;
			}
			case 2:{
				string letra = i+"";
				cartas.push_back(new carta("♦",i,letra));
				break;
			}
			case 3:{
				string letra = i+"";
				cartas.push_back(new carta("♦",i,letra));
				break;
			}
			case 4:{
				string letra = i+"";
				cartas.push_back(new carta("♦",i,letra));
				break;
			}
			case 5:{
				string letra = i+"";
				cartas.push_back(new carta("♦",i,letra));
				break;
			} 
			case 6:{
				string letra = i+"";
				cartas.push_back(new carta("♦",i,letra));
				break;
			}
			case 7:{
				string letra = i+"";
				cartas.push_back(new carta("♦",i,letra));
				break;
			}
			case 8:{
				string letra = i+"";
				cartas.push_back(new carta("♦",i,letra));
				break;
			}
			case 9:{
				string letra = i+"";
				cartas.push_back(new carta("♦",i,letra));
				break;
			}
			case 10:{
				string letra = i+"";
				cartas.push_back(new carta("♦",i,"J"));
				break;
			}
			case 11:{
				string letra = i+"";
				cartas.push_back(new carta("♦",i,"A"));
				break;
			}
			case 12:{
				string letra = i+"";
				cartas.push_back(new carta("♦",i,"Q"));
				break;
			}
			case 13:{
				string letra = i+"";
				cartas.push_back(new carta("♦",i,"K"));
				break;
			}
		}
	}
}

baraja::~baraja(){
	for (int i = 0; i < cartas.size(); ++i)
	{
		delete cartas.at(i);
	}
}
void baraja::reinicio(){
	for (int i = 0; i < 13; ++i)
	{
		switch(i){
			case 1:{
				string letra = i+"";
				cartas.push_back(new carta("♠",i,"A"));
				break;
			}
			case 2:{
				string letra = i+"";
				cartas.push_back(new carta("♠",i,letra));
				break;
			}
			case 3:{
				string letra = i+"";
				cartas.push_back(new carta("♠",i,letra));
				break;
			}
			case 4:{
				string letra = i+"";
				cartas.push_back(new carta("♠",i,letra));
				break;
			}
			case 5:{
				string letra = i+"";
				cartas.push_back(new carta("♠",i,letra));
				break;
			} 
			case 6:{
				string letra = i+"";
				cartas.push_back(new carta("♠",i,letra));
				break;
			}
			case 7:{
				string letra = i+"";
				cartas.push_back(new carta("♠",i,letra));
				break;
			}
			case 8:{
				string letra = i+"";
				cartas.push_back(new carta("♠",i,letra));
				break;
			}
			case 9:{
				string letra = i+"";
				cartas.push_back(new carta("♠",i,letra));
				break;
			}
			case 10:{
				cartas.push_back(new carta("♠",i,"J"));
				break;
			}
			case 11:{
				cartas.push_back(new carta("♠",i,"A"));
				break;
			}
			case 12:{
				cartas.push_back(new carta("♠",i,"Q"));
				break;
			}
			case 13:{
				cartas.push_back(new carta("♠",i,"K"));
				break;
			}
		}
	}
	for (int i = 0; i < 13; ++i)
	{
		switch(i){
			case 1:{
				string letra = i+"";
				cartas.push_back(new carta("♣",i,"A"));
				break;
			}
			case 2:{
				string letra = i+"";
				cartas.push_back(new carta("♣",i,letra));
				break;
			}
			case 3:{
				string letra = i+"";
				cartas.push_back(new carta("♣",i,letra));
				break;
			}
			case 4:{
				string letra = i+"";
				cartas.push_back(new carta("♣",i,letra));
				break;
			}
			case 5:{
				string letra = i+"";
				cartas.push_back(new carta("♣",i,letra));
				break;
			} 
			case 6:{
				string letra = i+"";
				cartas.push_back(new carta("♣",i,letra));
				break;
			}
			case 7:{
				string letra = i+"";
				cartas.push_back(new carta("♣",i,letra));
				break;
			}
			case 8:{
				string letra = i+"";
				cartas.push_back(new carta("♣",i,letra));
				break;
			}
			case 9:{
				string letra = i+"";
				cartas.push_back(new carta("♣",i,letra));
				break;
			}
			case 10:{
				cartas.push_back(new carta("♣",i,"J"));
				break;
			}
			case 11:{
				cartas.push_back(new carta("♣",i,"A"));
				break;
			}
			case 12:{
				cartas.push_back(new carta("♣",i,"Q"));
				break;
			}
			case 13:{
				cartas.push_back(new carta("♣",i,"K"));
				break;
			}
		}
	}
	for (int i = 0; i < 13; ++i)
	{
		switch(i){
			case 1:{
				string letra = i+"";
				cartas.push_back(new carta("♥",i,"A"));
				break;
			}
			case 2:{
				string letra = i+"";
				cartas.push_back(new carta("♥",i,letra));
				break;
			}
			case 3:{
				string letra = i+"";
				cartas.push_back(new carta("♥",i,letra));
				break;
			}
			case 4:{
				string letra = i+"";
				cartas.push_back(new carta("♥",i,letra));
				break;
			}
			case 5:{
				string letra = i+"";
				cartas.push_back(new carta("♥",i,letra));
				break;
			} 
			case 6:{
				string letra = i+"";
				cartas.push_back(new carta("♥",i,letra));
				break;
			}
			case 7:{
				string letra = i+"";
				cartas.push_back(new carta("♥",i,letra));
				break;
			}
			case 8:{
				string letra = i+"";
				cartas.push_back(new carta("♥",i,letra));
				break;
			}
			case 9:{
				string letra = i+"";
				cartas.push_back(new carta("♥",i,letra));
				break;
			}
			case 10:{
				cartas.push_back(new carta("♥",i,"J"));
				break;
			}
			case 11:{
				cartas.push_back(new carta("♥",i,"A"));
				break;
			}
			case 12:{
				cartas.push_back(new carta("♥",i,"Q"));
				break;
			}
			case 13:{
				cartas.push_back(new carta("♥",i,"K"));
				break;
			}
		}
	}
	for (int i = 0; i < 13; ++i)
	{
		switch(i){
			case 1:{
				string letra = i+"";
				cartas.push_back(new carta("♦",i,"A"));
				break;
			}
			case 2:{
				string letra = i+"";
				cartas.push_back(new carta("♦",i,letra));
				break;
			}
			case 3:{
				string letra = i+"";
				cartas.push_back(new carta("♦",i,letra));
				break;
			}
			case 4:{
				string letra = i+"";
				cartas.push_back(new carta("♦",i,letra));
				break;
			}
			case 5:{
				string letra = i+"";
				cartas.push_back(new carta("♦",i,letra));
				break;
			} 
			case 6:{
				string letra = i+"";
				cartas.push_back(new carta("♦",i,letra));
				break;
			}
			case 7:{
				string letra = i+"";
				cartas.push_back(new carta("♦",i,letra));
				break;
			}
			case 8:{
				string letra = i+"";
				cartas.push_back(new carta("♦",i,letra));
				break;
			}
			case 9:{
				string letra = i+"";
				cartas.push_back(new carta("♦",i,letra));
				break;
			}
			case 10:{
				string letra = i+"";
				cartas.push_back(new carta("♦",i,"J"));
				break;
			}
			case 11:{
				string letra = i+"";
				cartas.push_back(new carta("♦",i,"A"));
				break;
			}
			case 12:{
				string letra = i+"";
				cartas.push_back(new carta("♦",i,"Q"));
				break;
			}
			case 13:{
				string letra = i+"";
				cartas.push_back(new carta("♦",i,"K"));
				break;
			}
		}
	}
}
vector<carta*> baraja::getBaraja(){
	return cartas;
}