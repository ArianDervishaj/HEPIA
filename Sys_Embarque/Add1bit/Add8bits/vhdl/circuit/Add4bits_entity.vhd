--==============================================================================
--== Logisim goes FPGA automatic generated VHDL code                          ==
--==                                                                          ==
--==                                                                          ==
--== Project   : Add1bit                                                      ==
--== Component : Add4bits                                                     ==
--==                                                                          ==
--==============================================================================


LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.numeric_std.all;

ENTITY Add4bits IS
   PORT ( A                         : IN  std_logic_vector( 3 DOWNTO 0 );
          B                         : IN  std_logic_vector( 3 DOWNTO 0 );
          C_in                      : IN  std_logic;
          C_out                     : OUT std_logic;
          D                         : OUT std_logic_vector( 3 DOWNTO 0 ));
END Add4bits;
