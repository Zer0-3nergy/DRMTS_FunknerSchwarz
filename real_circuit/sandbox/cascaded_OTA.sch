v {xschem version=3.4.8RC file_version=1.3}
G {}
K {}
V {}
S {}
F {}
E {}
N -260 40 -260 70 {lab=#net1}
N -60 40 -60 70 {lab=#net1}
N -260 40 -160 40 {lab=#net1}
N -260 130 -260 180 {lab=#net2}
N -60 130 -60 160 {lab=#net3}
N -160 40 -60 40 {lab=#net1}
N 180 -110 180 -70 {lab=#net4}
N 380 -110 380 -70 {lab=#net5}
N 180 -200 180 -170 {lab=vdd}
N 380 -200 380 -170 {lab=vdd}
N -160 -200 180 -200 {lab=vdd}
N 180 20 180 50 {lab=+out}
N 140 20 180 20 {lab=+out}
N 180 -10 180 20 {lab=+out}
N 380 20 380 50 {lab=-out}
N 380 20 420 20 {lab=-out}
N 380 -10 380 20 {lab=-out}
N 220 -140 340 -140 {lab=Bias4}
N 220 -40 340 -40 {lab=Bias3}
N 220 80 340 80 {lab=Bias2}
N -60 160 180 160 {lab=#net3}
N 380 110 380 180 {lab=#net2}
N 180 110 180 160 {lab=#net3}
N 180 160 180 210 {lab=#net3}
N 220 240 340 240 {lab=Bias1}
N 380 180 380 210 {lab=#net2}
N 180 270 180 300 {lab=vss}
N 380 270 380 300 {lab=vss}
N -280 300 180 300 {lab=vss}
N -160 -200 -160 -100 {lab=vdd}
N -280 -200 -160 -200 {lab=vdd}
N -160 -40 -160 40 {lab=#net1}
N -20 100 20 100 {lab=-in}
N -340 100 -300 100 {lab=+in}
N -260 180 380 180 {lab=#net2}
N 180 300 380 300 {lab=vss}
N 180 -200 380 -200 {lab=vdd}
N 120 -140 180 -140 {lab=vdd}
N 380 -140 440 -140 {lab=vdd}
N 120 -40 180 -40 {lab=vdd}
N 380 -40 440 -40 {lab=vdd}
N 120 240 180 240 {lab=vss}
N 120 80 180 80 {lab=vss}
N 380 240 440 240 {lab=vss}
N 380 80 440 80 {lab=vss}
N -260 100 -60 100 {lab=vdd}
C {devices/iopin.sym} -280 -200 0 1 {name=p2 lab=vdd}
C {devices/iopin.sym} -280 300 0 1 {name=p3 lab=vss}
C {isource.sym} -160 -70 0 0 {name=I0 value=8uA}
C {devices/ipin.sym} -340 100 0 0 {name=p4 lab=+in}
C {devices/ipin.sym} 20 100 2 0 {name=p5 lab=-in}
C {devices/opin.sym} 420 20 0 0 {name=p6 lab=-out}
C {devices/opin.sym} 140 20 2 0 {name=p1 lab=+out}
C {sg13g2_pr/sg13_hv_pmos.sym} -280 100 0 0 {name=M1
l=0.4u
w=0.3u
ng=1
m=1
model=sg13_hv_pmos
spiceprefix=X
}
C {sg13g2_pr/sg13_hv_pmos.sym} -40 100 0 1 {name=M2
l=0.4u
w=0.3u
ng=1
m=1
model=sg13_hv_pmos
spiceprefix=X
}
C {sg13g2_pr/sg13_hv_pmos.sym} 200 -140 0 1 {name=M3
l=0.4u
w=0.3u
ng=1
m=1
model=sg13_hv_pmos
spiceprefix=X
}
C {sg13g2_pr/sg13_hv_pmos.sym} 360 -140 0 0 {name=M4
l=0.4u
w=0.3u
ng=1
m=1
model=sg13_hv_pmos
spiceprefix=X
}
C {sg13g2_pr/sg13_hv_pmos.sym} 200 -40 0 1 {name=M3C
l=0.4u
w=0.3u
ng=1
m=1
model=sg13_hv_pmos
spiceprefix=X
}
C {sg13g2_pr/sg13_hv_pmos.sym} 360 -40 0 0 {name=M4C
l=0.4u
w=0.3u
ng=1
m=1
model=sg13_hv_pmos
spiceprefix=X
}
C {sg13g2_pr/sg13_hv_nmos.sym} 200 80 0 1 {name=M5C
l=0.45u
w=0.3u
ng=1
m=1
model=sg13_hv_nmos
spiceprefix=X
}
C {sg13g2_pr/sg13_hv_nmos.sym} 360 80 0 0 {name=M6C
l=0.45u
w=0.3u
ng=1
m=1
model=sg13_hv_nmos
spiceprefix=X
}
C {sg13g2_pr/sg13_hv_nmos.sym} 200 240 0 1 {name=M5
l=0.45u
w=0.3u
ng=1
m=1
model=sg13_hv_nmos
spiceprefix=X
}
C {sg13g2_pr/sg13_hv_nmos.sym} 360 240 0 0 {name=M6
l=0.45u
w=0.3u
ng=1
m=1
model=sg13_hv_nmos
spiceprefix=X
}
C {vsource.sym} 500 -140 0 0 {name=VBias4 value=3 savecurrent=false}
C {gnd.sym} 500 -110 0 0 {name=l4 lab=GND}
C {lab_pin.sym} 500 -170 2 0 {name=p7 sig_type=std_logic lab=Bias4}
C {vsource.sym} 500 -40 0 0 {name=VBias3 value=3 savecurrent=false}
C {gnd.sym} 500 -10 0 0 {name=l1 lab=GND}
C {lab_pin.sym} 500 -70 2 0 {name=p8 sig_type=std_logic lab=Bias3}
C {vsource.sym} 500 80 0 0 {name=VBias2 value=3 savecurrent=false}
C {gnd.sym} 500 110 0 0 {name=l2 lab=GND}
C {lab_pin.sym} 500 50 2 0 {name=p9 sig_type=std_logic lab=Bias2}
C {vsource.sym} 500 240 0 0 {name=VBias1 value=3 savecurrent=false}
C {gnd.sym} 500 270 0 0 {name=l3 lab=GND}
C {lab_pin.sym} 500 210 2 0 {name=p10 sig_type=std_logic lab=Bias1}
C {lab_pin.sym} 280 -140 1 0 {name=p11 sig_type=std_logic lab=Bias4}
C {lab_pin.sym} 280 -40 1 0 {name=p12 sig_type=std_logic lab=Bias3}
C {lab_pin.sym} 280 80 1 0 {name=p13 sig_type=std_logic lab=Bias2}
C {lab_pin.sym} 280 240 1 0 {name=p14 sig_type=std_logic lab=Bias1}
C {lab_pin.sym} 120 -140 0 0 {name=p15 sig_type=std_logic lab=vdd
}
C {lab_pin.sym} 440 -140 2 0 {name=p16 sig_type=std_logic lab=vdd
}
C {lab_pin.sym} 120 -40 0 0 {name=p17 sig_type=std_logic lab=vdd
}
C {lab_pin.sym} 440 -40 2 0 {name=p18 sig_type=std_logic lab=vdd
}
C {lab_pin.sym} 120 240 0 0 {name=p19 sig_type=std_logic lab=vss
}
C {lab_pin.sym} 120 80 0 0 {name=p20 sig_type=std_logic lab=vss
}
C {lab_pin.sym} 440 240 2 0 {name=p21 sig_type=std_logic lab=vss
}
C {lab_pin.sym} 440 80 2 0 {name=p22 sig_type=std_logic lab=vss
}
C {lab_pin.sym} -160 100 1 0 {name=p23 sig_type=std_logic lab=vdd
}
