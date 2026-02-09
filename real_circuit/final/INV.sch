v {xschem version=3.4.8RC file_version=1.3}
G {}
K {}
V {}
S {}
F {}
E {}
N -40 0 -40 40 {lab=IN}
N 0 -100 0 -40 {lab=VDD}
N -80 0 -40 0 {lab=IN}
N -40 -40 -40 0 {lab=IN}
N 0 0 0 10 {lab=OUT}
N 0 0 100 0 {lab=OUT}
N 0 -10 0 0 {lab=OUT}
N 0 40 0 100 {lab=VSS}
C {iopin.sym} 0 -100 3 0 {name=p1 lab=VDD}
C {iopin.sym} 0 100 1 0 {name=p2 lab=VSS}
C {ipin.sym} -80 0 0 0 {name=p3 lab=IN}
C {opin.sym} 100 0 0 0 {name=p4 lab=OUT}
C {sg13g2_pr/sg13_hv_pmos.sym} -20 -40 0 0 {name=M1
l=0.6u
w=2u
ng=1
m=1
model=sg13_hv_pmos
spiceprefix=X
}
C {sg13g2_pr/sg13_hv_nmos.sym} -20 40 0 0 {name=M2
l=0.6u
w=1u
ng=1
m=1
model=sg13_hv_nmos
spiceprefix=X
}
