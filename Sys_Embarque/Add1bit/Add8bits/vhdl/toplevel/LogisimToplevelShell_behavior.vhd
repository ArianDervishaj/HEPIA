--==============================================================================
--== Logisim goes FPGA automatic generated VHDL code                          ==
--==                                                                          ==
--==                                                                          ==
--== Project   : Add1bit                                                      ==
--== Component : LogisimToplevelShell                                         ==
--==                                                                          ==
--==============================================================================

ARCHITECTURE PlatformIndependent OF LogisimToplevelShell IS 

   -----------------------------------------------------------------------------
   -- Here all used components are defined                                    --
   -----------------------------------------------------------------------------
   COMPONENT Add8bits
      PORT ( A                         : IN  std_logic_vector( 7 DOWNTO 0 );
             B                         : IN  std_logic_vector( 7 DOWNTO 0 );
             C_in                      : IN  std_logic;
             C_out                     : OUT std_logic;
             D                         : OUT std_logic_vector( 7 DOWNTO 0 ));
   END COMPONENT;


   -----------------------------------------------------------------------------
   -- Here all used signals are defined                                       --
   -----------------------------------------------------------------------------
   SIGNAL s_A                                : std_logic_vector( 7 DOWNTO 0 );
   SIGNAL s_B                                : std_logic_vector( 7 DOWNTO 0 );
   SIGNAL s_C_in                             : std_logic;
   SIGNAL s_C_out                            : std_logic;
   SIGNAL s_D                                : std_logic_vector( 7 DOWNTO 0 );

BEGIN
   -----------------------------------------------------------------------------
   -- Here all signal adaptations are performed                               --
   -----------------------------------------------------------------------------
   FPGA_OUTPUT_PIN_0 <= s_C_out;
   FPGA_OUTPUT_PIN_1 <= s_D(0);
   FPGA_OUTPUT_PIN_2 <= s_D(1);
   FPGA_OUTPUT_PIN_3 <= s_D(2);
   FPGA_OUTPUT_PIN_4 <= s_D(3);
   FPGA_OUTPUT_PIN_5 <= s_D(4);
   FPGA_OUTPUT_PIN_6 <= s_D(5);
   FPGA_OUTPUT_PIN_7 <= s_D(6);
   FPGA_OUTPUT_PIN_8 <= s_D(7);
   s_C_in <= FPGA_INPUT_PIN_0;
   s_A(0) <= FPGA_INPUT_PIN_1;
   s_A(1) <= FPGA_INPUT_PIN_2;
   s_A(2) <= FPGA_INPUT_PIN_3;
   s_A(3) <= FPGA_INPUT_PIN_4;
   s_A(4) <= FPGA_INPUT_PIN_5;
   s_A(5) <= FPGA_INPUT_PIN_6;
   s_A(6) <= FPGA_INPUT_PIN_7;
   s_A(7) <= FPGA_INPUT_PIN_8;
   s_B(0) <= FPGA_INPUT_PIN_9;
   s_B(1) <= FPGA_INPUT_PIN_10;
   s_B(2) <= FPGA_INPUT_PIN_11;
   s_B(3) <= FPGA_INPUT_PIN_12;
   s_B(4) <= FPGA_INPUT_PIN_13;
   s_B(5) <= FPGA_INPUT_PIN_14;
   s_B(6) <= FPGA_INPUT_PIN_15;
   s_B(7) <= FPGA_INPUT_PIN_16;
   -----------------------------------------------------------------------------
   -- Here all inlined adaptations are performed                              --
   -----------------------------------------------------------------------------

   -----------------------------------------------------------------------------
   -- Here the toplevel component is connected                                --
   -----------------------------------------------------------------------------
   Add8bits_0 : Add8bits
      PORT MAP ( A                                  => s_A,
                 B                                  => s_B,
                 C_in                               => s_C_in,
                 C_out                              => s_C_out,
                 D                                  => s_D);

END PlatformIndependent;
