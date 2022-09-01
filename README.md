# Title: applicaition name
This is a readme file for a simple molecular dynamics (MD) program 
for Lennard-Jones potential.
## Problem description
Only needed is C compiler.
## Simulation method, algorithms
If the C compiler on your computer is cc (also common is gcc for Gnu C 
compiler), type:
cc -O -o md md.c -lm
This will create an executable named md. To run the executable, type:
./md < md.in
## Expected Results
The following files are included in this folder, in addition to this readme 
file, readme.md.
<ul>
<li>md.c: Main C program</li>
<li>md.h: Header file for md.c</li>
<li>md.in: Input parameter file (to be redirected to the standard input)</li>
</ul>
![Screen shot of MD simulation](ScreenShot.png)
