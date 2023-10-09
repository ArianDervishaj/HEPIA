create_project vp "/home/arian.dervisha/Desktop//Add1bit/Add8bits/sandbox//vp"
set_property part xc7a35tcpg236-1 [current_project]
set_property target_language VHDL [current_project]
add_files "/home/arian.dervisha/Desktop//Add1bit/Add8bits/vhdl/gates/AND_GATE_entity.vhd"
add_files "/home/arian.dervisha/Desktop//Add1bit/Add8bits/vhdl/gates/OR_GATE_3_INPUTS_entity.vhd"
add_files "/home/arian.dervisha/Desktop//Add1bit/Add8bits/vhdl/gates/XOR_GATE_ONEHOT_entity.vhd"
add_files "/home/arian.dervisha/Desktop//Add1bit/Add8bits/vhdl/circuit/Add1bit_entity.vhd"
add_files "/home/arian.dervisha/Desktop//Add1bit/Add8bits/vhdl/circuit/Add4bits_entity.vhd"
add_files "/home/arian.dervisha/Desktop//Add1bit/Add8bits/vhdl/circuit/Add8bits_entity.vhd"
add_files "/home/arian.dervisha/Desktop//Add1bit/Add8bits/vhdl/toplevel/LogisimToplevelShell_entity.vhd"
add_files "/home/arian.dervisha/Desktop//Add1bit/Add8bits/vhdl/gates/AND_GATE_behavior.vhd"
add_files "/home/arian.dervisha/Desktop//Add1bit/Add8bits/vhdl/gates/OR_GATE_3_INPUTS_behavior.vhd"
add_files "/home/arian.dervisha/Desktop//Add1bit/Add8bits/vhdl/gates/XOR_GATE_ONEHOT_behavior.vhd"
add_files "/home/arian.dervisha/Desktop//Add1bit/Add8bits/vhdl/circuit/Add1bit_behavior.vhd"
add_files "/home/arian.dervisha/Desktop//Add1bit/Add8bits/vhdl/circuit/Add4bits_behavior.vhd"
add_files "/home/arian.dervisha/Desktop//Add1bit/Add8bits/vhdl/circuit/Add8bits_behavior.vhd"
add_files "/home/arian.dervisha/Desktop//Add1bit/Add8bits/vhdl/toplevel/LogisimToplevelShell_behavior.vhd"
add_files -fileset constrs_1 "/home/arian.dervisha/Desktop/Add1bit/Add8bits/xdc/vivadoConstraints.xdc"
exit
