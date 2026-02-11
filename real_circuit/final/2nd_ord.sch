v {xschem version=3.4.8RC file_version=1.3}
G {}
K {}
V {}
S {}
F {}
E {}
N -400 140 -400 180 {lab=#net1}
N -400 100 -400 140 {lab=#net1}
N -100 100 -100 140 {lab=#net2}
N -100 140 -100 180 {lab=#net2}
N -400 340 -400 440 {lab=#net3}
N -400 440 20 440 {lab=#net3}
N 20 -170 20 -60 {lab=#net4}
N 20 -170 110 -170 {lab=#net4}
N 190 -80 260 -80 {lab=#net5}
N 170 -170 260 -170 {lab=#net5}
N 260 -170 260 -80 {lab=#net5}
N 260 -80 380 -80 {lab=#net5}
N 700 -140 720 -140 {lab=#net6}
N 20 60 20 440 {lab=#net3}
N 20 60 600 60 {lab=#net3}
N -1240 140 -1240 180 {lab=#net7}
N -1240 140 -1160 140 {lab=#net7}
N -1240 100 -1240 140 {lab=#net7}
N -1100 140 -940 140 {lab=#net8}
N -940 100 -940 140 {lab=#net8}
N -940 140 -940 180 {lab=#net8}
N -1240 340 -1240 440 {lab=#net3}
N -940 -60 -820 -60 {lab=#net9}
N -1240 440 -400 440 {lab=#net3}
N -820 -60 -750 -60 {lab=#net9}
N -820 -170 -820 -60 {lab=#net9}
N -820 -170 -730 -170 {lab=#net9}
N -650 -80 -580 -80 {lab=#net10}
N -670 -170 -580 -170 {lab=#net10}
N -580 -170 -580 -80 {lab=#net10}
N -580 -80 -580 -60 {lab=#net10}
N -1280 -170 -1240 -170 {lab=Vin}
N -1240 -170 -1240 -60 {lab=Vin}
N 700 -140 700 60 {lab=#net6}
N 680 -140 700 -140 {lab=#net6}
N 850 -140 850 -120 {lab=Vout}
N 820 -140 850 -140 {lab=Vout}
N -260 140 -100 140 {lab=#net2}
N 20 -60 90 -60 {lab=#net4}
N -580 -60 -340 -60 {lab=#net10}
N -400 140 -320 140 {lab=#net1}
N -280 -60 -260 -60 {lab=#net2}
N -260 -60 -260 140 {lab=#net2}
N -100 -60 20 -60 {lab=#net4}
C {capa.sym} 850 -90 0 0 {name=C_LOAD
m=1
value=0.2p
footprint=1206
device="ceramic capacitor"}
C {./INV.sym} -500 380 0 0 {name=x9}
C {lab_pin.sym} -500 220 1 0 {name=p29 sig_type=std_logic lab=Vdd}
C {gnd.sym} -500 300 0 0 {name=l1 lab=GND}
C {./TG.sym} -400 260 1 0 {name=x1}
C {gnd.sym} -440 240 1 0 {name=l2 lab=GND}
C {lab_pin.sym} -360 260 2 0 {name=p1 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} -540 260 0 0 {name=p2 sig_type=std_logic lab=phi2
}
C {./INV.sym} -500 140 0 0 {name=x2}
C {lab_pin.sym} -500 -20 1 0 {name=p3 sig_type=std_logic lab=Vdd}
C {gnd.sym} -500 60 0 0 {name=l3 lab=GND}
C {./TG.sym} -400 20 1 0 {name=x3}
C {gnd.sym} -440 0 1 0 {name=l4 lab=GND}
C {./INV.sym} -200 140 0 0 {name=x4}
C {lab_pin.sym} -200 -20 1 0 {name=p6 sig_type=std_logic lab=Vdd}
C {gnd.sym} -200 60 0 0 {name=l5 lab=GND}
C {./TG.sym} -100 20 1 0 {name=x5}
C {gnd.sym} -140 0 1 0 {name=l7 lab=GND}
C {lab_pin.sym} -60 20 2 0 {name=p7 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} -240 20 0 0 {name=p8 sig_type=std_logic lab=phi2
}
C {./INV.sym} -200 380 0 0 {name=x6}
C {lab_pin.sym} -200 220 1 0 {name=p17 sig_type=std_logic lab=Vdd}
C {gnd.sym} -200 300 0 0 {name=l8 lab=GND}
C {./TG.sym} -100 260 1 0 {name=x7}
C {gnd.sym} -140 240 1 0 {name=l9 lab=GND}
C {lab_pin.sym} -100 340 3 0 {name=p22 sig_type=std_logic lab=Vcm}
C {lab_pin.sym} -1280 -170 0 0 {name=p4 sig_type=std_logic lab=Vin}
C {lab_pin.sym} -60 240 2 0 {name=p5 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -60 0 2 0 {name=p20 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -360 0 2 0 {name=p21 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -540 20 0 0 {name=p23 sig_type=std_logic lab=phi1}
C {lab_pin.sym} -240 260 0 0 {name=p24 sig_type=std_logic lab=phi1}
C {lab_pin.sym} -60 260 2 0 {name=p25 sig_type=std_logic lab=phi1}
C {lab_pin.sym} -360 20 2 0 {name=p26 sig_type=std_logic lab=phi1}
C {gnd.sym} 850 -60 0 0 {name=l10 lab=GND}
C {capa.sym} 140 -170 3 0 {name=Cint2
m=1
value=1p
footprint=1206
device="ceramic capacitor"}
C {./5T_OTA.sym} 140 -80 0 0 {name=x8}
C {lab_pin.sym} 140 -120 1 0 {name=p9 sig_type=std_logic lab=Vdd}
C {gnd.sym} 140 -40 0 0 {name=l6 lab=GND}
C {gnd.sym} 70 400 0 0 {name=l11 lab=GND}
C {vsource.sym} 200 370 0 0 {name=VDD value=3 savecurrent=false}
C {gnd.sym} 200 400 0 0 {name=l12 lab=GND}
C {lab_pin.sym} 70 340 1 0 {name=p10 sig_type=std_logic lab=Vin}
C {lab_pin.sym} 200 340 1 0 {name=p11 sig_type=std_logic lab=Vdd}
C {vsource.sym} 290 370 0 0 {name=VCM value=1.5 savecurrent=false}
C {gnd.sym} 290 400 0 0 {name=l13 lab=GND}
C {lab_pin.sym} 290 340 1 0 {name=p12 sig_type=std_logic lab=Vcm}
C {vsource.sym} 70 370 0 0 {name=Vin value="sin(1.5 0.8 1000)" savecurrent=false}
C {code_shown.sym} 60 180 0 0 {name=Sim only_toplevel=false 
value="
.control
save all
tran 1u 1m 0 1u
.endc
"}
C {vsource.sym} 370 230 0 0 {name=Vphi1 value="PULSE(0V 3V 0 1n 1n 490n 1u)" savecurrent=false}
C {gnd.sym} 370 260 0 0 {name=l14 lab=GND}
C {lab_pin.sym} 370 200 1 0 {name=p13 sig_type=std_logic lab=phi1}
C {vsource.sym} 370 370 0 0 {name=Vphi2 value="PULSE(0V 3V 500n 1n 1n 490n 1u)" savecurrent=false}
C {gnd.sym} 370 400 0 0 {name=l15 lab=GND}
C {lab_pin.sym} 370 340 1 0 {name=p14 sig_type=std_logic lab=phi2
}
C {devices/code_shown.sym} 60 110 0 0 {name=MODEL only_toplevel=true
format="tcleval( @value )"
value="
.lib cornerMOShv.lib mos_tt
"}
C {lab_pin.sym} 90 -100 0 0 {name=p15 sig_type=std_logic lab=Vcm}
C {lab_pin.sym} 380 -100 0 0 {name=p16 sig_type=std_logic lab=Vcm}
C {lab_pin.sym} 380 -120 0 0 {name=p18 sig_type=std_logic lab=phi1}
C {lab_pin.sym} 380 -140 0 0 {name=p19 sig_type=std_logic lab=Vdd}
C {./ideal_comp.sym} 530 -110 0 0 {name=x10}
C {./INV.sym} 760 -20 0 0 {name=x11}
C {lab_pin.sym} 760 -180 1 0 {name=p27 sig_type=std_logic lab=Vdd}
C {gnd.sym} 760 -100 0 0 {name=l16 lab=GND}
C {./INV.sym} 660 180 0 1 {name=x12}
C {lab_pin.sym} 660 20 3 1 {name=p28 sig_type=std_logic lab=Vdd}
C {gnd.sym} 660 100 0 1 {name=l18 lab=GND}
C {./INV.sym} -1340 380 0 0 {name=x13}
C {lab_pin.sym} -1340 220 1 0 {name=p30 sig_type=std_logic lab=Vdd}
C {gnd.sym} -1340 300 0 0 {name=l19 lab=GND}
C {./TG.sym} -1240 260 1 0 {name=x14}
C {gnd.sym} -1280 240 1 0 {name=l20 lab=GND}
C {lab_pin.sym} -1200 260 2 0 {name=p31 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} -1380 260 0 0 {name=p32 sig_type=std_logic lab=phi2
}
C {./INV.sym} -1340 140 0 0 {name=x15}
C {lab_pin.sym} -1340 -20 1 0 {name=p33 sig_type=std_logic lab=Vdd}
C {gnd.sym} -1340 60 0 0 {name=l21 lab=GND}
C {./TG.sym} -1240 20 1 0 {name=x16}
C {gnd.sym} -1280 0 1 0 {name=l22 lab=GND}
C {./INV.sym} -1040 140 0 0 {name=x17}
C {lab_pin.sym} -1040 -20 1 0 {name=p34 sig_type=std_logic lab=Vdd}
C {gnd.sym} -1040 60 0 0 {name=l23 lab=GND}
C {./TG.sym} -940 20 1 0 {name=x18}
C {gnd.sym} -980 0 1 0 {name=l24 lab=GND}
C {lab_pin.sym} -900 20 2 0 {name=p35 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} -1080 20 0 0 {name=p36 sig_type=std_logic lab=phi2
}
C {./INV.sym} -1040 380 0 0 {name=x19}
C {lab_pin.sym} -1040 220 1 0 {name=p37 sig_type=std_logic lab=Vdd}
C {gnd.sym} -1040 300 0 0 {name=l25 lab=GND}
C {./TG.sym} -940 260 1 0 {name=x20}
C {gnd.sym} -980 240 1 0 {name=l26 lab=GND}
C {capa.sym} -1130 140 3 0 {name=Cin1
m=1
value=88f
footprint=1206
device="ceramic capacitor"}
C {lab_pin.sym} -940 340 3 0 {name=p38 sig_type=std_logic lab=Vcm}
C {lab_pin.sym} -900 240 2 0 {name=p39 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -900 0 2 0 {name=p40 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -1200 0 2 0 {name=p41 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -1380 20 0 0 {name=p42 sig_type=std_logic lab=phi1}
C {lab_pin.sym} -1080 260 0 0 {name=p43 sig_type=std_logic lab=phi1}
C {lab_pin.sym} -900 260 2 0 {name=p44 sig_type=std_logic lab=phi1}
C {lab_pin.sym} -1200 20 2 0 {name=p45 sig_type=std_logic lab=phi1}
C {capa.sym} -700 -170 3 0 {name=Cint1
m=1
value=1p
footprint=1206
device="ceramic capacitor"}
C {./5T_OTA.sym} -700 -80 0 0 {name=x21}
C {lab_pin.sym} -700 -120 1 0 {name=p46 sig_type=std_logic lab=Vdd}
C {gnd.sym} -700 -40 0 0 {name=l27 lab=GND}
C {lab_pin.sym} -750 -100 0 0 {name=p47 sig_type=std_logic lab=Vcm}
C {capa.sym} -290 140 1 1 {name=Cin2
m=1
value=356f
footprint=1206
device="ceramic capacitor"}
C {lab_pin.sym} 850 -140 1 0 {name=p48 sig_type=std_logic lab=Vout}
C {capa.sym} -310 -60 3 0 {name=Cin3
m=1
value=88f
footprint=1206
device="ceramic capacitor"}
