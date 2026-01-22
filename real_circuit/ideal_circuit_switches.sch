v {xschem version=3.4.8RC file_version=1.3}
G {}
K {}
V {}
S {}
F {}
E {}
N -290 -20 -250 -20 {lab=GND}
N -290 -30 -290 -20 {lab=GND}
N -380 220 -380 260 {lab=#net1}
N -160 220 -160 260 {lab=#net2}
N -380 220 -300 220 {lab=#net1}
N -380 180 -380 220 {lab=#net1}
N -240 220 -160 220 {lab=#net2}
N -160 180 -160 220 {lab=#net2}
N -380 100 -380 120 {lab=Vin}
N -440 100 -380 100 {lab=Vin}
N -160 100 -160 120 {lab=Vout}
N -380 320 -380 410 {lab=Vout}
N -380 410 -30 410 {lab=Vout}
N -160 100 -30 100 {lab=Vout}
N -30 100 -30 410 {lab=Vout}
N -30 100 20 100 {lab=Vout}
C {vcvs.sym} -250 -50 0 0 {name=Etrip value=0.5
}
C {gnd.sym} -250 -20 0 0 {name=l2 lab=GND}
C {gnd.sym} -440 -30 0 0 {name=l1 lab=GND}
C {vsource.sym} -250 -180 0 0 {name=Vref value=5 savecurrent=false}
C {gnd.sym} -250 -150 0 0 {name=l3 lab=GND}
C {vsource.sym} -170 -50 0 0 {name=VDD value=5 savecurrent=false}
C {gnd.sym} -170 -20 0 0 {name=l4 lab=GND}
C {lab_pin.sym} -250 -80 1 0 {name=p1 sig_type=std_logic lab=trip}
C {lab_pin.sym} -250 -210 1 0 {name=p2 sig_type=std_logic lab=Vref}
C {lab_pin.sym} -440 -90 1 0 {name=p3 sig_type=std_logic lab=Vin}
C {lab_pin.sym} -170 -80 1 0 {name=p4 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -290 -70 0 0 {name=p5 sig_type=std_logic lab=Vdd}
C {vsource.sym} -170 -180 0 0 {name=VCM value=2.5 savecurrent=false}
C {gnd.sym} -170 -150 0 0 {name=l5 lab=GND}
C {lab_pin.sym} -170 -210 1 0 {name=p6 sig_type=std_logic lab=Vcm}
C {vsource.sym} -440 -60 0 0 {name=Vin value="sin(2.4 2.5 500k)" savecurrent=false}
C {code_shown.sym} -440 -240 0 0 {name=SIM only_toplevel=false 
value="
.tran 0.4u 4u
.save all
"}
C {vsource.sym} -100 -180 0 0 {name=Vphi1 value="PULSE(0 5 0ns 0.1ns 0.1ns 4ns 10ns)" savecurrent=false}
C {gnd.sym} -100 -150 0 0 {name=l6 lab=GND}
C {lab_pin.sym} -100 -210 1 0 {name=p7 sig_type=std_logic lab=phi1}
C {vsource.sym} -100 -50 0 0 {name=Vphi2 value="PULSE(0 5 5ns 0.1ns 0.1ns 4ns 10ns)" savecurrent=false}
C {gnd.sym} -100 -20 0 0 {name=l7 lab=GND}
C {lab_pin.sym} -100 -80 1 0 {name=p8 sig_type=std_logic lab=phi2
}
C {switch_ngspice.sym} -380 290 0 0 {name=S2 model=SW1
device_model=".MODEL SW1 SW 
+ VT=0.9 VH=0.01
+ RON=0.1 ROFF=10G "}
C {switch_ngspice.sym} -380 150 0 0 {name=S1 model=SW1
device_model=".MODEL SW1 SW 
+ VT=0.9 VH=0.01
+ RON=0.1 ROFF=10G "}
C {switch_ngspice.sym} -160 290 0 0 {name=S3 model=SW1
device_model=".MODEL SW1 SW 
+ VT=0.9 VH=0.01
+ RON=0.1 ROFF=10G "}
C {switch_ngspice.sym} -160 150 0 0 {name=S4 model=SW1
device_model=".MODEL SW1 SW 
+ VT=0.9 VH=0.01
+ RON=0.1 ROFF=10G "}
C {lab_pin.sym} -420 310 2 1 {name=p9 sig_type=std_logic lab=trip}
C {lab_pin.sym} -420 170 2 1 {name=p10 sig_type=std_logic lab=trip}
C {lab_pin.sym} -200 310 2 1 {name=p11 sig_type=std_logic lab=trip}
C {lab_pin.sym} -200 170 2 1 {name=p12 sig_type=std_logic lab=trip}
C {lab_pin.sym} -420 150 0 0 {name=p13 sig_type=std_logic lab=phi1}
C {lab_pin.sym} -200 290 0 0 {name=p14 sig_type=std_logic lab=phi1}
C {lab_pin.sym} -420 290 0 0 {name=p15 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} -200 150 0 0 {name=p16 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} -440 100 0 0 {name=p17 sig_type=std_logic lab=Vin}
C {lab_pin.sym} -160 320 3 0 {name=p18 sig_type=std_logic lab=Vcm}
C {lab_pin.sym} 20 100 0 1 {name=p19 sig_type=std_logic lab=Vout}
C {devices/code_shown.sym} 200 -220 0 0 {name=MODEL only_toplevel=true
format="tcleval( @value )"
value="
.lib $::SG13G2_MODELS/cornerCAP.lib cap_typ
"}
C {sg13g2_pr/cap_cmim.sym} -270 220 3 0 {name=C2
model=cap_cmim
w=7.0e-6
l=7.0e-6
m=1
spiceprefix=X}
