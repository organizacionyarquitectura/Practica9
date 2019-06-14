.data
.text
loop:	beq $01 $00 end
	subi $01 $01 1
	j loop
end:	add $02 $00 $01
