v {xschem version=3.4.8RC file_version=1.3}
G {}
K {}
V {}
S {}
F {}
E {}
N 1280 -460 1320 -460 {lab=#net1}
N 1280 -460 1280 -70 {lab=#net1}
N 1240 -460 1280 -460 {lab=#net1}
N 500 -400 550 -400 {lab=#net2}
N 880 -400 940 -400 {lab=Vint}
N 880 -460 880 -400 {lab=Vint}
N 850 -400 880 -400 {lab=Vint}
N 720 -460 880 -460 {lab=Vint}
N 1260 -70 1280 -70 {lab=#net1}
N -90 -460 -90 -400 {lab=#net3}
N -120 -400 -90 -400 {lab=#net3}
N -250 -460 -90 -460 {lab=#net3}
N -970 -140 -970 0 {lab=#net4}
N -1010 0 -1010 460 {lab=#net4}
N -1010 0 -970 0 {lab=#net4}
N -640 400 -640 460 {lab=#net5}
N -710 460 -640 460 {lab=#net5}
N -710 0 -710 460 {lab=#net5}
N -660 -140 -660 0 {lab=#net5}
N -590 -460 -590 -80 {lab=Q}
N -960 400 -960 520 {lab=#net6}
N -970 0 -870 0 {lab=#net4}
N -810 0 -710 0 {lab=#net5}
N -710 0 -660 0 {lab=#net5}
N -640 -140 -640 -80 {lab=Q}
N -640 -80 -590 -80 {lab=Q}
N -1010 460 -940 460 {lab=#net4}
N -940 400 -940 460 {lab=#net4}
N -620 -500 -620 -440 {lab=#net7}
N -540 -500 -540 -270 {lab=#net7}
N -950 -500 -950 -440 {lab=#net8}
N -890 -500 -890 -380 {lab=#net8}
N -950 -500 -890 -500 {lab=#net8}
N -620 40 -620 100 {lab=#net9}
N -620 40 -560 40 {lab=#net9}
N -560 40 -560 100 {lab=#net9}
N -920 40 -920 100 {lab=#net10}
N -860 40 -860 150 {lab=#net10}
N -920 40 -860 40 {lab=#net10}
N -620 -500 -540 -500 {lab=#net7}
N -470 -460 -470 -400 {lab=Q}
N -590 -460 -470 -460 {lab=Q}
N 0 -140 0 0 {lab=#net11}
N -40 0 -40 460 {lab=#net11}
N -40 0 0 0 {lab=#net11}
N 330 400 330 460 {lab=#net12}
N 260 460 330 460 {lab=#net12}
N 260 0 260 460 {lab=#net12}
N 380 -460 380 -80 {lab=#net2}
N 10 400 10 520 {lab=#net6}
N 0 0 100 0 {lab=#net11}
N 160 0 260 0 {lab=#net12}
N 260 0 310 0 {lab=#net12}
N 330 -140 330 -80 {lab=#net2}
N 330 -80 380 -80 {lab=#net2}
N -40 460 30 460 {lab=#net11}
N 30 400 30 460 {lab=#net11}
N 350 -500 350 -440 {lab=#net13}
N 430 -500 430 -290 {lab=#net13}
N 20 -500 20 -440 {lab=#net14}
N 80 -500 80 -440 {lab=#net14}
N 20 -500 80 -500 {lab=#net14}
N 350 40 350 100 {lab=#net15}
N 50 40 50 100 {lab=#net16}
N 350 -500 430 -500 {lab=#net13}
N 500 -460 660 -460 {lab=#net2}
N -960 520 10 520 {lab=#net6}
N 500 -460 500 -400 {lab=#net2}
N 470 -90 470 520 {lab=#net6}
N 10 520 470 520 {lab=#net6}
N 470 -90 960 -90 {lab=#net6}
N -90 -400 -90 -100 {lab=#net3}
N -90 -100 -20 -100 {lab=#net3}
N -20 -140 -20 -100 {lab=#net3}
N 310 -140 310 0 {lab=#net12}
N 1460 -460 1460 -410 {lab=Vout}
N 1460 -460 1480 -460 {lab=Vout}
N 1420 -460 1460 -460 {lab=Vout}
N 380 -460 500 -460 {lab=#net2}
N -470 -400 -420 -400 {lab=Q}
N -470 -460 -310 -460 {lab=Q}
N 960 -90 960 -70 {lab=#net6}
N 960 -70 1160 -70 {lab=#net6}
N 50 40 90 40 {lab=#net16}
N 90 40 90 120 {lab=#net16}
N 390 40 390 330 {lab=#net15}
N 350 40 390 40 {lab=#net15}
C {gnd.sym} 530 260 0 0 {name=l1 lab=GND}
C {vsource.sym} 660 230 0 0 {name=VDD value=3 savecurrent=false}
C {gnd.sym} 660 260 0 0 {name=l4 lab=GND}
C {lab_pin.sym} 530 200 1 0 {name=p3 sig_type=std_logic lab=Vin}
C {lab_pin.sym} 660 200 1 0 {name=p4 sig_type=std_logic lab=Vdd}
C {vsource.sym} 750 230 0 0 {name=VCM value=1.5 savecurrent=false}
C {gnd.sym} 750 260 0 0 {name=l5 lab=GND}
C {lab_pin.sym} 750 200 1 0 {name=p6 sig_type=std_logic lab=Vcm}
C {vsource.sym} 530 230 0 0 {name=Vin value="sin(1.5 0.8 200)" savecurrent=false}
C {code_shown.sym} 520 40 0 0 {name=Sim only_toplevel=false 
value="
.tran 10u 5m
.control
save all
write real_test.raw
.endc
"}
C {vsource.sym} 830 90 0 0 {name=Vphi1 value="PULSE(0V 3V 0 1n 1n 490n 1u)" savecurrent=false}
C {gnd.sym} 830 120 0 0 {name=l6 lab=GND}
C {lab_pin.sym} 830 60 1 0 {name=p7 sig_type=std_logic lab=phi1}
C {vsource.sym} 830 230 0 0 {name=Vphi2 value="PULSE(0V 3V 500n 1n 1n 490n 1u)" savecurrent=false}
C {gnd.sym} 830 260 0 0 {name=l7 lab=GND}
C {lab_pin.sym} 830 200 1 0 {name=p8 sig_type=std_logic lab=phi2
}
C {capa.sym} 130 0 1 1 {name=C2
m=1
value=338.12f
footprint=1206
device="ceramic capacitor"}
C {lab_pin.sym} 1480 -460 0 1 {name=p19 sig_type=std_logic lab=Vout}
C {lab_pin.sym} 550 -420 0 0 {name=p21 sig_type=std_logic lab=Vcm}
C {lab_pin.sym} 940 -420 0 0 {name=p22 sig_type=std_logic lab=Vcm}
C {lab_pin.sym} 940 -440 0 0 {name=p23 sig_type=std_logic lab=phi1}
C {lab_pin.sym} 940 -460 0 0 {name=p24 sig_type=std_logic lab=Vdd}
C {capa.sym} 690 -460 3 0 {name=Cint2
m=1
value=1.014p
footprint=1206
device="ceramic capacitor"}
C {lab_pin.sym} 1220 -110 1 0 {name=p25 sig_type=std_logic lab=Vdd}
C {gnd.sym} 1220 -30 0 0 {name=l9 lab=GND}
C {lab_pin.sym} 880 -400 3 0 {name=p26 sig_type=std_logic lab=Vint}
C {capa.sym} -840 0 3 0 {name=C1
m=1
value=84.53f
footprint=1206
device="ceramic capacitor"}
C {capa.sym} -280 -460 3 0 {name=Cint1
m=1
value=1.014p
footprint=1206
device="ceramic capacitor"}
C {/foss/designs/ideal/ideal_comp.sym} 1090 -430 0 0 {name=x1}
C {devices/code_shown.sym} 520 -30 0 0 {name=MODEL only_toplevel=true
format="tcleval( @value )"
value="
.lib cornerMOShv.lib mos_tt
"}
C {lab_pin.sym} -990 -140 3 0 {name=p17 sig_type=std_logic lab=Vin}
C {lab_pin.sym} -970 -440 1 0 {name=p2 sig_type=std_logic lab=phi1}
C {lab_pin.sym} -640 -440 1 0 {name=p37 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} -940 100 1 0 {name=p38 sig_type=std_logic lab=phi2
}
C {/foss/designs/real/real_switch.sym} -980 -290 1 0 {name=x6}
C {/foss/designs/real/real_switch.sym} -650 -290 1 0 {name=x7}
C {/foss/designs/real/real_switch.sym} -950 250 1 0 {name=x8}
C {/foss/designs/real/real_switch.sym} -650 250 1 0 {name=x9}
C {lab_pin.sym} -950 -140 3 0 {name=p39 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -620 -140 3 0 {name=p40 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -620 400 3 0 {name=p41 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -920 400 3 0 {name=p42 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -640 100 1 0 {name=p43 sig_type=std_logic lab=phi1}
C {lab_pin.sym} -660 400 3 0 {name=p44 sig_type=std_logic lab=Vcm}
C {gnd.sym} -1010 -140 1 0 {name=l10 lab=GND}
C {gnd.sym} -980 400 1 0 {name=l11 lab=GND}
C {gnd.sym} -680 400 1 0 {name=l12 lab=GND}
C {gnd.sym} -680 -140 1 0 {name=l13 lab=GND}
C {lab_pin.sym} -460 100 2 0 {name=p49 sig_type=std_logic lab=phi1}
C {lab_pin.sym} -760 150 2 0 {name=p50 sig_type=std_logic lab=phi2}
C {lab_pin.sym} -790 -380 2 0 {name=p51 sig_type=std_logic lab=phi1}
C {lab_pin.sym} -440 -270 2 0 {name=p52 sig_type=std_logic lab=phi2}
C {lab_pin.sym} 0 -440 1 0 {name=p10 sig_type=std_logic lab=phi1}
C {lab_pin.sym} 330 -440 1 0 {name=p11 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} 30 100 1 0 {name=p12 sig_type=std_logic lab=phi2
}
C {/foss/designs/real/real_switch.sym} -10 -290 1 0 {name=x14}
C {/foss/designs/real/real_switch.sym} 320 -290 1 0 {name=x15}
C {/foss/designs/real/real_switch.sym} 20 250 1 0 {name=x16}
C {/foss/designs/real/real_switch.sym} 320 250 1 0 {name=x17}
C {lab_pin.sym} 20 -140 3 0 {name=p13 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} 350 -140 3 0 {name=p14 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} 350 400 3 0 {name=p15 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} 50 400 3 0 {name=p16 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} 330 100 1 0 {name=p18 sig_type=std_logic lab=phi1}
C {lab_pin.sym} 310 400 3 0 {name=p27 sig_type=std_logic lab=Vcm}
C {gnd.sym} -40 -140 1 0 {name=l18 lab=GND}
C {gnd.sym} -10 400 1 0 {name=l19 lab=GND}
C {gnd.sym} 290 400 1 0 {name=l20 lab=GND}
C {gnd.sym} 290 -140 1 0 {name=l21 lab=GND}
C {lab_pin.sym} 490 330 2 0 {name=p32 sig_type=std_logic lab=phi1}
C {lab_pin.sym} 190 120 2 0 {name=p33 sig_type=std_logic lab=phi2}
C {lab_pin.sym} 180 -440 2 0 {name=p34 sig_type=std_logic lab=phi1}
C {lab_pin.sym} 530 -290 2 0 {name=p35 sig_type=std_logic lab=phi2}
C {capa.sym} 1460 -380 0 0 {name=C3
m=1
value=0.01p
footprint=1206
device="ceramic capacitor"}
C {gnd.sym} 1460 -350 0 0 {name=l3 lab=GND}
C {lab_pin.sym} -590 -460 0 0 {name=p1 sig_type=std_logic lab=Q}
C {/foss/designs/real/simple_OTA.sym} 700 -400 0 0 {name=x2}
C {lab_pin.sym} 850 -420 1 0 {name=p5 sig_type=std_logic lab=Vdd}
C {gnd.sym} 850 -380 0 0 {name=l2 lab=GND}
C {lab_pin.sym} -420 -420 0 0 {name=p9 sig_type=std_logic lab=Vcm}
C {/foss/designs/real/simple_OTA.sym} -270 -400 0 0 {name=x3}
C {lab_pin.sym} -120 -420 1 0 {name=p36 sig_type=std_logic lab=Vdd}
C {gnd.sym} -120 -380 0 0 {name=l26 lab=GND}
C {/foss/designs/final/INV.sym} 1220 -70 0 1 {name=x4}
C {/foss/designs/final/INV.sym} 1360 -460 0 0 {name=x22}
C {gnd.sym} 1360 -420 0 0 {name=l27 lab=GND}
C {lab_pin.sym} 1360 -500 1 0 {name=p53 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} 490 -330 1 0 {name=p20 sig_type=std_logic lab=Vdd}
C {gnd.sym} 490 -250 0 0 {name=l8 lab=GND}
C {/foss/designs/final/INV.sym} 490 -290 0 1 {name=x5}
C {lab_pin.sym} 150 80 1 0 {name=p29 sig_type=std_logic lab=Vdd}
C {gnd.sym} 150 160 0 0 {name=l23 lab=GND}
C {/foss/designs/final/INV.sym} 150 120 0 1 {name=x19}
C {lab_pin.sym} 450 290 1 0 {name=p30 sig_type=std_logic lab=Vdd}
C {gnd.sym} 450 370 0 0 {name=l24 lab=GND}
C {/foss/designs/final/INV.sym} 450 330 0 1 {name=x20}
C {lab_pin.sym} -480 -310 1 0 {name=p31 sig_type=std_logic lab=Vdd}
C {gnd.sym} -480 -230 0 0 {name=l25 lab=GND}
C {/foss/designs/final/INV.sym} -480 -270 0 1 {name=x11}
C {lab_pin.sym} -830 -420 1 0 {name=p46 sig_type=std_logic lab=Vdd}
C {gnd.sym} -830 -340 0 0 {name=l15 lab=GND}
C {/foss/designs/final/INV.sym} -830 -380 0 1 {name=x21}
C {lab_pin.sym} 140 -480 1 0 {name=p28 sig_type=std_logic lab=Vdd}
C {gnd.sym} 140 -400 0 0 {name=l14 lab=GND}
C {/foss/designs/final/INV.sym} 140 -440 0 1 {name=x10}
C {lab_pin.sym} -500 60 1 0 {name=p45 sig_type=std_logic lab=Vdd}
C {gnd.sym} -500 140 0 0 {name=l17 lab=GND}
C {/foss/designs/final/INV.sym} -500 100 0 1 {name=x12}
C {lab_pin.sym} -800 110 1 0 {name=p48 sig_type=std_logic lab=Vdd}
C {gnd.sym} -800 190 0 0 {name=l22 lab=GND}
C {/foss/designs/final/INV.sym} -800 150 0 1 {name=x13}
