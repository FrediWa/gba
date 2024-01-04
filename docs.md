| Bits 31-28 (Opcode) | Bits 27-25 | Bits 24-21 | ... | Bits 0-3 |

7F123456

# Architecture
## Notes to self
- ARM7TDMI implements the ARMv4T ISA
- ARMv4T does not implement Thumb-2
- Thumb uses 16 bit instructions, ARM uses 32 bit instructions
- The GBA inits in ARM mode
### Acronyms
- CPSR: Current Program Status Register 
## CPSR
- 0-4: Operating mode
- 5: Thumb state
- 6: Fast interrupt disable (F)
- 7: Interrupt disable (I)
- 8: Geographical flag (F)
- 9: Geographical flag (I)
- 10-24: Reserve bits
- 25: Geographical flag (G)
- 26: Geographical flag (J)
- 27: Saturation flag (Q)
- 28: Overflow flag (V)
- 29: Carry flag (C)
- 30: Zero flag (Z)
- 31: Negative flag (N)

