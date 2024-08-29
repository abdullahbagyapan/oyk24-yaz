# ÖYK2024 Yaz - Cryptography and Reverse Engineering

## Cryptographic Network Protocols

Authentication

Authorization
Access Control
-- RBAC (Role based access control)

Mediated Authentication
-- Otway Rees (MIT Kerberos/LDAP)
-- Kerberos (Active Directory)

SSL/TLS

Server impersonation

Client impersonation

MITM

Lamport's Hash

Reflection Attack

KDC (Key distribution center)

Charlie Kaufman - Private communication in a public world

Needham Schroeder


#### After Lunch Break ####


X.509


## Compiler, Linker & Loader

ELF file (https://en.wikipedia.org/wiki/Executable_and_Linkable_Format)

xxd /bin/ls | head 

00000000: 7f45 4c46 0201 0100 0000 0000 0000 0000  .ELF............

magic number: 0x7F

(https://upload.wikimedia.org/wikipedia/commons/e/e4/ELF_Executable_and_Linkable_Format_diagram_by_Ange_Albertini.png)

Tiny ELF - (https://nathanotterness.com/2021/10/tiny_elf_modernized.html)

Endianness
-- BE
-- LE

ELF - (https://www.man7.org/linux/man-pages/man5/elf.5.html)

Loader - (https://linux.die.net/man/8/ld-linux) 


-- objdump -xh /bin/ls
LOAD off    0x0000000000000000 vaddr 0x0000000000000000 paddr 0x0000000000000000 align 2**12 (align ???)


symbol table

-- objdump -d /bin/ls | less
-- dissassembly

DEF CON 26 - Christopher Domas - GOD MODE UNLOCKED Hardware Backdoors in redacted x86
(https://www.youtube.com/watch?v=jmTwlEh8L7g)



