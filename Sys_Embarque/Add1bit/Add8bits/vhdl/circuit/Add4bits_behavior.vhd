--==============================================================================
--== Logisim goes FPGA automatic generated VHDL code                          ==
--==                                                                          ==
--==                                                                          ==
--== Project   : Add1bit                                                      ==
--== Component : Add4bits                                                     ==
--==                                                                          ==
--==============================================================================

ARCHITECTURE PlatformIndependent OF Add4bits IS 

   -----------------------------------------------------------------------------
   -- Here all used components are defined                                    --
   -----------------------------------------------------------------------------
   COMPONENT Add1bit
      PORT ( A                         : IN  std_logic;
             B                         : IN  std_logic;
             C_in                      : IN  std_logic;
             C_out                     : OUT std_logic;
             D                         : OUT std_logic);
   END COMPONENT;


   -----------------------------------------------------------------------------
   -- Here all used signals are defined                                       --
   -----------------------------------------------------------------------------
   SIGNAL s_LOGISIM_BUS_12                   : std_logic_vector( 3 DOWNTO 0 );
   SIGNAL s_LOGISIM_BUS_18                   : std_logic_vector( 3 DOWNTO 0 );
   SIGNAL s_LOGISIM_BUS_19                   : std_logic_vector( 3 DOWNTO 0 );
   SIGNAL s_LOGISIM_NET_0                    : std_logic;
   SIGNAL s_LOGISIM_NET_1                    : std_logic;
   SIGNAL s_LOGISIM_NET_10                   : std_logic;
   SIGNAL s_LOGISIM_NET_13                   : std_logic;
   SIGNAL s_LOGISIM_NET_15                   : std_logic;

BEGIN

   -----------------------------------------------------------------------------
   -- Here all input connections are defined                                  --
   -----------------------------------------------------------------------------
   s_LOGISIM_NET_10                   <= C_in;
   s_LOGISIM_BUS_18(3 DOWNTO 0)       <= A;
   s_LOGISIM_BUS_19(3 DOWNTO 0)       <= B;

   -----------------------------------------------------------------------------
   -- Here all output connections are defined                                 --
   -----------------------------------------------------------------------------
   C_out                              <= s_LOGISIM_NET_15;
   D                                  <= s_LOGISIM_BUS_12(3 DOWNTO 0);

   -----------------------------------------------------------------------------
   -- Here all sub-circuits are defined                                       --
   -----------------------------------------------------------------------------
   add1bit_1 : Add1bit
      PORT MAP ( A                                  => s_LOGISIM_BUS_18(0),
                 B                                  => s_LOGISIM_BUS_19(0),
                 C_in                               => s_LOGISIM_NET_10,
                 C_out                              => s_LOGISIM_NET_1,
                 D                                  => s_LOGISIM_BUS_12(0));

   add1bit_2 : Add1bit
      PORT MAP ( A                                  => s_LOGISIM_BUS_18(1),
                 B                                  => s_LOGISIM_BUS_19(1),
                 C_in                               => s_LOGISIM_NET_1,
                 C_out                              => s_LOGISIM_NET_0,
                 D                                  => s_LOGISIM_BUS_12(1));

   add1bit_3 : Add1bit
      PORT MAP ( A                                  => s_LOGISIM_BUS_18(2),
                 B                                  => s_LOGISIM_BUS_19(2),
                 C_in                               => s_LOGISIM_NET_0,
                 C_out                              => s_LOGISIM_NET_13,
                 D                                  => s_LOGISIM_BUS_12(2));

   add1bit_4 : Add1bit
      PORT MAP ( A                                  => s_LOGISIM_BUS_18(3),
                 B                                  => s_LOGISIM_BUS_19(3),
                 C_in                               => s_LOGISIM_NET_13,
                 C_out                              => s_LOGISIM_NET_15,
                 D                                  => s_LOGISIM_BUS_12(3));


END PlatformIndependent;
