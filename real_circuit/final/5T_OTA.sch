v {xschem version=3.4.8RC file_version=1.3}
G {}
K {}
V {}
S {}
F {}
E {}
N 100 -130 160 -130 {lab=#net1}
N 0 30 0 80 {lab=#net2}
N 200 30 200 80 {lab=#net2}
N 100 80 200 80 {lab=#net2}
N 0 -60 100 -60 {lab=#net1}
N 0 -100 0 -60 {lab=#net1}
N 100 -130 100 -60 {lab=#net1}
N 40 -130 100 -130 {lab=#net1}
N 0 -200 0 -130 {lab=vdd}
N 200 -200 200 -130 {lab=vdd}
N 0 -200 200 -200 {lab=vdd}
N 100 80 100 120 {lab=#net2}
N 0 80 100 80 {lab=#net2}
N -180 -200 -180 -40 {lab=vdd}
N 100 180 100 220 {lab=vss}
N -100 80 -100 150 {lab=#net3}
N -140 150 -100 150 {lab=#net3}
N -180 80 -100 80 {lab=#net3}
N -180 20 -180 80 {lab=#net3}
N -180 -200 0 -200 {lab=vdd}
N -180 220 100 220 {lab=vss}
N -240 -200 -180 -200 {lab=vdd}
N -240 220 -180 220 {lab=vss}
N -100 150 60 150 {lab=#net3}
N 200 -60 260 -60 {lab=vout}
N 200 -100 200 -60 {lab=vout}
N 0 -60 0 -30 {lab=#net1}
N 200 -60 200 -30 {lab=vout}
N 100 220 160 220 {lab=vss}
N 160 150 160 220 {lab=vss}
N 100 150 160 150 {lab=vss}
N -50 0 -40 0 {lab=vinp}
N 240 0 250 0 {lab=vinn}
N -180 80 -180 120 {lab=#net3}
N -180 150 -180 220 {lab=vss}
N 160 0 200 0 {lab=vss}
N 160 0 160 150 {lab=vss}
N 0 0 160 0 {lab=vss}
C {sg13g2_pr/sg13_hv_nmos.sym} -20 0 0 0 {name=M1
l=4u
w=5.75u
ng=4
m=1
model=sg13_hv_nmos
spiceprefix=X
}
C {sg13g2_pr/sg13_hv_nmos.sym} 220 0 0 1 {name=M2
l=4u
w=5.75u
ng=4
m=1
model=sg13_hv_nmos
spiceprefix=X
}
C {sg13g2_pr/sg13_hv_pmos.sym} 20 -130 0 1 {name=M3
l=4u
w=5.16u
ng=6
m=1
model=sg13_hv_pmos
spiceprefix=X
}
C {sg13g2_pr/sg13_hv_pmos.sym} 180 -130 0 0 {name=M4
l=4u
w=5.16u
ng=6
m=1
model=sg13_hv_pmos
spiceprefix=X
}
C {sg13g2_pr/sg13_hv_nmos.sym} 80 150 0 0 {name=M5
l=4u
w=4u
ng=4
m=1
model=sg13_hv_nmos
spiceprefix=X
}
C {sg13g2_pr/sg13_hv_nmos.sym} -160 150 0 1 {name=M6
l=4u
w=3.9u
ng=5
m=1
model=sg13_hv_nmos
spiceprefix=X
}
C {isource.sym} -180 -10 0 0 {name=I0 value=6.5uA}
C {devices/opin.sym} 260 -60 0 0 {name=p6 lab=vout}
C {devices/iopin.sym} -240 -200 0 1 {name=p2 lab=vdd}
C {devices/iopin.sym} -240 220 0 1 {name=p3 lab=vss}
C {devices/ipin.sym} -50 0 0 0 {name=p4 lab=vinp}
C {devices/ipin.sym} 250 0 2 0 {name=p5 lab=vinn}
