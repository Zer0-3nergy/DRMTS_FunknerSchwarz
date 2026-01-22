v {xschem version=3.4.8RC file_version=1.3}
G {}
K {}
V {}
S {}
F {}
E {}
N -70 -30 -50 -30 {lab=OUT}
N -120 20 -120 30 {lab=Vss}
N -70 30 -70 40 {lab=GND}
N -120 -10 -120 -0 {lab=Vdd}
N -170 0 -160 0 {lab=IN}
C {ipin.sym} -170 0 0 0 {name=p1 lab=IN}
C {opin.sym} -50 -30 0 0 {name=p4 lab=OUT}
C {vsource.sym} -70 0 0 0 {name=B1 value="V=v(in)>v(vdd)/2?v(vss):v(vdd)" savecurrent=false}
C {gnd.sym} -70 40 0 0 {name=l1 lab=GND}
C {iopin.sym} -120 -10 3 0 {name=p2 lab=Vdd}
C {iopin.sym} -120 30 1 0 {name=p3 lab=Vss}
