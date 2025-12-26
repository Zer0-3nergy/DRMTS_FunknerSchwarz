v {xschem version=3.4.8RC file_version=1.3}
G {}
K {}
V {}
S {}
F {}
E {}
N -420 70 -400 70 {lab=Vin}
N -210 70 -90 70 {lab=Vint}
N -110 90 -90 90 {lab=Vcm}
N -300 170 -300 210 {lab=#net1}
N -300 70 -300 110 {lab=Vint}
N -340 70 -300 70 {lab=Vint}
N 230 30 240 30 {lab=Vout}
N 230 30 230 210 {lab=Vout}
N 210 30 230 30 {lab=Vout}
N -210 70 -210 80 {lab=Vint}
N -300 70 -210 70 {lab=Vint}
N -100 190 -90 190 {lab=Vref}
N -210 140 -210 150 {lab=GND}
N -100 170 -90 170 {lab=GND}
N 210 210 230 210 {lab=Vout}
N -300 210 -90 210 {lab=#net1}
C {gnd.sym} -310 -20 0 0 {name=l1 lab=GND}
C {vsource.sym} -120 -50 0 0 {name=VDD value=5 savecurrent=false}
C {gnd.sym} -120 -20 0 0 {name=l4 lab=GND}
C {lab_pin.sym} -310 -80 1 0 {name=p3 sig_type=std_logic lab=Vin}
C {lab_pin.sym} -120 -80 1 0 {name=p4 sig_type=std_logic lab=Vdd}
C {vsource.sym} -60 -50 0 0 {name=VCM value=2.5 savecurrent=false}
C {gnd.sym} -60 -20 0 0 {name=l5 lab=GND}
C {lab_pin.sym} -60 -80 1 0 {name=p6 sig_type=std_logic lab=Vcm}
C {vsource.sym} -310 -50 0 0 {name=Vin value="sin(2.5 2.5 500k)" savecurrent=false}
C {code_shown.sym} -480 -90 0 0 {name=Sim only_toplevel=false 
value="
.tran 0.4u 4u
.save all
"}
C {capa.sym} -210 110 0 1 {name=Cin
m=1
value=1p
footprint=1206
device="ceramic capacitor"}
C {lab_pin.sym} -420 70 0 0 {name=p17 sig_type=std_logic lab=Vin}
C {lab_pin.sym} 240 30 0 1 {name=p19 sig_type=std_logic lab=Vout}
C {lab_pin.sym} -110 90 2 1 {name=p9 sig_type=std_logic lab=Vcm}
C {vsource.sym} 0 -50 0 0 {name=Vclk value="PULSE(0 5 0 10p 10p 5n 10n)" savecurrent=false}
C {gnd.sym} 0 -20 0 0 {name=l8 lab=GND}
C {lab_pin.sym} 0 -80 1 0 {name=p11 sig_type=std_logic lab=clk
}
C {gnd.sym} -210 150 0 0 {name=l9 lab=GND}
C {res.sym} -300 140 0 0 {name=R1
value=100k
footprint=1206
device=resistor
m=1}
C {res.sym} -370 70 1 0 {name=R2
value=100k
footprint=1206
device=resistor
m=1}
C {lab_pin.sym} -90 50 0 0 {name=p1 sig_type=std_logic lab=clk
}
C {lab_pin.sym} -90 30 0 0 {name=p2 sig_type=std_logic lab=Vdd}
C {gnd.sym} -100 170 2 0 {name=l6 lab=GND}
C {vsource.sym} -190 -50 0 0 {name=VREF value=5 savecurrent=false}
C {gnd.sym} -190 -20 0 0 {name=l7 lab=GND}
C {lab_pin.sym} -190 -80 1 0 {name=p5 sig_type=std_logic lab=Vref}
C {lab_pin.sym} -100 190 0 0 {name=p7 sig_type=std_logic lab=Vref}
C {lab_pin.sym} -160 70 1 0 {name=p10 sig_type=std_logic lab=Vint}
C {/foss/designs/delta_sigma/ideal/ideal_inv.sym} 60 190 2 0 {name=x2}
C {/foss/designs/delta_sigma/ideal/ideal_comp.sym} 60 60 0 0 {name=x1}
