v {xschem version=3.4.8RC file_version=1.3}
G {}
K {}
V {}
S {}
F {}
E {}
N -100 70 -0 70 {lab=IN}
N -100 -0 -100 70 {lab=IN}
N -100 -70 -0 -70 {lab=IN}
N 30 70 100 70 {lab=OUT}
N 100 -0 100 70 {lab=OUT}
N 30 -70 100 -70 {lab=OUT}
N 0 -150 0 -110 {lab=+CONTROL}
N 0 110 0 150 {lab=-CONTROL}
N -140 -0 -100 -0 {lab=IN}
N -100 -70 -100 -0 {lab=IN}
N 100 -0 140 0 {lab=OUT}
N 100 -70 100 -0 {lab=OUT}
C {sg13g2_pr/sg13_hv_pmos.sym} 0 90 3 0 {name=M1
l=0.4u
w=3u
ng=1
m=1
model=sg13_hv_pmos
spiceprefix=X
}
C {sg13g2_pr/sg13_hv_nmos.sym} 0 -90 1 0 {name=M2
l=0.45u
w=1u
ng=1
m=1
model=sg13_hv_nmos
spiceprefix=X
}
C {ipin.sym} -140 0 0 0 {name=p3 lab=IN}
C {opin.sym} 140 0 0 0 {name=p4 lab=OUT}
C {iopin.sym} 0 -150 3 0 {name=p1 lab=+CONTROL}
C {iopin.sym} 0 150 1 0 {name=p2 lab=-CONTROL}
