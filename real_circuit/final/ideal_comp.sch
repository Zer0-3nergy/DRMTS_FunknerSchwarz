v {xschem version=3.4.8RC file_version=1.3}
G {}
K {}
V {}
S {}
F {}
E {}
N -290 -20 -250 -20 {lab=GND}
N -290 -30 -290 -20 {lab=GND}
N 30 150 70 150 {lab=GND}
N 30 140 30 150 {lab=GND}
N -250 60 -170 60 {lab=diff}
N -250 60 -250 90 {lab=diff}
N -40 60 -40 90 {lab=sample}
N -110 60 -40 60 {lab=sample}
N 30 60 30 100 {lab=sample}
N -40 60 30 60 {lab=sample}
N 70 60 70 90 {lab=#net1}
N 70 60 120 60 {lab=#net1}
N 230 60 230 90 {lab=hold}
N 180 60 230 60 {lab=hold}
N -170 -100 -160 -100 {lab=Vout}
N -170 -100 -170 -80 {lab=Vout}
C {vcvs.sym} -250 -50 0 0 {name=Etp value=0.5
}
C {gnd.sym} -250 -20 0 0 {name=l2 lab=GND}
C {lab_pin.sym} -250 -80 1 0 {name=p1 sig_type=std_logic lab=tp}
C {vcvs.sym} -250 120 0 0 {name=E1 value=1
}
C {vcvs.sym} 70 120 0 0 {name=E2 value=1
}
C {gnd.sym} -250 150 0 0 {name=l1 lab=GND}
C {gnd.sym} 70 150 0 0 {name=l3 lab=GND}
C {ipin.sym} -290 100 0 0 {name=p2 lab=Vinp}
C {ipin.sym} -290 140 0 0 {name=p3 lab=Vinm}
C {capa.sym} -40 120 0 0 {name=C1
m=1
value=100p
footprint=1206
device="ceramic capacitor"}
C {capa.sym} 230 120 0 0 {name=C2
m=1
value=100p
footprint=1206
device="ceramic capacitor"}
C {gnd.sym} -40 150 0 0 {name=l4 lab=GND}
C {gnd.sym} 230 150 0 0 {name=l5 lab=GND}
C {ipin.sym} -290 -70 0 0 {name=p4 lab=Vdd}
C {switch_ngspice.sym} -140 60 3 0 {name=S1 model=SW1
device_model=".MODEL SW1 SW 
+ VT=0.9 VH=0.01
+ RON=0.01 ROFF=10G "}
C {lab_pin.sym} -140 100 3 0 {name=p5 sig_type=std_logic lab=tp}
C {ipin.sym} -290 60 0 0 {name=p6 lab=Clock}
C {switch_ngspice.sym} 150 60 3 0 {name=S2 model=SW1
device_model=".MODEL SW1 SW 
+ VT=0.9 VH=0.01
+ RON=0.01 ROFF=10G "}
C {lab_pin.sym} 170 100 3 0 {name=p7 sig_type=std_logic lab=tp}
C {code_shown.sym} 0 -80 0 0 {name=Sim only_toplevel=false 
value="
.ic v(hold)=1 v(sample)=1
"}
C {lab_pin.sym} -250 60 1 0 {name=p9 sig_type=std_logic lab=diff}
C {lab_pin.sym} -40 60 1 0 {name=p10 sig_type=std_logic lab=sample}
C {lab_pin.sym} 230 60 1 0 {name=p11 sig_type=std_logic lab=hold}
C {vsource.sym} -170 -50 0 0 {name=B1 value="V=v(hold)>0?v(vdd):0" savecurrent=false}
C {gnd.sym} -170 -20 0 0 {name=B2 lab=GND
value="V=v(hold)>0?v(vdd):0"}
C {opin.sym} -160 -100 0 0 {name=p12 lab=Vout}
C {lab_pin.sym} -120 100 3 0 {name=p13 sig_type=std_logic lab=Clock}
C {lab_pin.sym} 150 100 3 0 {name=p8 sig_type=std_logic lab=Clock}
