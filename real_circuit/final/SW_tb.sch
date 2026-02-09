v {xschem version=3.4.8RC file_version=1.3}
G {}
K {}
V {}
S {}
F {}
E {}
N 1070 670 1070 710 {lab=#net1}
N 1290 670 1290 710 {lab=#net2}
N 1070 670 1150 670 {lab=#net1}
N 1070 630 1070 670 {lab=#net1}
N 1210 670 1290 670 {lab=#net2}
N 1290 630 1290 670 {lab=#net2}
N 1070 550 1070 570 {lab=Vin}
N 1010 550 1070 550 {lab=Vin}
N 1290 550 1290 570 {lab=Vout}
N 1070 770 1070 860 {lab=Vout}
N 1420 550 1470 550 {lab=Vout}
N 1420 550 1420 860 {lab=Vout}
N 1290 550 1420 550 {lab=Vout}
N 1080 480 1120 480 {lab=GND}
N 1080 470 1080 480 {lab=GND}
N 1070 860 1420 860 {lab=Vout}
N 400 560 400 600 {lab=#net3}
N 400 560 480 560 {lab=#net3}
N 400 520 400 560 {lab=#net3}
N 540 560 700 560 {lab=#net4}
N 700 520 700 560 {lab=#net4}
N 700 560 700 600 {lab=#net4}
N 400 760 400 860 {lab=Vout_new}
N 700 360 800 360 {lab=Vout_new}
N 800 360 800 860 {lab=Vout_new}
N 400 860 800 860 {lab=Vout_new}
N 800 860 820 860 {lab=Vout_new}
N 800 360 820 360 {lab=Vout_new}
C {switch_ngspice.sym} 1070 740 0 0 {name=S2 model=SW1
device_model=".MODEL SW1 SW 
+ VT=0.9 VH=0.01
+ RON=0.1 ROFF=10G "}
C {switch_ngspice.sym} 1070 600 0 0 {name=S1 model=SW1
device_model=".MODEL SW1 SW 
+ VT=0.9 VH=0.01
+ RON=0.1 ROFF=10G "}
C {switch_ngspice.sym} 1290 740 0 0 {name=S3 model=SW1
device_model=".MODEL SW1 SW 
+ VT=0.9 VH=0.01
+ RON=0.1 ROFF=10G "}
C {switch_ngspice.sym} 1290 600 0 0 {name=S4 model=SW1
device_model=".MODEL SW1 SW 
+ VT=0.9 VH=0.01
+ RON=0.1 ROFF=10G "}
C {lab_pin.sym} 1030 760 2 1 {name=p9 sig_type=std_logic lab=trip}
C {lab_pin.sym} 1030 620 2 1 {name=p10 sig_type=std_logic lab=trip}
C {lab_pin.sym} 1250 760 2 1 {name=p11 sig_type=std_logic lab=trip}
C {lab_pin.sym} 1250 620 2 1 {name=p12 sig_type=std_logic lab=trip}
C {lab_pin.sym} 1030 600 0 0 {name=p13 sig_type=std_logic lab=phi1}
C {lab_pin.sym} 1250 740 0 0 {name=p14 sig_type=std_logic lab=phi1}
C {lab_pin.sym} 1030 740 0 0 {name=p15 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} 1250 600 0 0 {name=p16 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} 1290 770 3 0 {name=p18 sig_type=std_logic lab=Vcm}
C {lab_pin.sym} 1470 550 0 1 {name=p19 sig_type=std_logic lab=Vout}
C {lab_pin.sym} 1010 550 1 0 {name=p27 sig_type=std_logic lab=Vin}
C {lab_pin.sym} 820 360 0 1 {name=p32 sig_type=std_logic lab=Vout_new}
C {capa.sym} 1180 670 3 0 {name=Cin1
m=1
value=80f
footprint=1206
device="ceramic capacitor"}
C {vcvs.sym} 1120 450 0 0 {name=Etrip value=0.5
}
C {gnd.sym} 1120 480 0 0 {name=l13 lab=GND}
C {gnd.sym} 950 480 0 0 {name=l14 lab=GND}
C {vsource.sym} 1200 450 0 0 {name=VDD value=3 savecurrent=false}
C {gnd.sym} 1200 480 0 0 {name=l15 lab=GND}
C {lab_pin.sym} 1120 420 1 0 {name=p35 sig_type=std_logic lab=trip}
C {lab_pin.sym} 950 420 1 0 {name=p36 sig_type=std_logic lab=Vin}
C {lab_pin.sym} 1200 420 1 0 {name=p37 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} 1080 430 0 0 {name=p38 sig_type=std_logic lab=Vdd}
C {vsource.sym} 1200 320 0 0 {name=VCM value=1.5 savecurrent=false}
C {gnd.sym} 1200 350 0 0 {name=l16 lab=GND}
C {lab_pin.sym} 1200 290 1 0 {name=p39 sig_type=std_logic lab=Vcm}
C {vsource.sym} 950 450 0 0 {name=Vin value="sin(1.5 0.8 200)" savecurrent=false}
C {code_shown.sym} 280 190 0 0 {name=Sim only_toplevel=false 
value="
.tran 10u 5m
.save all
"}
C {vsource.sym} 1270 320 0 0 {name=Vphi1 value="PULSE(0V 3V 0 1n 1n 490n 1u)" savecurrent=false}
C {gnd.sym} 1270 350 0 0 {name=l17 lab=GND}
C {lab_pin.sym} 1270 290 1 0 {name=p40 sig_type=std_logic lab=phi1}
C {vsource.sym} 1270 450 0 0 {name=Vphi2 value="PULSE(0V 3V 500n 1n 1n 490n 1u)" savecurrent=false}
C {gnd.sym} 1270 480 0 0 {name=l18 lab=GND}
C {lab_pin.sym} 1270 420 1 0 {name=p41 sig_type=std_logic lab=phi2
}
C {devices/code_shown.sym} 440 190 0 0 {name=MODEL1 only_toplevel=true
format="tcleval( @value )"
value="
.lib cornerMOShv.lib mos_tt
"}
C {capa.sym} 850 860 3 0 {name=C_LOAD
m=1
value=1p
footprint=1206
device="ceramic capacitor"}
C {/foss/designs/final/INV.sym} 300 800 0 0 {name=x9}
C {lab_pin.sym} 300 640 1 0 {name=p29 sig_type=std_logic lab=Vdd}
C {gnd.sym} 300 720 0 0 {name=l1 lab=GND}
C {/foss/designs/final/TG.sym} 400 680 1 0 {name=x1}
C {gnd.sym} 360 660 1 0 {name=l2 lab=GND}
C {lab_pin.sym} 440 680 2 0 {name=p1 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} 260 680 0 0 {name=p2 sig_type=std_logic lab=phi2
}
C {/foss/designs/final/INV.sym} 300 560 0 0 {name=x2}
C {lab_pin.sym} 300 400 1 0 {name=p3 sig_type=std_logic lab=Vdd}
C {gnd.sym} 300 480 0 0 {name=l3 lab=GND}
C {/foss/designs/final/TG.sym} 400 440 1 0 {name=x3}
C {gnd.sym} 360 420 1 0 {name=l4 lab=GND}
C {/foss/designs/final/INV.sym} 600 560 0 0 {name=x4}
C {lab_pin.sym} 600 400 1 0 {name=p6 sig_type=std_logic lab=Vdd}
C {gnd.sym} 600 480 0 0 {name=l5 lab=GND}
C {/foss/designs/final/TG.sym} 700 440 1 0 {name=x5}
C {gnd.sym} 660 420 1 0 {name=l7 lab=GND}
C {lab_pin.sym} 740 440 2 0 {name=p7 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} 560 440 0 0 {name=p8 sig_type=std_logic lab=phi2
}
C {/foss/designs/final/INV.sym} 600 800 0 0 {name=x6}
C {lab_pin.sym} 600 640 1 0 {name=p17 sig_type=std_logic lab=Vdd}
C {gnd.sym} 600 720 0 0 {name=l8 lab=GND}
C {/foss/designs/final/TG.sym} 700 680 1 0 {name=x7}
C {gnd.sym} 660 660 1 0 {name=l9 lab=GND}
C {capa.sym} 510 560 3 0 {name=Cin2
m=1
value=80f
footprint=1206
device="ceramic capacitor"}
C {lab_pin.sym} 700 760 3 0 {name=p22 sig_type=std_logic lab=Vcm}
C {lab_pin.sym} 400 360 1 0 {name=p4 sig_type=std_logic lab=Vin}
C {lab_pin.sym} 740 660 2 0 {name=p5 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} 740 420 2 0 {name=p20 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} 440 420 2 0 {name=p21 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} 260 440 0 0 {name=p23 sig_type=std_logic lab=phi1}
C {lab_pin.sym} 560 680 0 0 {name=p24 sig_type=std_logic lab=phi1}
C {lab_pin.sym} 740 680 2 0 {name=p25 sig_type=std_logic lab=phi1}
C {lab_pin.sym} 440 440 2 0 {name=p26 sig_type=std_logic lab=phi1}
C {gnd.sym} 880 860 3 0 {name=l10 lab=GND}
