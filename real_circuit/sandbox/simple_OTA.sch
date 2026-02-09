v {xschem version=3.4.8RC file_version=1.3}
G {}
K {}
V {}
S {}
F {}
E {}
N 0 -130 60 -130 {lab=#net1}
N -100 30 -100 80 {lab=#net2}
N 100 30 100 80 {lab=#net2}
N 0 80 100 80 {lab=#net2}
N -100 -60 -0 -60 {lab=#net1}
N -100 -100 -100 -60 {lab=#net1}
N 0 -130 0 -60 {lab=#net1}
N -60 -130 0 -130 {lab=#net1}
N -100 -200 -100 -130 {lab=vdd}
N 100 -200 100 -130 {lab=vdd}
N -100 -200 100 -200 {lab=vdd}
N 0 80 0 120 {lab=#net2}
N -100 80 0 80 {lab=#net2}
N -280 -200 -280 -40 {lab=vdd}
N -0 180 0 220 {lab=vss}
N -200 80 -200 150 {lab=#net3}
N -240 150 -200 150 {lab=#net3}
N -280 80 -200 80 {lab=#net3}
N -280 20 -280 80 {lab=#net3}
N -280 -200 -100 -200 {lab=vdd}
N -280 220 0 220 {lab=vss}
N -340 -200 -280 -200 {lab=vdd}
N -340 220 -280 220 {lab=vss}
N -200 150 -40 150 {lab=#net3}
N 100 -60 160 -60 {lab=vout}
N 100 -100 100 -60 {lab=vout}
N -100 -60 -100 -30 {lab=#net1}
N 100 -60 100 -30 {lab=vout}
N -0 220 60 220 {lab=vss}
N 60 150 60 220 {lab=vss}
N -0 150 60 150 {lab=vss}
N -150 -0 -140 -0 {lab=vinp}
N 140 -0 150 0 {lab=vinn}
N -280 80 -280 120 {lab=#net3}
N -280 150 -280 220 {lab=vss}
N 60 0 100 0 {lab=vss}
N 60 0 60 150 {lab=vss}
N -100 -0 60 0 {lab=vss}
C {sg13g2_pr/sg13_hv_nmos.sym} -120 0 0 0 {name=M1
l=4u
w=5.75u
ng=4
m=1
model=sg13_hv_nmos
spiceprefix=X
}
C {sg13g2_pr/sg13_hv_nmos.sym} 120 0 0 1 {name=M2
l=4u
w=5.75u
ng=4
m=1
model=sg13_hv_nmos
spiceprefix=X
}
C {sg13g2_pr/sg13_hv_pmos.sym} -80 -130 0 1 {name=M3
l=4u
w=5.16u
ng=6
m=1
model=sg13_hv_pmos
spiceprefix=X
}
C {sg13g2_pr/sg13_hv_pmos.sym} 80 -130 0 0 {name=M4
l=4u
w=5.16u
ng=6
m=1
model=sg13_hv_pmos
spiceprefix=X
}
C {sg13g2_pr/sg13_hv_nmos.sym} -20 150 0 0 {name=M5
l=4u
w=4u
ng=4
m=1
model=sg13_hv_nmos
spiceprefix=X
}
C {sg13g2_pr/sg13_hv_nmos.sym} -260 150 0 1 {name=M6
l=4u
w=3.9u
ng=5
m=1
model=sg13_hv_nmos
spiceprefix=X
}
C {isource.sym} -280 -10 0 0 {name=I0 value=6.5uA}
C {devices/opin.sym} 160 -60 0 0 {name=p6 lab=vout}
C {devices/iopin.sym} -340 -200 0 1 {name=p2 lab=vdd}
C {devices/iopin.sym} -340 220 0 1 {name=p3 lab=vss}
C {devices/ipin.sym} -150 0 0 0 {name=p4 lab=vinp}
C {devices/ipin.sym} 150 0 2 0 {name=p5 lab=vinn}
