USE instrumente IN 1
USE administratieMagazine IN 2

DEFINE MENU meniuPrinc
DEFINE PAD a OF meniuPrinc PROMPT '                     -> ACTUALIZARE <-                          '
DEFINE PAD b OF meniuPrinc PROMPT '                       -> OPTIUNI <-                            '
DEFINE PAD c OF meniuPrinc PROMPT '                  -> CATEGORII PRODUSE <-                       '
DEFINE PAD d OF meniuPrinc PROMPT '                       -> AJUTOR! <-                            '

DEFINE POPUP meniuV1
DEFINE BAR 1 OF meniuV1 PROMPT '                               # ADAUGARE #                   '
DEFINE BAR 2 OF meniuV1 PROMPT '                               # STERGERE #                         '
DEFINE BAR 3 OF meniuV1 PROMPT '                              # MODIFICARE #                          '
DEFINE BAR 4 OF meniuV1 PROMPT '                               # AFISARE #                            '

DEFINE POPUP meniuV2 
DEFINE BAR 1 OF meniuV2 PROMPT ' { CEL MAI SCUMP PRODUS }                              '
DEFINE BAR 2 OF meniuV2 PROMPT ' { CEL MAI IEFTIN PRODUS }'
DEFINE BAR 3 OF meniuV2 PROMPT ' { ORDONARE PRET PRODUSE }'
DEFINE BAR 4 OF meniuV2 PROMPT ' { ORDONARE IN ORDINE ALFABETICA }'
DEFINE BAR 5 OF meniuV2 PROMPT ' { CEL MAI LIMITAT STOC SI PRODUSUL }'
DEFINE BAR 6 OF meniuV2 PROMPT ' { CEL MAI MARE STOC SI PRODUSUL }'
DEFINE BAR 7 OF meniuV2 PROMPT ' { PRODUSE IN STOC } '

DEFINE POPUP meniuV3
DEFINE BAR 1 OF meniuV3 PROMPT '    INSTRUMENTE CU COARDE                                   '
DEFINE BAR 2 OF meniuV3 PROMPT '    INSTRUMENTE DE PERCUTIE  '
DEFINE BAR 3 OF meniuV3 PROMPT '    INSTRUMENTE CU CLAPE  '
DEFINE BAR 4 OF meniuV3 PROMPT '    INSTRUMENTE CU ARCUS  '
DEFINE BAR 5 OF meniuV3 PROMPT '    INSTRUMENTE DE SUFLAT  '
DEFINE BAR 6 OF meniuV3 PROMPT '    ACCESORII  '

DEFINE POPUP meniuV4 
DEFINE BAR 1 OF meniuV4 PROMPT '  §  INFORMATII  §                                  '
DEFINE BAR 2 OF meniuV4 PROMPT '  §  IESIRE  §  '

DEFINE POPUP meniuV20
DEFINE BAR 1 OF meniuV20 PROMPT '    In stoc     '
DEFINE BAR 2 OF meniuV20 PROMPT '    Toate       '

DEFINE POPUP meniuV21
DEFINE BAR 1 OF meniuV21 PROMPT '    In stoc     '
DEFINE BAR 2 OF meniuV21 PROMPT '    Toate       '

DEFINE POPUP meniuV22
DEFINE BAR 1 OF meniuV22 PROMPT '    In stoc     '
DEFINE BAR 2 OF meniuV22 PROMPT '    Toate       '


ON SELECTION PAD a OF meniuPrinc activate popup meniuV1 at 1,0
ON SELECTION PAD b OF meniuPrinc activate popup meniuV2 at 1,45
ON SELECTION PAD c OF meniuPrinc activate popup meniuV3 at 1,86.5
ON SELECTION PAD d OF meniuPrinc activate popup meniuV4 at 1,135

DEFINE popup meniuV5
DEFINE BAR 1 OF meniuV5 PROMPT ' #  INSTRUMENTE  #                '
DEFINE BAR 2 OF meniuV5 PROMPT ' #  INREGISTRARI  #               ' 

ON SELECTION BAR 1 OF meniuV1 activate popup meniuV5 at 1,44.8

DEFINE POPUP meniuV6
DEFINE BAR 1 OF meniuV6 PROMPT ' # INSTRUMENTE #                  '
DEFINE BAR 2 OF meniuV6 PROMPT ' # INREGISTRARI #                 '

ON SELECTION BAR 2 OF meniuV1 activate popup meniuV6 at 2.2,44.8

DEFINE POPUP meniuV7
DEFINE BAR 1 OF meniuV7 PROMPT ' # INSTRUMENTE #                  '
DEFINE BAR 2 OF meniuV7 PROMPT ' # INREGISTRARI #                 '

ON SELECTION BAR 3 OF meniuV1 activate popup meniuV7 at 3.5,44.8

DEFINE POPUP meniuV8
DEFINE BAR 1 OF meniuV8 PROMPT ' # INSTRUMENTE #                  '
DEFINE BAR 2 OF meniuV8 PROMPT ' # INREGISTRARI #                 '

ON SELECTION BAR 4 OF meniuV1 activate popup meniuV8 at 4.5,44.8

DEFINE POPUP meniuV9
DEFINE BAR 1 OF meniuV9 PROMPT ' { CRESCATOR }                    '
DEFINE BAR 2 OF meniuV9 PROMPT ' { DESCRESCATOR }                 '

ON SELECTION BAR 3 OF meniuV2 activate popup meniuV9 at 3.8,86

DEFINE POPUP meniuV10
DEFINE BAR 1 OF meniuV10 PROMPT ' { PRODUSE }                     '
DEFINE BAR 2 OF meniuV10 PROMPT ' { INREGISTRARI - MAGAZINE }     '

ON SELECTION BAR 4 OF meniuV2 activate popup meniuV10 at 4.8,86

DEFINE POPUP meniuV12
DEFINE BAR 1 OF meniuV12 PROMPT ' { CRESCATOR }                   '
DEFINE BAR 2 OF meniuV12 PROMPT ' { DESCRESCATOR }                '

DEFINE POPUP meniuV13
DEFINE BAR 1 OF meniuV13 PROMPT ' { CRESCATOR }                   '
DEFINE BAR 2 OF meniuV13 PROMPT ' { DESCRESCATOR } '

DEFINE POPUP meniuV23
DEFINE BAR 1 OF meniuV23 PROMPT '   IN STOC        '
DEFINE BAR 2 OF meniuV23 PROMPT '   STOC : 0       '


ON SELECTION BAR 1 OF meniuV10 activate popup meniuV12 at 4.8,86
ON SELECTION BAR 2 OF meniuV10 activate popup meniuV13 at 6.1,86

ON SELECTION BAR 1 OF meniuV3 activate popup meniuV20 at 1,134
ON SELECTION BAR 2 OF meniuV3 activate popup meniuV21 at 2,134
ON SELECTION BAR 5 OF meniuV3 activate popup meniuV23 at 5.5,134
ON SELECTION BAR 6 OF meniuV3 activate popup meniuV22 at 6,134

ON SELECTION BAR 1 OF meniuV5 do adaugaInstrumente
ON SELECTION BAR 2 OF meniuV5 do adaugaInregistrari

ON SELECTION BAR 1 OF meniuV6 do stergeInstrumente
ON SELECTION BAR 2 OF meniuV6 do stergeInregistrari

ON SELECTION BAR 1 OF meniuV7 do modificaInstrumente
ON SELECTION BAR 2 OF meniuV7 do modificaInregistrari

ON SELECTION BAR 1 OF meniuV8 do afisareInstrumente
ON SELECTION BAR 2 OF meniuV8 do afisareInregistrari
 
ON SELECTION BAR 1 OF meniuV2 do maximPret
ON SELECTION BAR 2 OF meniuV2 do minimPret
ON SELECTION BAR 1 OF meniuV9 do ordCresc
ON SELECTION BAR 2 OF meniuV9 do ordDescresc
ON SELECTION BAR 1 OF meniuV12 do ordAlfaCresc
ON SELECTION BAR 2 OF meniuV12 do ordAlfaDescresc
ON SELECTION BAR 1 OF meniuV13 do ordMagCresc
ON SELECTION BAR 2 OF meniuV13 do ordMagDescresc
ON SELECTION BAR 5 OF meniuV2 do limitaStoc
ON SELECTION BAR 6 OF meniuV2 do maxStoc
ON SELECTION BAR 7 OF meniuV2 do stocus

ON SELECTION BAR 1 OF meniuV20 do afisCoarde
ON SELECTION BAR 2 OF meniuV20 do afistoatecoarde
ON SELECTION BAR 1 OF meniuV21 do afisPercutie
ON SELECTION BAR 2 OF meniuV21 do afistoatepercutie
ON SELECTION BAR 3 OF meniuV3 do afisareClape
ON SELECTION BAR 4 OF meniuV3 do afisareArcus
ON SELECTION BAR 1 OF meniuV23 do afisSuflat
ON SELECTION BAR 2 OF meniuV23 do afisZeroSuflat
ON SELECTION BAR 1 OF meniuV22 do afisAccesorii
ON SELECTION BAR 2 OF meniuV22 do afistoateAccesorii

ON SELECTION BAR 1 OF meniuV4 do informatiileMele
ON SELECTION BAR 2 OF meniuV4 do iesire

ACTIVATE MENU meniuPrinc


PROCEDURE adaugaInstrumente
SELECT  1
APPEND 
RETURN

PROCEDURE stergeInstrumente
SELECT  1
DELETE ALL 
RETURN

PROCEDURE modificaInstrumente
SELECT 1
APPEND 
RETURN

PROCEDURE afisareInstrumente
SELECT 1
BROWSE 
RETURN

PROCEDURE adaugaInregistrari
SELECT  2
APPEND 
RETURN

PROCEDURE stergeInregistrari
SELECT  2 
DELETE ALL  
RETURN

PROCEDURE modificaInregistrari
SELECT  2
APPEND 
RETURN

PROCEDURE afisareInregistrari
SELECT  2
BROWSE  
RETURN

PROCEDURE maximPret
SELECT 1
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
CALCULATE MAX(pretul) TO x
SCAN
	IF pretul = x 
		y = nr_cod
	ENDIF
ENDSCAN 
LIST (denumire) for pretul = x
?' '
?'                 UNDE SE GASESTE?'
?' '
	
SELECT 2
LIST denumire for y = cod_instr
LIST adresa for y = cod_instr 
LIST stoc for y = cod_instr
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
RETURN

PROCEDURE minimPret
SELECT 1
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
CALCULATE MIN(pretul) TO x
SCAN
	IF pretul = x 
		y = nr_cod
	ENDIF
ENDSCAN 
LIST (denumire) for pretul = x
?' '
?'                 UNDE SE GASESTE?'
?' '
SELECT 2    
LIST denumire for y = cod_instr
LIST adresa for y = cod_instr
LIST stoc for y = cod_instr  
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
return

PROCEDURE ordCresc
SELECT 1
SORT ON pretul TO ordine
USE ordine IN 3
SELECT 3
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
LIST
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
return

PROCEDURE ordDescresc
SELECT 1
SORT ON pretul TO Nonordine desc
USE Nonordine IN 4
SELECT 4
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
LIST
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
return

PROCEDURE ordAlfaCresc
SELECT 1
SORT ON denumire TO ord 
USE ord IN 5
SELECT 5
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
list
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
RETURN


PROCEDURE ordAlfaDescresc
SELECT 1
SORT ON denumire TO dezord desc
USE dezord IN 6
SELECT 6
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
list
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
RETURN

PROCEDURE ordMagCresc
SELECT 2
SORT ON denumire TO orz
USE orz IN 7
SELECT 7
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
list
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
RETURN

PROCEDURE ordMagDescresc
SELECT 2
SORT ON denumire TO orzz desc
USE orzz IN 8
SELECT 8
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
list
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
RETURN


PROCEDURE limitaStoc
SELECT 2
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
SORT ON stoc TO elim
USE elim IN 12
SELECT 12
RECALL all
DELETE FOR stoc = 0
PACK
RECALL all 
CALCULATE MIN(stoc) TO s
?''
?'          MAGAZIN : '
LIST denumire for stoc = s
SCAN
	IF stoc = s 
		j = cod_instr
	ENDIF
ENDSCAN
SELECT 1
?' '
?'          PRODUSUL : '
?' '
LIST denumire for nr_cod = j
LIST culoare for nr_cod = j
LIST pretul for nr_cod = j
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
RETURN


PROCEDURE afisZeroSuflat
SELECT 2
SORT ON stoc TO ordinal
USE ordinal IN 30
SELECT 30
RECALL ALL 
DELETE FOR stoc>0  
PACK
SCAN 
	y = cod_instr
	SELECT 1
		LIST for tip = 'de suflat' AND y = nr_cod
ENDSCAN 
RETURN 




PROCEDURE maxStoc
SELECT 2
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
CALCULATE MAX(stoc) TO t
?''
?'          MAGAZIN : '
LIST denumire for stoc = t
SCAN
	IF stoc = t 
		z = cod_instr
	ENDIF
ENDSCAN
SELECT 1
?' '
?'          PRODUSUL : '
?' '
LIST denumire for nr_cod = z
LIST culoare for nr_cod = z
LIST pretul for nr_cod = z
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
RETURN

PROCEDURE afisCoarde
SELECT 2
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
SCAN 
	IF (stoc > 0)  
		y = cod_instr
	ENDIF 
	SELECT 1
		LIST denumire for tip = 'cu coarde' AND nr_cod = y
		
ENDSCAN
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
RETURN

PROCEDURE afistoatecoarde
SELECT 1
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
		LIST denumire for tip = 'cu coarde' 
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
RETURN

PROCEDURE afisAccesorii
SELECT 2
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
SCAN 
	IF (stoc > 0)  
		y = cod_instr
	ENDIF 
	SELECT 1
		LIST denumire for tip = 'accesorii' AND nr_cod = y
		
ENDSCAN
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
RETURN

PROCEDURE afistoateAccesorii
SELECT 1
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
		LIST denumire for tip = 'accesorii' 
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
RETURN

PROCEDURE afisPercutie
SELECT 2
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
SCAN 
	IF (stoc > 0)  
		y = cod_instr
	ENDIF 
	SELECT 1
		LIST denumire for tip = 'percutie' AND nr_cod = y
		
ENDSCAN
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
RETURN

PROCEDURE afistoatepercutie
SELECT 1
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
		LIST denumire for tip = 'percutie' 
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
RETURN

PROCEDURE afisareClape
SELECT 1
BROWSE FOR tip = 'cu clape'
RETURN

PROCEDURE afisareArcus
SELECT 1
BROWSE FOR tip = 'cu arcus'
RETURN

PROCEDURE afisSuflat
SELECT 2
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
SCAN 
	IF (stoc > 0)  
		y = cod_instr
	ENDIF 
	SELECT 1
		LIST denumire for tip = 'de suflat' AND nr_cod = y
		
ENDSCAN
?'----------------------------------------------------------------------------------------------------------------------------------------------------------------'
RETURN

PROCEDURE afisareSuflat
SELECT 1
BROWSE FOR tip = 'de suflat'
RETURN

PROCEDURE afisareAccesorii
SELECT 1
BROWSE FOR tip = 'accesorii'
RETURN

PROCEDURE afisarePercutie
SELECT 1
BROWSE FOR tip = 'percutie'
RETURN

PROCEDURE informatiileMele
?''
?'                             ------------------  ATESTAT - INFORMATICA  ------------------  '
?' '
?'       __________________MAGAZIN DE INSTRUMENTE MUZICALE__________________'
?'                          	   			de CATANA DOMINIC COSTIN'
?'  --------------------------------------------------------------------------------------------------------------------------------------'
?'                               LICEUL TEORETIC "MIHAI EMINESCU" CALARASI  '
?'                                                           MAI, 2016'


RETURN 

PROCEDURE stocus
SELECT 2
SCAN
SELECT 2
	IF stoc > 0 then
		y=cod_instr
	SELECT 1
		LIST denumire for y = nr_cod
	ENDIF
ENDSCAN  		


RETURN 




PROCEDURE iesire
QUIT 
RETURN





