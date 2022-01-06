program nou;
var stiva:array[1..20] of integer;
    n,nrsol,k:integer;

procedure init(k:integer);
begin
     stiva[k]:=0;
end;

function next(k:integer):boolean;
begin
     if stiva[k]<n then
     begin
          stiva[k]:=stiva[k]+1;
          next:=true;
     end
     else
         next:=false;
end;

function valid(k:integer):boolean;
var i:integer;
begin
     valid:=true;
     for i:=1 to k-1 do
     begin
          if stiva[k]=stiva[i] then
             valid:=false;
     end;
end;

function solutie(k:integer):boolean;
begin
     solutie:=false;
     if (k=n) then
        solutie:=true;
end;

procedure print;
var i:integer;
begin
     for i:=1 to n do
         write(stiva[i]);
     writeln;
end;

begin
write('dati n=');
readln(n);
k:=1;
init(k);
while k>0 do
begin
     while next(k) do
     begin
          if  valid(k) then
          begin
               if solutie(k) then
                  print
               else
               begin
                    k:=k+1;
                    init(k);
               end;
           end;
     end;
     k:=k-1;
end;
readln;
readln;
end.
