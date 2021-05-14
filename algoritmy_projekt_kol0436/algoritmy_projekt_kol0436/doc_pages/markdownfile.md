# Popis projektu

Autor: Kate�ina Kola��kov� <br>
Login: kol0436 <br>
Datum: 6. 5. 2021 <br>
Cvi�en�: pond�l�, 10:45 <br>

@section se1 Zad�n�

Zad�n�m projektu bylo vy�e�it hru jm�nem Klokan. Jej�m c�lem je proj�t zadanou posloupnost� z prvn� na posledn� pozici s co nejmen��m po�tem skok�.
Posloupnost obsahuje ��slice 0-9, kter� se vyskytuj� v libovoln�m po�ad� a m��ou se libovoln� opakovat. V ��seln� �ad� se m��eme pohybovat pomoc� n�sleduj�c�ch
pravidel :
 - Sko�it na n�sleduj�c� ��slo o jedna dop�edu
 - Sko�it na p�edch�zej�c� ��slo o jedna zp�t
 - Sko�it na ��slo se stejnou hodnotou, jako to, na kter�m se pr�v� nach�z�m

 @section se2 Implementace

 K vy�e�en� t�to �lohy byl vyu�it BFS algoritmus. K jeho realizaci byly vytvo�eny celkem t�i t��dy, a to Graph, Edge a Vertice. <br>
 Cel� proces spo��v� v tom, �e dojde k vytvo�en� grafu. Vrcholy tohoto grafu reprezentuj� ��slice posloupnosti a hrany popisuj�
 v�echny mo�n� skoky, kter� jde na z�klad� v��e zm�n�n�ch pravidel prov�st.
 N�sledn� se hled� nejkrat�� cesta od vrcholu p�edstavuj�c�ho za��tek posloupnosti, k vrcholu p�edstavuj�c�mu konec posloupnosti.<br>
 
 Ka�d� z vrchol� si v prom�nn� visit nese informaci o tom, zda byl ji� nav�t�ven. Hodnota, jakou visit m�, ozna�uje po�et skok�, kter� bylo t�eba vykonat, 
 aby jsme v posloupnosti na toto ��slo sko�ili.
 Cel� proces za��n� na vrcholu, kter� reprezentuje prvn� ��slici v posloupnosti. Tomuto vrcholu je visit nastaven� na jedni�ku a je p�id�n na za��tek fronty
 ur�en� ke zpracov�n�.
 Ka�d�mu vrcholu, kter� je s t�mto vrcholem spojen hranou a z�rove� je�t� nebyl  nav�t�ven, je visit nastaveno o jedna v�t��, ne� u p�vodn�ho vrcholu. 
 Z�rove� je tento vrchol um�st�n do fronty. Pot�  se za��n� cel� proces opakovat s n�sleduj�c�m vrcholem ve front�.
 T�mto zp�sobem algoritmus proch�z� cel� graf, dokud nenajde vrchol ozna�en� jako fin�ln�.<br>

Po dosa�en� fin�ln�ho vrcholu se za��n� postupn� vracet zp�tky a pomoc� hodnot visit parametru hled� cestu zp�tky na za��tek. Tato cesta je ji� fin�ln� v�sledek.

 @section se3 Zdroje
Princip BFS algoritmu: LEVITIN, Anany., 2012. Introduction to the Design and Analysis of Algorithms. 3rd ed. Boston: Pearson. ISBN 978-0-13-231681-1<br>
�vodn� obr�zek: https://www.freepik.com/premium-vector/illustration-kangaroo-isolated-white-background_4112797.htm


