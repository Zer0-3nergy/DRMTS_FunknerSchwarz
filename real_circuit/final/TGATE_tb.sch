v {xschem version=3.4.8RC file_version=1.3}
G {}
K {}
V {}
S {}
F {}
E {}
N 20 -10 20 30 {lab=GND}
N 290 -10 290 30 {lab=GND}
N 310 -10 310 30 {lab=#net1}
C {lab_pin.sym} 20 -90 1 0 {name=p20 sig_type=std_logic lab=Vdd}
C {gnd.sym} -350 150 0 0 {name=l1 lab=GND}
C {vsource.sym} -220 120 0 0 {name=VDD value=3 savecurrent=false}
C {gnd.sym} -220 150 0 0 {name=l4 lab=GND}
C {lab_pin.sym} -350 90 1 0 {name=p3 sig_type=std_logic lab=Vin}
C {lab_pin.sym} -220 90 1 0 {name=p4 sig_type=std_logic lab=Vdd}
C {vsource.sym} -350 120 0 0 {name=Vin value="sin(1.5 0.8 200)" savecurrent=false}
C {code_shown.sym} -360 -70 0 0 {name=Sim1 only_toplevel=false 
value="
.tran 1u 5m
.control
save all
.endc
"}
C {vsource.sym} -140 120 0 0 {name=Vphi1 value="PULSE(0V 3V 0 1n 1n 490n 1u)" savecurrent=false}
C {gnd.sym} -140 150 0 0 {name=l6 lab=GND}
C {lab_pin.sym} -140 90 1 0 {name=p7 sig_type=std_logic lab=phi}
C {devices/code_shown.sym} -360 -140 0 0 {name=MODEL1 only_toplevel=true
format="tcleval( @value )"
value="
.lib cornerMOShv.lib mos_tt
"}
C {lab_pin.sym} 120 -50 0 1 {name=p2 sig_type=std_logic lab=Vout}
C {lab_pin.sym} 40 -90 1 0 {name=p5 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} 230 -50 2 1 {name=p11 sig_type=std_logic lab=pout}
C {lab_pin.sym} 290 -90 1 0 {name=p12 sig_type=std_logic lab=Vdd}
C {gnd.sym} 20 30 0 0 {name=l7 lab=GND}
C {capa.sym} 230 -20 0 0 {name=C1
m=1
value=1p
footprint=1206
device="ceramic capacitor"}
C {gnd.sym} 230 10 0 0 {name=l9 lab=GND}
C {lab_pin.sym} 40 -10 3 0 {name=p8 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -40 -50 0 0 {name=p1 sig_type=std_logic lab=Vin}
C {/foss/designs/final/TG.sym} 40 -50 0 0 {name=x1}
C {/foss/designs/final/TG.sym} 310 -50 0 0 {name=x2}
C {gnd.sym} 290 30 0 0 {name=l2 lab=GND}
C {/foss/designs/final/INV.sym} 430 90 3 0 {name=x3}
C {gnd.sym} 350 90 3 0 {name=l3 lab=GND}
C {lab_pin.sym} 270 90 0 0 {name=p6 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} 310 130 3 0 {name=p9 sig_type=std_logic lab=phi
}
C {lab_pin.sym} 310 -90 1 0 {name=p10 sig_type=std_logic lab=phi
}
C {lab_pin.sym} 390 -50 2 0 {name=p13 sig_type=std_logic lab=Vin}
