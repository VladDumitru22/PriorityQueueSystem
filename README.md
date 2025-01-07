Acest repository conține un fișier C care implementează o coadă cu prioritate utilizând o listă legată.
Fiecare element din coada cu prioritate reprezintă o persoană, cu informații precum numele, vârsta, sexul și prioritatea acesteia.
Funcționalitățile includ adăugarea de persoane în coadă în funcție de prioritate, eliminarea unui element din coadă și afișarea primului element din coadă.

Structuri de date:

Este folosită o listă legată simplă pentru a stoca persoanele din coada cu prioritate.
Fiecare nod conține informații despre o persoană, inclusiv un câmp pentru prioritate, care determină ordinea în coadă.

Funcționalități:

createNode(): Creează un nou nod pentru o persoană, citind informațiile (nume, vârstă, sex și prioritate) de la utilizator.
addPriorityQueue(): Adaugă un nod în coada cu prioritate, plasându-l în locul corect în funcție de prioritatea sa (cel mai mic număr de prioritate are prioritate mai mare).
dequeue(): Îndepărtează primul element din coadă (cel cu cea mai mică prioritate) și eliberează memoria.
display(): Afișează informațiile primului element din coadă.

Intrare și ieșire:

Programul acceptă comenzi din partea utilizatorului:
+: Adaugă o persoană în coadă.
-: Afișează persoana cu cea mai mică prioritate și o elimină din coadă.
*: Încheie programul.

Tipuri de date:

firstName și lastName: Stringuri pentru numele persoanei (maxim 30 de caractere fiecare).
age: Vârsta persoanei.
sex: Sexul persoanei (caracter, ex: 'M' pentru masculin, 'F' pentru feminin).
priority: Un număr întreg care definește prioritatea persoanei în coadă (cel mai mic număr reprezintă cea mai mare prioritate).
