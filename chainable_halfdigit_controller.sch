EESchema Schematic File Version 2
LIBS:arduino
LIBS:NRF24L01
LIBS:power
LIBS:device
LIBS:switches
LIBS:relays
LIBS:motors
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:chainable_halfdigit_controller-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L USB_OTG J1
U 1 1 5A08563A
P 7300 3300
F 0 "J1" H 7100 3750 50  0000 L CNN
F 1 "USB_OTG" H 7100 3650 50  0000 L CNN
F 2 "lib_fp:ST-USB-013A" H 7450 3250 50  0001 C CNN
F 3 "" H 7450 3250 50  0001 C CNN
	1    7300 3300
	1    0    0    -1  
$EndComp
$Comp
L arduino_nano U2
U 1 1 5A1B3AD5
P 3350 3500
F 0 "U2" H 3850 2550 70  0000 C CNN
F 1 "arduino_nano" H 4100 2450 70  0000 C CNN
F 2 "lib_fp:arduino_nano" H 3350 3450 60  0000 C CNN
F 3 "" H 3350 3500 60  0001 C CNN
	1    3350 3500
	1    0    0    -1  
$EndComp
NoConn ~ 2650 3300
NoConn ~ 2650 3100
NoConn ~ 2650 3400
NoConn ~ 2650 3500
NoConn ~ 2650 3600
NoConn ~ 2650 3700
NoConn ~ 2650 3800
NoConn ~ 2650 3900
NoConn ~ 2650 4000
NoConn ~ 2650 4800
NoConn ~ 4050 4300
NoConn ~ 4050 4200
NoConn ~ 4050 4100
NoConn ~ 4050 4000
NoConn ~ 4050 3550
NoConn ~ 4050 3250
NoConn ~ 4050 3150
NoConn ~ 3350 2350
NoConn ~ 7600 3300
NoConn ~ 7600 3400
NoConn ~ 7600 3500
Text GLabel 9750 3100 2    60   Input ~ 0
5V
Text GLabel 7400 3850 3    60   Input ~ 0
GND
$Comp
L PWR_FLAG #FLG01
U 1 1 5A1B46DB
P 7800 2950
F 0 "#FLG01" H 7800 3025 50  0001 C CNN
F 1 "PWR_FLAG" H 7800 3100 50  0000 C CNN
F 2 "" H 7800 2950 50  0001 C CNN
F 3 "" H 7800 2950 50  0001 C CNN
	1    7800 2950
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR02
U 1 1 5A1B47B2
P 7050 3850
F 0 "#PWR02" H 7050 3600 50  0001 C CNN
F 1 "GND" H 7050 3700 50  0000 C CNN
F 2 "" H 7050 3850 50  0001 C CNN
F 3 "" H 7050 3850 50  0001 C CNN
	1    7050 3850
	1    0    0    -1  
$EndComp
$Comp
L +5V #PWR03
U 1 1 5A1B47CF
P 8100 2950
F 0 "#PWR03" H 8100 2800 50  0001 C CNN
F 1 "+5V" H 8100 3090 50  0000 C CNN
F 2 "" H 8100 2950 50  0001 C CNN
F 3 "" H 8100 2950 50  0001 C CNN
	1    8100 2950
	1    0    0    -1  
$EndComp
Text GLabel 3350 5200 3    60   Input ~ 0
GND
Text GLabel 3200 2150 1    60   Input ~ 0
5V
Text GLabel 3500 2150 1    60   Input ~ 0
3V3
$Comp
L +3V3 #PWR04
U 1 1 5A1B4BF0
P 3650 2250
F 0 "#PWR04" H 3650 2100 50  0001 C CNN
F 1 "+3V3" H 3650 2390 50  0000 C CNN
F 2 "" H 3650 2250 50  0001 C CNN
F 3 "" H 3650 2250 50  0001 C CNN
	1    3650 2250
	1    0    0    -1  
$EndComp
Text GLabel 4200 3450 2    60   Input ~ 0
CE
Text GLabel 4200 3350 2    60   Input ~ 0
CSN
Text GLabel 4200 3050 2    60   Input ~ 0
MISO
Text GLabel 4200 2950 2    60   Input ~ 0
MOSI
Text GLabel 4200 2850 2    60   Input ~ 0
SCK
$Comp
L NRF24L01 U1
U 1 1 5A1B507E
P 5750 2750
F 0 "U1" H 5850 3000 60  0000 C CNN
F 1 "NRF24L01" H 6000 2500 60  0000 C CNN
F 2 "lib_fp:NRF24L01" H 5750 2600 60  0001 C CNN
F 3 "" H 5750 2600 60  0000 C CNN
	1    5750 2750
	1    0    0    -1  
$EndComp
Text GLabel 5750 3250 3    60   Input ~ 0
GND
Text GLabel 5750 2250 1    60   Input ~ 0
3V3
Text GLabel 6300 2900 2    60   Input ~ 0
CE
Text GLabel 6300 2600 2    60   Input ~ 0
CSN
Text GLabel 5250 2900 0    60   Input ~ 0
SCK
Text GLabel 5250 2750 0    60   Input ~ 0
MOSI
Text GLabel 5250 2600 0    60   Input ~ 0
MISO
NoConn ~ 2650 4700
$Comp
L Conn_01x06 J2
U 1 1 5A1DE956
P 6750 4850
F 0 "J2" H 6750 5150 50  0000 C CNN
F 1 "Conn_01x06" H 6750 4450 50  0000 C CNN
F 2 "Socket_Strips:Socket_Strip_Angled_1x06_Pitch2.54mm" H 6750 4850 50  0001 C CNN
F 3 "" H 6750 4850 50  0001 C CNN
	1    6750 4850
	1    0    0    -1  
$EndComp
Text GLabel 6200 5150 0    60   Input ~ 0
BL_RXD
Text GLabel 6200 5000 0    60   Input ~ 0
BL_TXD
Text GLabel 6200 4700 0    60   Input ~ 0
3V3
Text GLabel 6200 4850 0    60   Input ~ 0
GND
Text GLabel 4250 3900 2    60   Input ~ 0
BL_TXD
Text GLabel 4250 3800 2    60   Input ~ 0
BL_RXD
NoConn ~ 6550 4650
NoConn ~ 6550 5150
NoConn ~ 6150 2750
Wire Wire Line
	7050 3850 7400 3850
Wire Wire Line
	7200 3700 7200 4100
Wire Wire Line
	7300 3850 7300 3700
Wire Wire Line
	7600 3100 8400 3100
Wire Wire Line
	7800 2950 7800 3100
Connection ~ 7800 3100
Wire Wire Line
	8100 2950 8100 3100
Connection ~ 8100 3100
Connection ~ 7200 3850
Connection ~ 7300 3850
Wire Wire Line
	3200 2150 3200 2350
Wire Wire Line
	3500 2150 3500 2350
Wire Wire Line
	3650 2250 3500 2250
Connection ~ 3500 2250
Wire Wire Line
	4050 2950 4200 2950
Wire Wire Line
	4200 3050 4050 3050
Wire Wire Line
	4200 3350 4050 3350
Wire Wire Line
	4200 3450 4050 3450
Wire Wire Line
	5250 2600 5350 2600
Wire Wire Line
	5350 2600 5350 2650
Wire Wire Line
	5250 2900 5350 2900
Wire Wire Line
	5350 2900 5350 2850
Wire Wire Line
	5250 2750 5350 2750
Wire Wire Line
	6300 2600 6150 2600
Wire Wire Line
	6150 2600 6150 2650
Wire Wire Line
	6300 2900 6150 2900
Wire Wire Line
	6150 2900 6150 2850
Wire Wire Line
	5750 2250 5750 2400
Wire Wire Line
	5750 3250 5750 3100
Connection ~ 7050 3850
Connection ~ 3650 2250
Wire Wire Line
	6550 4850 6200 4850
Wire Wire Line
	6550 4750 6350 4750
Wire Wire Line
	6350 4750 6350 4700
Wire Wire Line
	6350 4700 6200 4700
Wire Wire Line
	6550 4950 6350 4950
Wire Wire Line
	6350 4950 6350 5000
Wire Wire Line
	6350 5000 6200 5000
Wire Wire Line
	6550 5050 6400 5050
Wire Wire Line
	6400 5050 6400 5150
Wire Wire Line
	6400 5150 6200 5150
Wire Wire Line
	4250 3800 4050 3800
Wire Wire Line
	4250 3900 4050 3900
Wire Wire Line
	4050 2850 4200 2850
Wire Wire Line
	3350 5200 3350 5050
$Comp
L PWR_FLAG #FLG05
U 1 1 5A1DFFDB
P 7200 4100
F 0 "#FLG05" H 7200 4175 50  0001 C CNN
F 1 "PWR_FLAG" H 7200 4250 50  0000 C CNN
F 2 "" H 7200 4100 50  0001 C CNN
F 3 "" H 7200 4100 50  0001 C CNN
	1    7200 4100
	-1   0    0    1   
$EndComp
$Comp
L SW_SPST SW1
U 1 1 5A22D5DE
P 8850 2650
F 0 "SW1" H 8850 2775 50  0000 C CNN
F 1 "SW_SPST" H 8850 2550 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x02_Pitch2.54mm" H 8850 2650 50  0001 C CNN
F 3 "" H 8850 2650 50  0001 C CNN
	1    8850 2650
	1    0    0    -1  
$EndComp
$Comp
L Conn_01x01 J3
U 1 1 5A22E23B
P 8600 3100
F 0 "J3" H 8600 3200 50  0000 C CNN
F 1 "Conn_01x01" H 8600 3000 50  0000 C CNN
F 2 "Connectors:Banana_Jack_1Pin" H 8600 3100 50  0001 C CNN
F 3 "" H 8600 3100 50  0001 C CNN
	1    8600 3100
	1    0    0    -1  
$EndComp
$Comp
L Conn_01x01 J4
U 1 1 5A22E27D
P 9000 3100
F 0 "J4" H 9000 3200 50  0000 C CNN
F 1 "Conn_01x01" H 9000 3000 50  0000 C CNN
F 2 "Connectors:Banana_Jack_1Pin" H 9000 3100 50  0001 C CNN
F 3 "" H 9000 3100 50  0001 C CNN
	1    9000 3100
	-1   0    0    1   
$EndComp
Wire Wire Line
	9200 3100 9750 3100
Wire Wire Line
	8400 3100 8400 2650
Wire Wire Line
	8400 2650 8650 2650
Wire Wire Line
	9200 3100 9200 2650
Wire Wire Line
	9200 2650 9050 2650
$Comp
L PWR_FLAG #FLG06
U 1 1 5A22E915
P 2950 2250
F 0 "#FLG06" H 2950 2325 50  0001 C CNN
F 1 "PWR_FLAG" H 2950 2400 50  0000 C CNN
F 2 "" H 2950 2250 50  0001 C CNN
F 3 "" H 2950 2250 50  0001 C CNN
	1    2950 2250
	1    0    0    -1  
$EndComp
Wire Wire Line
	3200 2350 2950 2350
Wire Wire Line
	2950 2350 2950 2250
$EndSCHEMATC
