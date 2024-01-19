
.text
 addi  $1,$0,-1
 slt  $3,$1,$0
 slt  $3,$0,$1
 add   $v0,$0,10         # exit 
 syscall                 # we are out of here.  
