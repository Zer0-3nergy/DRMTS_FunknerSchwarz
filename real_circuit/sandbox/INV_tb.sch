v {xschem version=3.4.8RC file_version=1.3}
G {}
K {}
V {}
S {}
F {}
E {}
C {lab_pin.sym} -140 -170 0 1 {name=p19 sig_type=std_logic lab=phiout}
C {lab_pin.sym} -200 -210 2 0 {name=p20 sig_type=std_logic lab=Vdd}
C {gnd.sym} -200 -130 0 0 {name=l8 lab=GND}
C {gnd.sym} -800 30 0 0 {name=l1 lab=GND}
C {vsource.sym} -670 0 0 0 {name=VDD value=3 savecurrent=false}
C {gnd.sym} -670 30 0 0 {name=l4 lab=GND}
C {lab_pin.sym} -800 -30 1 0 {name=p3 sig_type=std_logic lab=Vin}
C {lab_pin.sym} -670 -30 1 0 {name=p4 sig_type=std_logic lab=Vdd}
C {vsource.sym} -800 0 0 0 {name=Vin value="sin(1.5 0.8 200)" savecurrent=false}
C {code_shown.sym} -810 -190 0 0 {name=Sim only_toplevel=false 
value="
.tran 1u 5m
.control
save all
.endc
"}
C {vsource.sym} -590 0 0 0 {name=Vphi value="PULSE(0V 3V 0 1n 1n 490n 1u)" savecurrent=false}
C {gnd.sym} -590 30 0 0 {name=l6 lab=GND}
C {lab_pin.sym} -590 -30 1 0 {name=p7 sig_type=std_logic lab=phi}
C {devices/code_shown.sym} -810 -260 0 0 {name=MODEL only_toplevel=true
format="tcleval( @value )"
value="
.lib cornerMOShv.lib mos_tt
"}
C {lab_pin.sym} -240 -170 0 0 {name=p1 sig_type=std_logic lab=phi}
C {lab_pin.sym} -350 -170 0 1 {name=p2 sig_type=std_logic lab=Vout}
C {lab_pin.sym} -410 -210 2 0 {name=p5 sig_type=std_logic lab=Vdd}
C {gnd.sym} -410 -130 0 0 {name=l2 lab=GND}
C {lab_pin.sym} -450 -170 0 0 {name=p6 sig_type=std_logic lab=Vin}
C {/foss/designs/final/INV.sym} -410 -50 0 0 {name=x1}
C {/foss/designs/final/INV.sym} -200 -50 0 0 {name=x2}
