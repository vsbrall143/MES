	AREA SUMINT,CODE,READONLY
ENTRY
	MOV R0,#10
	MOV R1,R0
LOOP SUBS R1,R1,#1
	CMP R1,#0
	BEQ STOP
	ADD R2,R0,R1
	MOV R0,R2
	BNE LOOP
STOP B STOP
	END