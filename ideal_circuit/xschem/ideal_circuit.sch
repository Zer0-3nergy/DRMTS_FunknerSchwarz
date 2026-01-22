v {xschem version=3.4.8RC file_version=1.3}
G {}
K {}
V {}
S {}
F {}
E {}
N -230 -20 -190 -20 {lab=GND}
N -230 -30 -230 -20 {lab=GND}
N -380 220 -380 260 {lab=#net1}
N -160 220 -160 260 {lab=#net2}
N -380 220 -300 220 {lab=#net1}
N -380 180 -380 220 {lab=#net1}
N -240 220 -160 220 {lab=#net2}
N -160 180 -160 220 {lab=#net2}
N -380 100 -380 120 {lab=Vin}
N -440 100 -380 100 {lab=Vin}
N -160 100 -160 120 {lab=#net3}
N -380 320 -380 410 {lab=#net4}
N -380 410 300 410 {lab=#net4}
N 620 40 660 40 {lab=#net5}
N 620 40 620 410 {lab=#net5}
N 580 40 620 40 {lab=#net5}
N -110 120 -110 150 {lab=Vcm}
N -160 100 -110 100 {lab=#net3}
N 220 100 280 100 {lab=Vint}
N -160 40 -160 100 {lab=#net3}
N 220 40 220 100 {lab=Vint}
N 190 100 220 100 {lab=Vint}
N -160 40 -0 40 {lab=#net3}
N 60 40 220 40 {lab=Vint}
N 600 410 620 410 {lab=#net5}
C {vcvs.sym} -190 -50 0 0 {name=Etrip value=0.5
}
C {gnd.sym} -190 -20 0 0 {name=l2 lab=GND}
C {gnd.sym} -360 -20 0 0 {name=l1 lab=GND}
C {vsource.sym} -190 -180 0 0 {name=Vref value=3 savecurrent=false}
C {gnd.sym} -190 -150 0 0 {name=l3 lab=GND}
C {vsource.sym} -110 -50 0 0 {name=VDD value=3 savecurrent=false}
C {gnd.sym} -110 -20 0 0 {name=l4 lab=GND}
C {lab_pin.sym} -190 -80 1 0 {name=p1 sig_type=std_logic lab=trip}
C {lab_pin.sym} -190 -210 1 0 {name=p2 sig_type=std_logic lab=Vref}
C {lab_pin.sym} -360 -80 1 0 {name=p3 sig_type=std_logic lab=Vin}
C {lab_pin.sym} -110 -80 1 0 {name=p4 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -230 -70 0 0 {name=p5 sig_type=std_logic lab=Vdd}
C {vsource.sym} -110 -180 0 0 {name=VCM value=1.5 savecurrent=false}
C {gnd.sym} -110 -150 0 0 {name=l5 lab=GND}
C {lab_pin.sym} -110 -210 1 0 {name=p6 sig_type=std_logic lab=Vcm}
C {vsource.sym} -360 -50 0 0 {name=Vin value="sin(1.5 1.4 500k)" savecurrent=false}
C {code_shown.sym} -360 -200 0 0 {name=Sim only_toplevel=false 
value="
.tran 0.4u 4u
.save all
"}
C {vsource.sym} -40 -180 0 0 {name=Vphi1 value="PULSE(0 3 0ns 0.1ns 0.1ns 4ns 10ns)" savecurrent=false}
C {gnd.sym} -40 -150 0 0 {name=l6 lab=GND}
C {lab_pin.sym} -40 -210 1 0 {name=p7 sig_type=std_logic lab=phi1}
C {vsource.sym} -40 -50 0 0 {name=Vphi2 value="PULSE(0 3 5ns 0.1ns 0.1ns 4ns 10ns)" savecurrent=false}
C {gnd.sym} -40 -20 0 0 {name=l7 lab=GND}
C {lab_pin.sym} -40 -80 1 0 {name=p8 sig_type=std_logic lab=phi2
}
C {capa.sym} -270 220 3 0 {name=Cin
m=1
value=0.25p
footprint=1206
device="ceramic capacitor"}
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
C {lab_pin.sym} 960 40 0 1 {name=p19 sig_type=std_logic lab=Vout}
C {lab_pin.sym} 960 60 2 0 {name=p20 sig_type=std_logic lab=Vdd}
C {gnd.sym} 960 80 0 0 {name=l8 lab=GND}
C {lab_pin.sym} -110 150 3 0 {name=p21 sig_type=std_logic lab=Vcm}
C {lab_pin.sym} 280 80 0 0 {name=p22 sig_type=std_logic lab=Vcm}
C {lab_pin.sym} 280 60 0 0 {name=p23 sig_type=std_logic lab=phi1}
C {lab_pin.sym} 280 40 0 0 {name=p24 sig_type=std_logic lab=Vdd}
C {capa.sym} 30 40 3 0 {name=Cin1
m=1
value=1p
footprint=1206
device="ceramic capacitor"}
C {lab_pin.sym} 300 390 0 0 {name=p25 sig_type=std_logic lab=Vref}
C {gnd.sym} 300 370 2 0 {name=l9 lab=GND}
C {lab_pin.sym} 250 100 3 0 {name=p26 sig_type=std_logic lab=Vint}
C {/foss/designs/delta_sigma/ideal/ideal_opamp.sym} 40 110 0 0 {name=x5}
C {/foss/designs/delta_sigma/ideal/ideal_comp.sym} 430 70 0 0 {name=x1}
C {/foss/designs/delta_sigma/ideal/ideal_inv.sym} 450 390 2 0 {name=x3}
C {/foss/designs/delta_sigma/ideal/ideal_inv.sym} 810 60 0 0 {name=x2}
