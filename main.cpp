#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

string Roulette(string Cat[], int Dim) {
    int Sfa = rand() % Dim;
    int Pos = 0;
    int Time = 50;;
    while (Time != 0) {
      for (int I = 0; I < 9; I++) {
        int Ind = (Pos + I + Sfa) % Dim;
        if (I == 4)
          cout << " >> " << left << setw(20) << Cat[Ind] << " <<" << endl;
        else
          cout << "    " << Cat[Ind] << endl;}
      Pos += 1;
      if (Pos > 15)
        Time += 25;
      if (Time > 400)
        break;
      this_thread::sleep_for(chrono::milliseconds(Time));
      cout << "\033[2J\033[H";}
    return Cat[((Pos + Sfa + 3) % Dim)];
}

int main() {
    srand(time(0));
    string Razze[] = {"Umano","Elfo","Elfo Oscuro","Nano","Orco","Goblin","Demone","Angelo","Arcangelo","Dio","Semidio","Vampiro","Licantropo","Drago","Mezzodrago","Fenice","Sirena","Ninfa","Gigante","Titano","Golem","Spirito","Fantasma","Scheletro","Non Morto","Fata","Folletto","Centauro","Mutaforma","Kitsune"};
    string Classi[] = {"Guerriero","Mago","Assassino","Paladino","Berserker","Necromante","Arciere","Cavaliere","Monaco","Druido","Bardo","Chierico","Evocatore","Stregone","Alchimista","Ladro","Samurai","Ninja","Gladiatore","Cacciatore","Templare","Spadaccino","Mietitore","Elementalista","Illusionista","Invocatore","Domatore","Esploratore","Warlock","Guardiano"};
    string Poteri[] = {"Fuoco","Acqua","Ghiaccio","Fulmine","Terra","Vento","Luce","Ombra","Veleno","Plasma","Gravita","Telecinesi","Teletrasporto","Invisibilita","Rigenerazione","Immortalita","Necromanzia","Illusioni","Tempo","Spazio","Sangue","Anima","Vuoto","Metallo","Natura","Cristallo","Esplosione","Magnetismo","Caos","Creazione"};
    string Armi[] = {"Spada","Katana","Ascia","Martello","Lancia","Pugnale","Arco","Balestra","Falce","Stocco","Spadone","Scudo","Bastone","Tridente","Frusta","Artigli","Guanti","Mazza","Alabarda","Doppie Lame","Spada Magica","Arco Sacro","Lama Oscura","Martello Divino","Lancia Celeste","Falce Demoniaca","Daga Velenosa","Spada Runica","Bastone Arcano","Lama del Vuoto"};
    string Allineamento[] = {"Buono","Malvagio","Neutrale","Caotico","Legale","Caotico Buono","Legale Buono","Neutrale Buono","Caotico Malvagio","Legale Malvagio","Neutrale Malvagio","Divino","Demoniaco","Corrotto","Equilibrato"};
    string Statistiche[] = {"Forza","Velocita","Intelligenza","Resistenza","Agilita","Destrezza","Fortuna","Carisma","Percezione","Precisione","Mana","Difesa","Attacco","Vitalita","Tenacia","Saggezza","Istinto","Volonta","Spirito","Controllo"};
    string Titoli[] = {"Contadino","Apprendista","Mercenario","Avventuriero","Cacciatore","Esploratore","Cavaliere","Comandante","Generale","Re","Regina","Imperatore","Imperatrice","Principe","Principessa","Duca","Duchessa","Barone","Baronessa","Campione","Eroe","Leggenda","Salvatore","Conquistatore","Distruttore","Carnefice","Flagello","Tiranno","Usurpatore","Profeta","Oracolo","Prescelto","Messia","Santo","Martire","Arcimago","Gran Maestro","Custode","Guardiano","Protettore","Sovrano","Signore della Guerra","Re dei Demoni","Re degli Abissi","Signore delle Ombre","Divoratore di Mondi","Creatore di Universi","Dio della Distruzione","Dio della Creazione","Entita Primordiale"};
    string Persona[] = {Roulette(Titoli, 50), Roulette(Razze, 30), Roulette(Classi, 30), Roulette(Poteri, 30), Roulette(Armi, 30), Roulette(Allineamento, 15), Roulette(Statistiche, 20)};
    cout << "\033[2J\033[H"<< endl;
    string Nome;
    cout << "\t";
    cin >> Nome;
    cout << "\t" << Persona[0] << "\n\nIdentità:\n  Razza: " << Persona[1] << "\n  Classe: " << Persona[2] << "\n  Allineamento: " << Persona[5] << "\n\nEquipaggiamento:\n  Arma: " << Persona[4] << "\n  Potere: " << Persona[3] << "\n\nStatistica Migliore: " << Persona[6] << endl;
    return 0;
}
