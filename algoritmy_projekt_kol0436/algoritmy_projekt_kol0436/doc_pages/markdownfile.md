# Popis projektu

Autor: Kateøina Kolaøíková <br>
Login: kol0436 <br>
Datum: 6. 5. 2021 <br>
Cvièení: pondìlí, 10:45 <br>

@section se1 Zadání

Zadáním projektu bylo vyøešit hru jménem Klokan. Jejím cílem je projít zadanou posloupností z první na poslední pozici s co nejmenším poètem skokù.
Posloupnost obsahuje èíslice 0-9, které se vyskytují v libovolném poøadí a mùžou se libovolnì opakovat. V èíselné øadì se mùžeme pohybovat pomocí následujících
pravidel :
 - Skoèit na následující èíslo o jedna dopøedu
 - Skoèit na pøedcházející èíslo o jedna zpìt
 - Skoèit na èíslo se stejnou hodnotou, jako to, na kterém se právì nacházím

 @section se2 Implementace

 K vyøešení této úlohy byl využit BFS algoritmus. K jeho realizaci byly vytvoøeny celkem tøi tøídy, a to Graph, Edge a Vertice. <br>
 Celý proces spoèívá v tom, že dojde k vytvoøení grafu. Vrcholy tohoto grafu reprezentují èíslice posloupnosti a hrany popisují
 všechny možné skoky, které jde na základì výše zmínìných pravidel provést.
 Následnì se hledá nejkratší cesta od vrcholu pøedstavujícího zaèátek posloupnosti, k vrcholu pøedstavujícímu konec posloupnosti.<br>
 
 Každý z vrcholù si v promìnné visit nese informaci o tom, zda byl již navštíven. Hodnota, jakou visit má, oznaèuje poèet skokù, které bylo tøeba vykonat, 
 aby jsme v posloupnosti na toto èíslo skoèili.
 Celý proces zaèíná na vrcholu, který reprezentuje první èíslici v posloupnosti. Tomuto vrcholu je visit nastavené na jednièku a je pøidán na zaèátek fronty
 urèené ke zpracování.
 Každému vrcholu, který je s tímto vrcholem spojen hranou a zároveò ještì nebyl  navštíven, je visit nastaveno o jedna vìtší, než u pùvodního vrcholu. 
 Zároveò je tento vrchol umístìn do fronty. Poté  se zaèíná celý proces opakovat s následujícím vrcholem ve frontì.
 Tímto zpùsobem algoritmus prochází celý graf, dokud nenajde vrchol oznaèený jako finální.<br>

Po dosažení finálního vrcholu se zaèíná postupnì vracet zpátky a pomocí hodnot visit parametru hledá cestu zpátky na zaèátek. Tato cesta je již finální výsledek.

 @section se3 Zdroje
Princip BFS algoritmu: LEVITIN, Anany., 2012. Introduction to the Design and Analysis of Algorithms. 3rd ed. Boston: Pearson. ISBN 978-0-13-231681-1<br>
Úvodní obrázek: https://www.freepik.com/premium-vector/illustration-kangaroo-isolated-white-background_4112797.htm


