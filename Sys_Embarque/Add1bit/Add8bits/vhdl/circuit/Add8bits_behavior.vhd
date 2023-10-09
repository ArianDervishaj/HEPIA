--==============================================================================
--== Logisim goes FPGA automatic generated VHDL code                          ==
--==                                                                          ==
--==                                                                          ==
--== Project   : Add1bit                                                      ==
--== Component : Add8bits                                                     ==
--==                                                                          ==
--==============================================================================

ARCHITECTURE PlatformIndependent OF Add8bits IS 

   -----------------------------------------------------------------------------
   -- Here all used components are defined                                    --
   -----------------------------------------------------------------------------
   COMPONENT Add4bits
      PORT ( A                         : IN  std_logic_vector( 3 DOWNTO 0 );
             B                         : IN  std_logic_vector( 3 DOWNTO 0 );
             C_in                      : IN  std_logic;
             C_out                     : OUT std_logic;
             D                         : OUT std_logic_vector( 3 DOWNTO 0 ));
   END COMPONENT;


   -----------------------------------------------------------------------------
   -- Here all used signals are defined                                       --
   -----------------------------------------------------------------------------
   SIGNAL s_LOGISIM_BUS_10                   : std_logic_vector( 7 DOWNTO 0 );
   SIGNAL s_LOGISIM_BUS_11                   : std_logic_vector( 7 DOWNTO 0 );
   SIGNAL s_LOGISIM_BUS_8                    : std_logic_vector( 7 DOWNTO 0 );
   SIGNAL s_LOGISIM_NET_0                    : std_logic;
   SIGNAL s_LOGISIM_NET_3                    : std_logic;
   SIGNAL s_LOGISIM_NET_9                    : std_logic;

BEGIN

   -----------------------------------------------------------------------------
   -- Here all input connections are defined                                  --
   -----------------------------------------------------------------------------
   s_LOGISIM_BUS_11(7 DOWNTO 0)       <= B;
   s_LOGISIM_NET_3                    <= C_in;
   s_LOGISIM_BUS_10(7 DOWNTO 0)       <= A;

   -----------------------------------------------------------------------------
   -- Here all output connections are defined                                 --
   -----------------------------------------------------------------------------
   C_out                              <= s_LOGISIM_NET_9;
   D                                  <= s_LOGISIM_BUS_8(7 DOWNTO 0);

   -----------------------------------------------------------------------------
   -- Here all sub-circuits are defined                                       --
   -----------------------------------------------------------------------------
   add4bits_1 : Add4bits
      PORT MAP ( A                                  => s_LOGISIM_BUS_10(3 DOWNTO 0),
                 B                                  => s_LOGISIM_BUS_11(3 DOWNTO 0),
                 C_in                               => s_LOGISIM_NET_3,
                 C_out                              => s_LOGISIM_NET_0,
                 D                                  => s_LOGISIM_BUS_8(3 DOWNTO 0));

   add4bits_2 : Add4bits
      PORT MAP ( A                                  => s_LOGISIM_BUS_10(7 DOWNTO 4),
                 B                                  => s_LOGISIM_BUS_11(7 DOWNTO 4),
                 C_in                               => s_LOGISIM_NET_0,
                 C_out                              => s_LOGISIM_NET_9,
                 D                                  => s_LOGISIM_BUS_8(7 DOWNTO 4));


END PlatformIndependent;
