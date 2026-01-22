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
N -30 100 20 100 {lab=Vout}
N -30 100 -30 410 {lab=Vout}
N -160 100 -30 100 {lab=Vout}
N 250 600 250 710 {lab=#net3}
N 220 600 250 600 {lab=#net3}
N 220 460 220 600 {lab=#net3}
N 250 600 320 600 {lab=#net3}
N 530 460 530 600 {lab=#net4}
N 540 600 540 710 {lab=#net4}
N 530 600 540 600 {lab=#net4}
N 380 600 530 600 {lab=#net4}
N 550 160 880 160 {lab=Vout_new}
N 230 1010 230 1120 {lab=Vout_new}
N 230 1120 880 1120 {lab=Vout_new}
N 880 160 880 1120 {lab=Vout_new}
N 460 460 460 520 {lab=#net5}
N 460 520 510 520 {lab=#net5}
N 510 460 510 520 {lab=#net5}
N 150 460 150 520 {lab=#net6}
N 150 520 200 520 {lab=#net6}
N 200 460 200 520 {lab=#net6}
N 160 1010 160 1060 {lab=#net7}
N 160 1060 210 1060 {lab=#net7}
N 210 1010 210 1060 {lab=#net7}
N 440 1010 440 1060 {lab=#net8}
N 440 1060 500 1060 {lab=#net8}
N 500 1010 500 1060 {lab=#net8}
N 880 160 940 160 {lab=Vout_new}
C {vcvs.sym} -250 -50 0 0 {name=Etrip value=0.5
}
C {gnd.sym} -250 -20 0 0 {name=l2 lab=GND}
C {gnd.sym} -440 -30 0 0 {name=l1 lab=GND}
C {vsource.sym} -250 -180 0 0 {name=Vref value=3 savecurrent=false}
C {gnd.sym} -250 -150 0 0 {name=l3 lab=GND}
C {vsource.sym} -170 -50 0 0 {name=VDD value=3 savecurrent=false}
C {gnd.sym} -170 -20 0 0 {name=l4 lab=GND}
C {lab_pin.sym} -250 -80 1 0 {name=p1 sig_type=std_logic lab=trip}
C {lab_pin.sym} -250 -210 1 0 {name=p2 sig_type=std_logic lab=Vref}
C {lab_pin.sym} -440 -90 1 0 {name=p3 sig_type=std_logic lab=Vin}
C {lab_pin.sym} -170 -80 1 0 {name=p4 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -290 -70 0 0 {name=p5 sig_type=std_logic lab=Vdd}
C {vsource.sym} -170 -180 0 0 {name=VCM value=1.5 savecurrent=false}
C {gnd.sym} -170 -150 0 0 {name=l5 lab=GND}
C {lab_pin.sym} -170 -210 1 0 {name=p6 sig_type=std_logic lab=Vcm}
C {vsource.sym} -440 -60 0 0 {name=Vin value="sin(1.5 1.4 500k)" savecurrent=false}
C {code_shown.sym} -440 -240 0 0 {name=SIM only_toplevel=false 
value="
.tran 0.4u 4u
.save all
"}
C {vsource.sym} -100 -180 0 0 {name=Vphi1 value="PULSE(0 3 0ns 0.1ns 0.1ns 4ns 10ns)" savecurrent=false}
C {gnd.sym} -100 -150 0 0 {name=l6 lab=GND}
C {lab_pin.sym} -100 -210 1 0 {name=p7 sig_type=std_logic lab=phi1}
C {vsource.sym} -100 -50 0 0 {name=Vphi2 value="PULSE(0 3 5ns 0.1ns 0.1ns 4ns 10ns)" savecurrent=false}
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
C {lab_pin.sym} 240 160 1 0 {name=p17 sig_type=std_logic lab=Vin}
C {lab_pin.sym} -160 320 3 0 {name=p18 sig_type=std_logic lab=Vcm}
C {lab_pin.sym} 20 100 0 1 {name=p19 sig_type=std_logic lab=Vout}
C {capa.sym} 350 600 3 0 {name=Cin
m=1
value=0.25p
footprint=1206
device="ceramic capacitor"}
C {devices/code_shown.sym} 260 -70 0 0 {name=MODEL only_toplevel=true
format="tcleval( @value )"
value="
.lib cornerMOShv.lib mos_tt
"}
C {/foss/designs/delta_sigma/real/real_switch.sym} 220 310 1 0 {name=x1}
C {/foss/designs/delta_sigma/real/real_switch.sym} 530 310 1 0 {name=x2}
C {/foss/designs/delta_sigma/real/real_switch.sym} 230 860 1 0 {name=x3}
C {/foss/designs/delta_sigma/real/real_switch.sym} 520 860 1 0 {name=x4}
C {lab_pin.sym} 240 460 3 0 {name=p20 sig_type=std_logic lab=phi1}
C {lab_pin.sym} 540 1010 3 0 {name=p21 sig_type=std_logic lab=phi1}
C {/foss/designs/delta_sigma/real/real_inv.sym} 150 310 1 0 {name=x6}
C {lab_pin.sym} 170 160 1 0 {name=p22 sig_type=std_logic lab=phi1}
C {/foss/designs/delta_sigma/real/real_inv.sym} 440 860 1 0 {name=x7}
C {lab_pin.sym} 460 710 1 0 {name=p23 sig_type=std_logic lab=phi1}
C {/foss/designs/delta_sigma/real/real_inv.sym} 160 860 1 0 {name=x8}
C {/foss/designs/delta_sigma/real/real_inv.sym} 460 310 1 0 {name=x9}
C {lab_pin.sym} 180 710 1 0 {name=p24 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} 480 160 1 0 {name=p25 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} 550 460 3 0 {name=p26 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} -440 100 1 0 {name=p27 sig_type=std_logic lab=Vin}
C {lab_pin.sym} 170 460 3 0 {name=p28 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} 480 460 3 0 {name=p29 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} 250 1010 3 0 {name=p30 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} 520 1010 3 0 {name=p31 sig_type=std_logic lab=Vcm}
C {lab_pin.sym} 940 160 0 1 {name=p32 sig_type=std_logic lab=Vout_new}
C {lab_pin.sym} 180 1010 3 0 {name=p33 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} 460 1010 3 0 {name=p34 sig_type=std_logic lab=Vdd}
C {gnd.sym} 140 1010 0 0 {name=l8 lab=GND}
C {gnd.sym} 420 1010 0 0 {name=l9 lab=GND}
C {gnd.sym} 440 460 0 0 {name=l10 lab=GND}
C {gnd.sym} 130 460 0 0 {name=l11 lab=GND}
C {capa.sym} -270 220 3 0 {name=Cin1
m=1
value=0.25p
footprint=1206
device="ceramic capacitor"}
C {capa.sym} 910 330 3 0 {name=Cin2
m=1
value=100f
footprint=1206
device="ceramic capacitor"}
C {gnd.sym} 940 330 0 0 {name=l12 lab=GND}
