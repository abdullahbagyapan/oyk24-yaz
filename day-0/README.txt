# ÖYK2024 Yaz - Cryptography and Reverse Engineering

base10 - base2 (binary) / Representation of number

Alan Turing

Enigma Machine

Automata Theory

Encoding - Decoding / Same data, different representation of data

Base64 encoding

Hash function

Why does MD5 is not currently in use ?

Why we need hexadecimal base ?

Bit - Binary Digit

Nibble - half-byte (4 bit)

Von Neumann Architecture

What is the difference between register and cache

x86 Registers

GPR - General Purpose Registers

(https://en.wikibooks.org/wiki/X86_Assembly/X86_Architecture) - The list of registers based on x86

Code Segment - (https://en.wikipedia.org/wiki/Code_segment)

Opcode (operation code) - Bytecode - Machine code

Is PC(Program Counter) is same as IP(Instruction Pointer) ?






#### After Lunch Break ####

# Introduction to Cryptography

Lecture: Dr. Metin Evrim Ulu




Public Key Crypto
- PKI
- CA
- X509

Homomorphic Encryption - Computing on encrypted data
- Partially HE
- Fully HE

Symmetric Encryption

Asymmetric Encryption

Elliptic Curves
- KEX, Digital Sign.

Digital Signature

Side Channel Attack

Hash Function

Quantum Cryptography
- Quantum
- Post Quantum

Pseudorandomness

Rafail Ostrovsky - cryptographer

Multiparty Computation
Zero knowledge

Coding Theory
- error correction
- reed solomon

Abstract Algebra
Galois Theory
Finite Fields & Applications
Linear Algebra
Complex Analysis

LFSR - Stream Cipher
Block Cipher


## Abstract Algebra

Group - Ring (division ring, factorization domain) - Field
Monoid Semigroup

(https://en.wikipedia.org/wiki/Group_(mathematics))

Group:

Ring:
- Inverse exists for some element

Field:
- Inverse exists for each element

Cardinality

Division Ring:
- Division ends in finite steps

Unique Factorization Domain

Number Theory - Number Field

Gauss Integer

Polynomial Ring

Transcendental Number

Finite Field

Prime Field

Kök 2 neden rasyonel değil ??

Irreducible Polynomials




-----------------------------------

## Homework & Researches

Why does MD5 is not currently in use ?

--- In 1993, Den Boer and Bosselaers gave an early, although limited, result of finding a "pseudo-collision" of the MD5 compression function; that is, two different initialization vectors that produce an identical digest.
--- In 1996, Dobbertin announced a collision of the compression function of MD5 (Dobbertin, 1996). While this was not an attack on the full MD5 hash function, it was close enough for cryptographers to recommend switching to a replacement, such as SHA-1 (also compromised since) or RIPEMD-160. 
--- In 2005 the ability for an attacker to generate colliding x.509 certificates was demonstrated
--- In 2008, researchers demonstrated the practical vulnerability of Public Key Infrastructures (PKI) to such attacks, including the construction of an SSL certificate that allows an attacker to impersonate a trusted root Certificate Authority (CA). 

Birthday Attack ?

Preimage Attack ?

Hash Function must provide below:
- Resistance to preimages: given x, it is infeasible to find m such that MD5(m) = x.
- Resistance to second-preimages: given m, it is infeasible to find m' distinct from m and such that MD5(m) = MD5(m').
- Resistance to collisions: it is infeasible to find m and m', distinct from each other, and such that MD5(m) = MD5(m').


Why we need hexadecimal base ?

- hexadecimal.webp




