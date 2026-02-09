v {xschem version=3.4.8RC file_version=1.3}
G {}
K {}
V {}
S {}
F {}
E {}
N 1015 780 1015 820 {lab=#net1}
N 1235 780 1235 820 {lab=#net2}
N 1015 780 1095 780 {lab=#net1}
N 1015 740 1015 780 {lab=#net1}
N 1155 780 1235 780 {lab=#net2}
N 1235 740 1235 780 {lab=#net2}
N 1015 660 1015 680 {lab=Vin}
N 955 660 1015 660 {lab=Vin}
N 1235 660 1235 680 {lab=Vout}
N 1015 880 1015 970 {lab=Vout}
N 1365 660 1415 660 {lab=Vout}
N 1365 660 1365 970 {lab=Vout}
N 1235 660 1365 660 {lab=Vout}
N 220 460 220 600 {lab=#net3}
N 1080 550 1120 550 {lab=GND}
N 1080 540 1080 550 {lab=GND}
N 720 140 720 1120 {lab=Vout_new}
N 180 600 180 1060 {lab=#net3}
N 180 600 220 600 {lab=#net3}
N 550 1000 550 1060 {lab=#net4}
N 480 1060 550 1060 {lab=#net4}
N 480 600 480 1060 {lab=#net4}
N 530 460 530 600 {lab=#net4}
N 600 140 600 520 {lab=Vout_new}
N 720 140 940 140 {lab=Vout_new}
N 230 1000 230 1120 {lab=Vout_new}
N 220 600 320 600 {lab=#net3}
N 380 600 480 600 {lab=#net4}
N 1015 970 1365 970 {lab=Vout}
N 480 600 530 600 {lab=#net4}
N 550 460 550 520 {lab=Vout_new}
N 550 520 600 520 {lab=Vout_new}
N 180 1060 250 1060 {lab=#net3}
N 250 1000 250 1060 {lab=#net3}
N 570 100 570 160 {lab=#net5}
N 650 100 650 160 {lab=#net5}
N 240 100 240 160 {lab=#net6}
N 300 100 300 160 {lab=#net6}
N 240 100 300 100 {lab=#net6}
N 570 640 570 700 {lab=#net7}
N 570 640 630 640 {lab=#net7}
N 630 640 630 700 {lab=#net7}
N 270 640 270 700 {lab=#net8}
N 330 640 330 700 {lab=#net8}
N 270 640 330 640 {lab=#net8}
N 570 100 650 100 {lab=#net5}
N 600 140 720 140 {lab=Vout_new}
N 230 1120 720 1120 {lab=Vout_new}
N 720 1120 880 1120 {lab=Vout_new}
C {switch_ngspice.sym} 1015 850 0 0 {name=S2 model=SW1
device_model=".MODEL SW1 SW 
+ VT=0.9 VH=0.01
+ RON=0.1 ROFF=10G "}
C {switch_ngspice.sym} 1015 710 0 0 {name=S1 model=SW1
device_model=".MODEL SW1 SW 
+ VT=0.9 VH=0.01
+ RON=0.1 ROFF=10G "}
C {switch_ngspice.sym} 1235 850 0 0 {name=S3 model=SW1
device_model=".MODEL SW1 SW 
+ VT=0.9 VH=0.01
+ RON=0.1 ROFF=10G "}
C {switch_ngspice.sym} 1235 710 0 0 {name=S4 model=SW1
device_model=".MODEL SW1 SW 
+ VT=0.9 VH=0.01
+ RON=0.1 ROFF=10G "}
C {lab_pin.sym} 975 870 2 1 {name=p9 sig_type=std_logic lab=trip}
C {lab_pin.sym} 975 730 2 1 {name=p10 sig_type=std_logic lab=trip}
C {lab_pin.sym} 1195 870 2 1 {name=p11 sig_type=std_logic lab=trip}
C {lab_pin.sym} 1195 730 2 1 {name=p12 sig_type=std_logic lab=trip}
C {lab_pin.sym} 975 710 0 0 {name=p13 sig_type=std_logic lab=phi1}
C {lab_pin.sym} 1195 850 0 0 {name=p14 sig_type=std_logic lab=phi1}
C {lab_pin.sym} 975 850 0 0 {name=p15 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} 1195 710 0 0 {name=p16 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} 200 460 3 0 {name=p17 sig_type=std_logic lab=Vin}
C {lab_pin.sym} 1235 880 3 0 {name=p18 sig_type=std_logic lab=Vcm}
C {lab_pin.sym} 1415 660 0 1 {name=p19 sig_type=std_logic lab=Vout}
C {capa.sym} 350 600 3 0 {name=Cin
m=1
value=80f
footprint=1206
device="ceramic capacitor"}
C {lab_pin.sym} 220 160 1 0 {name=p20 sig_type=std_logic lab=phi1}
C {lab_pin.sym} 550 160 1 0 {name=p26 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} 955 660 1 0 {name=p27 sig_type=std_logic lab=Vin}
C {lab_pin.sym} 250 700 1 0 {name=p30 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} 940 140 0 1 {name=p32 sig_type=std_logic lab=Vout_new}
C {capa.sym} 1125 780 3 0 {name=Cin1
m=1
value=80f
footprint=1206
device="ceramic capacitor"}
C {vcvs.sym} 1120 520 0 0 {name=Etrip value=0.5
}
C {gnd.sym} 1120 550 0 0 {name=l13 lab=GND}
C {gnd.sym} 950 550 0 0 {name=l14 lab=GND}
C {vsource.sym} 1200 520 0 0 {name=VDD value=3 savecurrent=false}
C {gnd.sym} 1200 550 0 0 {name=l15 lab=GND}
C {lab_pin.sym} 1120 490 1 0 {name=p35 sig_type=std_logic lab=trip}
C {lab_pin.sym} 950 490 1 0 {name=p36 sig_type=std_logic lab=Vin}
C {lab_pin.sym} 1200 490 1 0 {name=p37 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} 1080 500 0 0 {name=p38 sig_type=std_logic lab=Vdd}
C {vsource.sym} 1200 390 0 0 {name=VCM value=1.5 savecurrent=false}
C {gnd.sym} 1200 420 0 0 {name=l16 lab=GND}
C {lab_pin.sym} 1200 360 1 0 {name=p39 sig_type=std_logic lab=Vcm}
C {vsource.sym} 950 520 0 0 {name=Vin value="sin(1.5 1.4 200)" savecurrent=false}
C {code_shown.sym} 950 370 0 0 {name=Sim1 only_toplevel=false 
value="
.tran 10u 5m
.save all
"}
C {vsource.sym} 1270 390 0 0 {name=Vphi1 value="PULSE(0V 3V 0 1n 1n 490n 1u)" savecurrent=false}
C {gnd.sym} 1270 420 0 0 {name=l17 lab=GND}
C {lab_pin.sym} 1270 360 1 0 {name=p40 sig_type=std_logic lab=phi1}
C {vsource.sym} 1270 520 0 0 {name=Vphi2 value="PULSE(0V 3V 500n 1n 1n 490n 1u)" savecurrent=false}
C {gnd.sym} 1270 550 0 0 {name=l18 lab=GND}
C {lab_pin.sym} 1270 490 1 0 {name=p41 sig_type=std_logic lab=phi2
}
C {devices/code_shown.sym} 950 230 0 0 {name=MODEL1 only_toplevel=true
format="tcleval( @value )"
value="
.lib cornerMOShv.lib mos_tt
"}
C {/foss/designs/real/real_switch.sym} 210 310 1 0 {name=x1}
C {/foss/designs/real/real_switch.sym} 540 310 1 0 {name=x5}
C {/foss/designs/real/real_switch.sym} 240 850 1 0 {name=x2}
C {/foss/designs/real/real_switch.sym} 540 850 1 0 {name=x3}
C {lab_pin.sym} 240 460 3 0 {name=p1 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} 570 460 3 0 {name=p2 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} 570 1000 3 0 {name=p3 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} 270 1000 3 0 {name=p4 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} 550 700 1 0 {name=p5 sig_type=std_logic lab=phi1}
C {lab_pin.sym} 530 1000 3 0 {name=p6 sig_type=std_logic lab=Vcm}
C {gnd.sym} 180 460 1 0 {name=l5 lab=GND}
C {gnd.sym} 210 1000 1 0 {name=l7 lab=GND}
C {gnd.sym} 510 1000 1 0 {name=l8 lab=GND}
C {gnd.sym} 510 460 1 0 {name=l9 lab=GND}
C {gnd.sym} 320 160 3 0 {name=l3 lab=GND}
C {lab_pin.sym} 280 160 1 0 {name=p7 sig_type=std_logic lab=Vdd}
C {gnd.sym} 670 160 3 0 {name=l10 lab=GND}
C {lab_pin.sym} 630 160 1 0 {name=p8 sig_type=std_logic lab=Vdd}
C {gnd.sym} 350 700 3 0 {name=l2 lab=GND}
C {lab_pin.sym} 310 700 1 0 {name=p21 sig_type=std_logic lab=Vdd}
C {gnd.sym} 650 700 3 0 {name=l4 lab=GND}
C {lab_pin.sym} 610 700 1 0 {name=p22 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} 610 1000 3 0 {name=p23 sig_type=std_logic lab=phi1}
C {lab_pin.sym} 310 1000 3 0 {name=p24 sig_type=std_logic lab=phi2}
C {lab_pin.sym} 280 460 3 0 {name=p25 sig_type=std_logic lab=phi1}
C {lab_pin.sym} 630 460 3 0 {name=p28 sig_type=std_logic lab=phi2}
C {capa.sym} 910 1120 3 0 {name=C_LOAD
m=1
value=1p
footprint=1206
device="ceramic capacitor"}
C {gnd.sym} 940 1120 3 0 {name=l6 lab=GND}
C {/foss/designs/real/real_inv.sym} 300 310 3 0 {name=x4}
C {/foss/designs/real/real_inv.sym} 650 310 3 0 {name=x6}
C {/foss/designs/real/real_inv.sym} 630 850 3 0 {name=x7}
C {/foss/designs/real/real_inv.sym} 330 850 3 0 {name=x8}
