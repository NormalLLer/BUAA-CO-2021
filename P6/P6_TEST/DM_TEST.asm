ori $30, $0, 256
ori $1, $0, 0x1234
lui $2, 0x5678
addu $3, $1, $2
ori $4, $0, 0x98a1
lui $5, 0xb2c3
addu $6, $4, $5
ori $15, $0, 4
sw $3, 4($15)
sw $6, 8($15)
lw $21, 4($15)
addu $31, $21, $30
lbu $21, 4($15)
addu $31, $21, $30
lbu $21, 5($15)
addu $31, $21, $30
lbu $21, 6($15)
addu $31, $21, $30
lbu $21, 8($15)
addu $31, $21, $30
lbu $21, 9($15)
addu $31, $21, $30
lbu $21, 6($15)
addu $31, $21, $30
lbu $21, 8($15)
addu $31, $21, $30
lbu $21, 10($15)
addu $31, $21, $30
sb $6, 0($15)
sb $6, 1($15)
sb $6, 2($15)
sb $6, 3($15)
sh $6, 12($15)
sh $6, 14($15)
lw $25, 0($15)
lw $25, 4($15)
lw $25, 8($15)
lw $25, 12($15)
