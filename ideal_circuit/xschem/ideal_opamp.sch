v {xschem version=3.4.8RC file_version=1.3}
G {}
K {}
V {}
S {}
F {}
E {}
N -70 30 -40 30 {lab=Vinp}
N -70 -10 -40 -10 {lab=Vinm}
N 0 40 0 50 {lab=GND}
N 0 -30 0 -20 {lab=Out}
N -0 -30 40 -30 {lab=Out}
C {ipin.sym} -70 -10 0 0 {name=p1 lab=Vinm}
C {ipin.sym} -70 30 0 0 {name=p2 lab=Vinp}
C {vcvs.sym} 0 10 0 0 {name=E1 value=1000}
C {gnd.sym} 0 50 0 0 {name=l1 lab=GND}
C {opin.sym} 40 -30 0 0 {name=p3 lab=Out}
