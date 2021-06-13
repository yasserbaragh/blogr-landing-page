#include <stdio..h>
#include <studlib.h>

int main() {
    int val;
    int i,c;
    ip = &val
    file = *ffichier;
}

int remplirFic (get_string nom; int n;) {
    int i, x;
    rand()
    fichier * = nom;
    for (i = 1; i < n-1; i++) {
        printf(ficher.rand(20));
    }
}

int chargerfichier (get_string nom; int *p;) {
    int x, cmp;
    int *tmp;
    file * = nom;
    if(!eof(file)) {
        cmp = 1;
        *p = cmp;
        printf(file, x); p^.val = x;
        p^suiv = nil; tmp = p;
        while(!eof(file)) {
            new(tmp*.suiv);
            printf(file,x);
            cmp = cmp+1;
            
        }
    }
}

4 -
int nombre livr(int matbook,  int p*) {
    file * = matbook;
    if  (matbook = 0) {
        return false
    } else (
        true
    )

}

{3} Procedure affiche(p:pointer;n:Integer);
Var
  i: Integer;
Begin
  For i:=1 To n Do
    Begin
      //blue);
      Write('[',i,']');
      //red);
      Writeln('valeur : ',p^.i,'      ','lign : ',p^.l,'      ','colonne : ',p^.c);
      p := p^.suivant;
    End;
  Writeln('cliquez pour continue');
  Readln;
End;
	Function contenu( p:pointer;n:Integer): Integer;
Var
  x: pointer;
  y,z,v,i: Integer;
Begin
  x := p;
  i := 0;
  While (n > i*i) Do
    i := i+1;
  //blue);
  Writeln('entre la lign');
  Readln(y);
  Writeln('entre la colonne');
  Readln(z);
  If (y<=i) And (z<=i) And (y<>0) And (z<>0) Then
    Begin
      While (x^.l<>y) Or (x^.c<>z) And (x^.suivant<>Nil) Do
        Begin
          x := x^.suivant;
        End;
    End;
  If (x^.l=y) And (x^.c=z) Then
    Begin
      contenu := x^.i;
      Writeln('valeur de la case  ',x^.l,',',x^.c,' c''est : ',x^.i);
    End
  Else Writeln('error');
  //red);
  Writeln('cliquez pour continue');
  Readln;
End;Function contenu( p:pointer;n:Integer): Integer;
Var
  x: pointer;
  y,z,v,i: Integer;
Begin
  x := p;
  i := 0;
  While (n > i*i) Do
    i := i+1;
  //blue);
  Writeln('entre la lign');
  Readln(y);
  Writeln('entre la colonne');
  Readln(z);
  If (y<=i) And (z<=i) And (y<>0) And (z<>0) Then
    Begin
      While (x^.l<>y) Or (x^.c<>z) And (x^.suivant<>Nil) Do
        Begin
          x := x^.suivant;
        End;
    End;
  If (x^.l=y) And (x^.c=z) Then
    Begin
      contenu := x^.i;
      Writeln('valeur de la case  ',x^.l,',',x^.c,' c''est : ',x^.i);
    End
  Else Writeln('error');
  //red);
  Writeln('cliquez pour continue');
  Readln;
End;

Begin

			  New(x);
				  v := x;
	Repeat
    Clrscr;
    Writeln('  1 :  afficher les livres                           ');
    Writeln('  2 : charger le fichier dans un listee                ');
    Writeln('  3 : afficher les listee              ');
    Writeln('  4             ');
    Writeln('  5:               ');
    Writeln('  0: EXIT                                            ');
		Write('choisissez un nombre dans cet intervalle  : ');
    Readln(e);
		Case e Of
			    0: Exit;
    End;
  Until False;
  Readln;
End.