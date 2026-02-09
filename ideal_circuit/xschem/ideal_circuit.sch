v {xschem version=3.4.8RC file_version=1.3}
G {}
K {}
V {}
S {}
F {}
E {}
N -230 -20 -190 -20 {lab=GND}
N -230 -30 -230 -20 {lab=GND}
N -250 260 -250 300 {lab=#net1}
N -30 260 -30 300 {lab=#net2}
N -250 260 -170 260 {lab=#net1}
N -250 220 -250 260 {lab=#net1}
N -110 260 -30 260 {lab=#net2}
N -30 220 -30 260 {lab=#net2}
N -250 140 -250 160 {lab=#net3}
N -30 140 -30 160 {lab=#net4}
N -250 360 -250 450 {lab=#net5}
N 750 80 790 80 {lab=#net6}
N 710 80 750 80 {lab=#net6}
N 20 160 20 190 {lab=Vcm}
N -30 140 20 140 {lab=#net4}
N 350 140 410 140 {lab=Vint}
N -30 80 -30 140 {lab=#net4}
N 350 80 350 140 {lab=Vint}
N 320 140 350 140 {lab=Vint}
N -30 80 130 80 {lab=#net4}
N 190 80 350 80 {lab=Vint}
N 730 450 750 450 {lab=#net6}
N -970 260 -970 300 {lab=#net7}
N -750 260 -750 300 {lab=#net8}
N -970 260 -890 260 {lab=#net7}
N -970 220 -970 260 {lab=#net7}
N -830 260 -750 260 {lab=#net8}
N -750 220 -750 260 {lab=#net8}
N -970 140 -970 160 {lab=Vin}
N -1030 140 -970 140 {lab=Vin}
N -750 140 -750 160 {lab=Q}
N -970 360 -970 450 {lab=#net5}
N -700 160 -700 190 {lab=Vcm}
N -750 140 -700 140 {lab=Q}
N -370 140 -250 140 {lab=#net3}
N -750 80 -750 140 {lab=Q}
N -370 80 -370 140 {lab=#net3}
N -400 140 -370 140 {lab=#net3}
N -750 80 -590 80 {lab=Q}
N -530 80 -370 80 {lab=#net3}
N -250 450 430 450 {lab=#net5}
N -970 450 -250 450 {lab=#net5}
N 750 80 750 450 {lab=#net6}
C {vcvs.sym} -190 -50 0 0 {name=Etrip value=0.5
}
C {gnd.sym} -190 -20 0 0 {name=l2 lab=GND}
C {gnd.sym} -360 -20 0 0 {name=l1 lab=GND}
C {vsource.sym} -110 -50 0 0 {name=VDD value=3 savecurrent=false}
C {gnd.sym} -110 -20 0 0 {name=l4 lab=GND}
C {lab_pin.sym} -190 -80 1 0 {name=p1 sig_type=std_logic lab=trip}
C {lab_pin.sym} -360 -80 1 0 {name=p3 sig_type=std_logic lab=Vin}
C {lab_pin.sym} -110 -80 1 0 {name=p4 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -230 -70 0 0 {name=p5 sig_type=std_logic lab=Vdd}
C {vsource.sym} -110 -180 0 0 {name=VCM value=1.5 savecurrent=false}
C {gnd.sym} -110 -150 0 0 {name=l5 lab=GND}
C {lab_pin.sym} -110 -210 1 0 {name=p6 sig_type=std_logic lab=Vcm}
C {vsource.sym} -360 -50 0 0 {name=Vin value="sin(1.5 0.8 200)" savecurrent=false}
C {code_shown.sym} -360 -200 0 0 {name=Sim only_toplevel=false 
value="
.tran 10u 5m
.save all
"}
C {vsource.sym} -40 -180 0 0 {name=Vphi1 value="PULSE(0V 3V 0 1n 1n 490n 1u)" savecurrent=false}
C {gnd.sym} -40 -150 0 0 {name=l6 lab=GND}
C {lab_pin.sym} -40 -210 1 0 {name=p7 sig_type=std_logic lab=phi1}
C {vsource.sym} -40 -50 0 0 {name=Vphi2 value="PULSE(0V 3V 500n 1n 1n 490n 1u)" savecurrent=false}
C {gnd.sym} -40 -20 0 0 {name=l7 lab=GND}
C {lab_pin.sym} -40 -80 1 0 {name=p8 sig_type=std_logic lab=phi2
}
C {capa.sym} -140 260 3 0 {name=C2
m=1
value=338.12f
footprint=1206
device="ceramic capacitor"}
C {switch_ngspice.sym} -250 330 0 0 {name=S2 model=SW1
device_model=".MODEL SW1 SW 
+ VT=0.9 VH=0.01
+ RON=0.1 ROFF=10G "}
C {switch_ngspice.sym} -250 190 0 0 {name=S1 model=SW1
device_model=".MODEL SW1 SW 
+ VT=0.9 VH=0.01
+ RON=0.1 ROFF=10G "}
C {switch_ngspice.sym} -30 330 0 0 {name=S3 model=SW1
device_model=".MODEL SW1 SW 
+ VT=0.9 VH=0.01
+ RON=0.1 ROFF=10G "}
C {switch_ngspice.sym} -30 190 0 0 {name=S4 model=SW1
device_model=".MODEL SW1 SW 
+ VT=0.9 VH=0.01
+ RON=0.1 ROFF=10G "}
C {lab_pin.sym} -290 350 2 1 {name=p9 sig_type=std_logic lab=trip}
C {lab_pin.sym} -290 210 2 1 {name=p10 sig_type=std_logic lab=trip}
C {lab_pin.sym} -70 350 2 1 {name=p11 sig_type=std_logic lab=trip}
C {lab_pin.sym} -70 210 2 1 {name=p12 sig_type=std_logic lab=trip}
C {lab_pin.sym} -290 190 0 0 {name=p13 sig_type=std_logic lab=phi1}
C {lab_pin.sym} -70 330 0 0 {name=p14 sig_type=std_logic lab=phi1}
C {lab_pin.sym} -290 330 0 0 {name=p15 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} -70 190 0 0 {name=p16 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} -1030 140 0 0 {name=p17 sig_type=std_logic lab=Vin}
C {lab_pin.sym} -30 360 3 0 {name=p18 sig_type=std_logic lab=Vcm}
C {lab_pin.sym} 1090 80 0 1 {name=p19 sig_type=std_logic lab=Vout}
C {lab_pin.sym} 1090 100 2 0 {name=p20 sig_type=std_logic lab=Vdd}
C {gnd.sym} 1090 120 0 0 {name=l8 lab=GND}
C {lab_pin.sym} 20 190 3 0 {name=p21 sig_type=std_logic lab=Vcm}
C {lab_pin.sym} 410 120 0 0 {name=p22 sig_type=std_logic lab=Vcm}
C {lab_pin.sym} 410 100 0 0 {name=p23 sig_type=std_logic lab=phi1}
C {lab_pin.sym} 410 80 0 0 {name=p24 sig_type=std_logic lab=Vdd}
C {capa.sym} 160 80 3 0 {name=Cint2
m=1
value=1.014p
footprint=1206
device="ceramic capacitor"}
C {lab_pin.sym} 430 430 0 0 {name=p25 sig_type=std_logic lab=Vdd}
C {gnd.sym} 430 410 2 0 {name=l9 lab=GND}
C {lab_pin.sym} 350 140 3 0 {name=p26 sig_type=std_logic lab=Vint}
C {capa.sym} -860 260 3 0 {name=C1
m=1
value=84.53f
footprint=1206
device="ceramic capacitor"}
C {switch_ngspice.sym} -970 330 0 0 {name=S5 model=SW1
device_model=".MODEL SW1 SW 
+ VT=0.9 VH=0.01
+ RON=0.1 ROFF=10G "}
C {switch_ngspice.sym} -970 190 0 0 {name=S6 model=SW1
device_model=".MODEL SW1 SW 
+ VT=0.9 VH=0.01
+ RON=0.1 ROFF=10G "}
C {switch_ngspice.sym} -750 330 0 0 {name=S7 model=SW1
device_model=".MODEL SW1 SW 
+ VT=0.9 VH=0.01
+ RON=0.1 ROFF=10G "}
C {switch_ngspice.sym} -750 190 0 0 {name=S8 model=SW1
device_model=".MODEL SW1 SW 
+ VT=0.9 VH=0.01
+ RON=0.1 ROFF=10G "}
C {lab_pin.sym} -1010 350 2 1 {name=p27 sig_type=std_logic lab=trip}
C {lab_pin.sym} -1010 210 2 1 {name=p28 sig_type=std_logic lab=trip}
C {lab_pin.sym} -790 350 2 1 {name=p29 sig_type=std_logic lab=trip}
C {lab_pin.sym} -790 210 2 1 {name=p30 sig_type=std_logic lab=trip}
C {lab_pin.sym} -1010 190 0 0 {name=p31 sig_type=std_logic lab=phi1}
C {lab_pin.sym} -790 330 0 0 {name=p32 sig_type=std_logic lab=phi1}
C {lab_pin.sym} -1010 330 0 0 {name=p33 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} -790 190 0 0 {name=p34 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} -750 360 3 0 {name=p35 sig_type=std_logic lab=Vcm}
C {lab_pin.sym} -700 190 3 0 {name=p36 sig_type=std_logic lab=Vcm}
C {capa.sym} -560 80 3 0 {name=Cint1
m=1
value=1.014p
footprint=1206
device="ceramic capacitor"}
C {/foss/designs/ideal/ideal_comp.sym} 560 110 0 0 {name=x1}
C {/foss/designs/ideal/ideal_opamp.sym} 170 150 0 0 {name=x2}
C {/foss/designs/ideal/ideal_opamp.sym} -550 150 0 0 {name=x3}
C {lab_pin.sym} -750 80 0 0 {name=p2 sig_type=std_logic lab=Q}
C {/foss/designs/ideal/ideal_inv.sym} 940 100 0 0 {name=x4}
C {/foss/designs/ideal/ideal_inv.sym} 580 430 2 0 {name=x5}
