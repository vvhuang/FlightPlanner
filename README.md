# FlightPlanner
ECS 40, Spring 2015 

Instructor: Sean Davis 

Assignment: An integrated flight planner using C++ 

Concepts used: object-oriented programming, stream manipulation, overloaded operators, file input/output, comma separated value files, binary files, vector, linked lists, maintaining a sorted list, static consts, static functions, friend


## Note:
* The program is to be compiled on a 64-bit Linux-like machine with the Makefile provided.
* __citypopulations.csv__ contains [city, state, population]
* __airlines-1.txt__ contains airline information and the airports they fly
* __airportLL.txt__ contains [airport code, latitude, longitude, location] information
* __planes.dat__ is a binary file containing information about different aircraft

## Sample input/output:


[*******@pc15 ~/p6]$ __head -11 airlines-1.txt__

```
United COS SCK
Delta SEA FUL
Alaska DET TPA
Southwest SCK LFT
JetBlue SBN GSO
SkyWest BIL SGF
Virgin JAN NEW
United NEW ICT
Delta DSM ANC
Alaska NGU COS
GRB 11 United OJC United PUB Delta BOS Southwest PVU Southwest WJF SkyWest FAT SkyWest IND SkyWest CRP Virgin FWA Virgin ELP Virgin RAL 
```

[*******@pc15 ~/p6]$ __simulator.out airlines-1.txt__
```
Flight Simulator Menu
0. Done.
1. Determine distance and passengers between two airports.
2. Determine all traffic from one airport.
3. Display planes information.
4. Add plane information.
5. Determine best plane between two airports.
6. Show airline flights.
7. Determine route between two airports.
```

Your choice (0 - 7): __3__

```
Plane Information
Name        Pass. Range Speed Fuel   MPG   $/mi  Price * 10^6
737-800     189   1,530 524    3,437 0.445  7.62 $ 67.8
747-600     524   3,630 567   28,642 0.127 26.75 $216.0
767-300ER   350   2,987 530   11,990 0.249 13.61 $134.0
777-300     550   3,007 560   22,610 0.133 25.49 $212.0
787-3       330   1,525 587    5,543 0.275 12.32 $130.0


Flight Simulator Menu
0. Done.
1. Determine distance and passengers between two airports.
2. Determine all traffic from one airport.
3. Display planes information.
4. Add plane information.
5. Determine best plane between two airports.
6. Show airline flights.
7. Determine route between two airports.

```
Your choice (0 - 7): __7__

Please enter origin destination and an airline: __SCK LFT Southwest__

```
So-SCK So-W39 So-ROC So-CCR So-DET So-LFT 

Flight Simulator Menu
0. Done.
1. Determine distance and passengers between two airports.
2. Determine all traffic from one airport.
3. Display planes information.
4. Add plane information.
5. Determine best plane between two airports.
6. Show airline flights.
7. Determine route between two airports.
```
Your choice (0 - 7): __7__

Please enter origin destination and an airline: __DSM ANC Delta__

```
De-DSM De-ORL De-CLT De-LNK De-AUS De-ANC 

Flight Simulator Menu
0. Done.
1. Determine distance and passengers between two airports.
2. Determine all traffic from one airport.
3. Display planes information.
4. Add plane information.
5. Determine best plane between two airports.
6. Show airline flights.
7. Determine route between two airports.
```
Your choice (0 - 7): __7__

Please enter origin destination and an airline: __SFO LAX Southwest__

```
No route found.

Flight Simulator Menu
0. Done.
1. Determine distance and passengers between two airports.
2. Determine all traffic from one airport.
3. Display planes information.
4. Add plane information.
5. Determine best plane between two airports.
6. Show airline flights.
7. Determine route between two airports.
```

Your choice (0 - 7): __1__

Please enter two airport abbreviations (XXX XXX): __SFO NYC__

```
2531 passengers fly the 2570 miles from
San Francisco, California to New York City, New York.

Flight Simulator Menu
0. Done.
1. Determine distance and passengers between two airports.
2. Determine all traffic from one airport.
3. Display planes information.
4. Add plane information.
5. Determine best plane between two airports.
6. Show airline flights.
7. Determine route between two airports.
```
Your choice (0 - 7): __1__

Please enter two airport abbreviations (XXX XXX): __SFO XYZ__
```
XYZ is not a valid airport.

Flight Simulator Menu
0. Done.
1. Determine distance and passengers between two airports.
2. Determine all traffic from one airport.
3. Display planes information.
4. Add plane information.
5. Determine best plane between two airports.
6. Show airline flights.
7. Determine route between two airports.
```
Your choice (0 - 7): __3__
```
Plane Information
Name        Pass. Range Speed Fuel   MPG   $/mi  Price * 10^6
737-800     189   1,530 524    3,437 0.445  7.62 $ 67.8
747-600     524   3,630 567   28,642 0.127 26.75 $216.0
767-300ER   350   2,987 530   11,990 0.249 13.61 $134.0
777-300     550   3,007 560   22,610 0.133 25.49 $212.0

Flight Simulator Menu
0. Done.
1. Determine distance and passengers between two airports.
2. Determine all traffic from one airport.
3. Display planes information.
4. Add plane information.
5. Determine best plane between two airports.
6. Show airline flights.
7. Determine route between two airports.
```
Your choice (0 - 7): __4__

Name: __787-3__
Passengers: __330__
Fuel capacity (in U.S. gallons): __5543__
Range (in miles): __1525__
Speed (in mph): __587__
Price: __130000000__
```

Flight Simulator Menu
0. Done.
1. Determine distance and passengers between two airports.
2. Determine all traffic from one airport.
3. Display planes information.
4. Add plane information.
5. Determine best plane between two airports.
6. Show airline flights.
7. Determine route between two airports.
```
Your choice (0 - 7): __3__
```
Plane Information
Name        Pass. Range Speed Fuel   MPG   $/mi  Price * 10^6
737-800     189   1,530 524    3,437 0.445  7.62 $ 67.8
747-600     524   3,630 567   28,642 0.127 26.75 $216.0
767-300ER   350   2,987 530   11,990 0.249 13.61 $134.0
777-300     550   3,007 560   22,610 0.133 25.49 $212.0
787-3       330   1,525 587    5,543 0.275 12.32 $130.0

Flight Simulator Menu
0. Done.
1. Determine distance and passengers between two airports.
2. Determine all traffic from one airport.
3. Display planes information.
4. Add plane information.
5. Determine best plane between two airports.
6. Show airline flights.
7. Determine route between two airports.
```
Your choice (0 - 7): __5__

Please enter two airport abbreviations (XXX XXX): __MIA LAX__
```
Passengers Miles  Trips Name      Cost
628        2339   2     767-300ER $97706

Flight Simulator Menu
0. Done.
1. Determine distance and passengers between two airports.
2. Determine all traffic from one airport.
3. Display planes information.
4. Add plane information.
5. Determine best plane between two airports.
6. Show airline flights.
7. Determine route between two airports.
```
Your choice (0 - 7): __7__

Please enter origin destination and an airline: __LAX SFO United__
```
No route found.

Flight Simulator Menu
0. Done.
1. Determine distance and passengers between two airports.
2. Determine all traffic from one airport.
3. Display planes information.
4. Add plane information.
5. Determine best plane between two airports.
6. Show airline flights.
7. Determine route between two airports.
```
Your choice (0 - 7): __5__

Please enter two airport abbreviations (XXX XXX): __LAX SFO__
```
Passengers Miles  Trips Name      Cost
1173       339    4     787-3     $28057

Flight Simulator Menu
0. Done.
1. Determine distance and passengers between two airports.
2. Determine all traffic from one airport.
3. Display planes information.
4. Add plane information.
5. Determine best plane between two airports.
6. Show airline flights.
7. Determine route between two airports.
```
Your choice (0 - 7): __2__

Please enter an airport abbreviation (XXX): __SFO__
```
Green Bay, Wisconsin: 30
Billings, Montana: 31
Burbank, California: 31
Erie, Pennsylvania: 31
Pueblo, Colorado: 31
Midland, Texas: 31
South Bend, Indiana: 31
Norman, Oklahoma: 32
Allentown, Pennsylvania: 32
Manchester, New Hampshire: 33
Charleston, South Carolina: 33
Killeen, Texas: 34
Athens, Georgia: 34
Lafayette, Louisiana: 34
Peoria, Illinois: 34
Gainesville, Florida: 34
Flint, Michigan: 35
Lansing, Michigan: 35
Ann Arbor, Michigan: 35
Abilene, Texas: 35
Evansville, Indiana: 35
Springfield, Illinois: 35
Provo, Utah: 35
Olathe, Kansas: 36
Visalia, California: 36
Clarksville, Tennessee: 36
Concord, California: 0
El Monte, California: 37
Topeka, Kansas: 37
New Haven, Connecticut: 37
Hartford, Connecticut: 38
Columbia, South Carolina: 38
Cedar Rapids, Iowa: 38
Fullerton, California: 40
Bridgeport, Connecticut: 41
Syracuse, New York: 42
Palmdale, California: 43
Hayward, California: 0
Torrance, California: 43
Salinas, California: 0
Lancaster, California: 43
Eugene, Oregon: 45
Sioux Falls, South Dakota: 46
Salem, Oregon: 46
Santa Rosa, California: 0
Springfield, Missouri: 47
Dayton, Ohio: 47
Rockford, Illinois: 47
Tallahassee, Florida: 51
Chattanooga, Tennessee: 51
Aurora, Illinois: 52
Ontario, California: 52
Huntsville, Alabama: 52
Fayetteville, North Carolina: 52
Providence, Rhode Island: 52
Brownsville, Texas: 52
Worcester, Massachusetts: 53
Jackson, Mississippi: 53
Newport News, Virginia: 54
Salt Lake City, Utah: 55
Knoxville, Tennessee: 56
Fort Lauderdale, Florida: 56
Oxnard, California: 56
Amarillo, Texas: 56
Columbus, Georgia: 57
Little Rock, Arkansas: 57
Mobile, Alabama: 58
Augusta, Georgia: 58
Grand Rapids, Michigan: 59
Tacoma, Washington: 60
Des Moines, Iowa: 60
Shreveport, Louisiana: 61
Richmond, Virginia: 61
Spokane, Washington: 61
Boise, Idaho: 62
Modesto, California: 0
Montgomery, Alabama: 62
Rochester, New York: 63
Reno, Nevada: 65
Winston-Salem, North Carolina: 65
Lubbock, Texas: 66
Laredo, Texas: 66
Chesapeake, Virginia: 67
Baton Rouge, Louisiana: 69
Orlando, Florida: 69
Madison, Wisconsin: 70
Birmingham, Alabama: 70
Scottsdale, Arizona: 72
Norfolk, Virginia: 72
New Orleans, Louisiana: 73
St. Petersburg, Florida: 75
Greensboro, North Carolina: 75
Lincoln, Nebraska: 76
Fort Wayne, Indiana: 76
Buffalo, New York: 83
Lexington, Kentucky: 85
Anchorage, Alaska: 85
Newark, New Jersey: 85
Corpus Christi, Texas: 87
Stockton, California: 0
Riverside, California: 90
Toledo, Ohio: 90
Pittsburgh, Pennsylvania: 95
Bakersfield, California: 96
Cincinnati, Ohio: 101
Tampa, Florida: 103
Santa Ana, California: 103
St. Louis, Missouri: 107
Wichita, Kansas: 110
Honolulu, Hawaii: 114
Raleigh, North Carolina: 114
Colorado Springs, Colorado: 115
Minneapolis, Minnesota: 115
Tulsa, Oklahoma: 117
Oakland, California: 0
Miami, Florida: 125
Omaha, Nebraska: 129
Cleveland, Ohio: 134
Kansas City, Missouri: 137
Sacramento, California: 0
Long Beach, California: 142
Fresno, California: 143
Albuquerque, New Mexico: 158
Atlanta, Georgia: 158
Tucson, Arizona: 160
Oklahoma City, Oklahoma: 167
Portland, Oregon: 168
Louisville, Kentucky: 170
Las Vegas, Nevada: 171
Washington, District of Columbia: 180
Denver, Colorado: 180
Nashville, Tennessee: 180
Seattle, Washington: 181
Boston, Massachusetts: 183
Milwaukee, Wisconsin: 184
El Paso, Texas: 185
Baltimore, Maryland: 195
Charlotte, North Carolina: 205
Memphis, Tennessee: 206
Fort Worth, Texas: 208
Austin, Texas: 227
Columbus, Ohio: 228
Indianapolis, Indiana: 243
Jacksonville, Florida: 246
Detroit, Michigan: 280
San Jose, California: 0
Dallas, Texas: 379
San Diego, California: 387
San Antonio, Texas: 406
Philadelphia, Pennsylvania: 443
Phoenix, Arizona: 474
Houston, Texas: 675
Chicago, Illinois: 867
Los Angeles, California: 1173
New York City, New York: 2531
Total passengers: 18885

Flight Simulator Menu
0. Done.
1. Determine distance and passengers between two airports.
2. Determine all traffic from one airport.
3. Display planes information.
4. Add plane information.
5. Determine best plane between two airports.
6. Show airline flights.
7. Determine route between two airports.
```
Your choice (0 - 7): __6__
```
GRB: Vi-RAL Vi-ELP Vi-FWA Sk-CRP Sk-IND Sk-FAT So-WJF So-PVU De-BOS Un-PUB Un-OJC 
BIL: Sk-NEW Sk-LRD Sk-PDX Je-AUS De-NGU De-OKC De-STL Un-BOS 
BUR: So-MGM Al-HNL Al-MOD Al-NEW 
ERI: Je-FNT De-PHX De-PIT 
PUB: Je-GRB Je-JAX Je-ICT De-LAN Un-FAT Un-AHN Un-TOA 
MAF: Je-FAY Je-MKE Al-PIT De-MEM De-PIE 
SBN: Je-BRO So-SFO 
OUN: Vi-CAE So-LAX Al-HSV Al-BOS Al-PVU De-CKV De-MKE De-EMT 
ABE: Sk-RFD Sk-LFT Sk-MSN Al-SLC Al-RIC De-BAL 
MHT: Vi-CLE Sk-RIC So-MSN So-LNK 
CHS: Vi-MSN Je-HWD Un-SCK 
ILE: Vi-SCK Sk-SPI Sk-CKV De-TPA De-DSM De-BOI Un-BOI Un-ORL 
AHN: Sk-MKE Sk-VIS Je-ERI So-NEW So-TUL Al-EUG 
LFT: Vi-LAX Vi-PMD Vi-PHL Sk-ANC Sk-CHA Je-MIA Je-LAX So-DAL So-MKE So-CMH Al-LRD Un-DCA Un-FTW Un-TLH 
PIA: Vi-PHF Vi-CMH So-BAL Al-LBB Al-TLH Al-ARR 
GNV: Vi-INT Vi-NYC Sk-EUG Al-VIS De-PIA De-SDM De-TOP 
FNT: Al-LNK Al-LOU De-CVG De-ONT 
LAN: Sk-RAL Sk-HSV So-PUB So-LRD Al-AHN De-IND Un-OKC Un-AGS 
ARB: Sk-ABE Sk-PHX So-TPA So-SGF So-IAH Un-SPI Un-NYC 
ABI: De-CHI De-FNT De-GRB 
EVV: Vi-ONT Vi-MIA Sk-STS Sk-CHS Sk-EWR Je-SAT 
SPI: Vi-DEN Vi-WJF Vi-ERI Sk-SBN Je-AGS Je-ILE 
PVU: Vi-SLE Vi-ATL Sk-JAX Sk-TYS Je-PHX Je-HFD Je-OKC So-DEN So-LAS So-PIA Al-GSO Al-GRR De-FAT De-BHM Un-CCR 
OJC: Vi-GRR Je-IND Al-FSD Al-RNO Al-STS Un-CHS 
VIS: Vi-SFO Vi-SEA Sk-FLL Sk-BOS Je-CRP Je-PMD De-GSO 
CKV: Vi-SDL Sk-BUF Un-W39 Un-MKE 
CCR: Vi-FLL Vi-LGB Vi-BUF Je-ARR Je-FUL So-DET Al-BAL Al-PHX De-OUN De-ERI De-BDR Un-ICT 
EMT: Vi-PIA Vi-OUN Vi-OKC Sk-GNV Sk-TIW Sk-SDM So-CID Al-CKV Al-CVG 
TOP: Vi-PUB Vi-GSO Vi-RFD So-BUF Un-GNV Un-OUN Un-AUS 
HVN: Sk-PUB Sk-CCR Je-OMA Al-IND Un-GSO 
HFD: Je-ORL Je-LGB De-LZK Un-MHT Un-SGF 
CAE: Vi-BUR Vi-HFD Sk-ROC So-MHT So-SFF So-FLL Al-HWD Al-BTR Al-RFD De-INT De-BRO 
CID: Vi-OXR Vi-SYR So-PDX So-TLH De-BNA 
FUL: Sk-TLH So-DAY So-SEA Al-SDL De-CAE De-BTR De-STS Un-HFD Un-FLL Un-STL 
BDR: Je-CHS Je-MOB So-SLE So-PIE So-GSO Al-SBN De-MOB Un-STS 
SYR: So-CLE So-MSP Al-SJC Al-LAN De-SPI De-IAH Un-TPA Un-DAL Un-IAH 
PMD: Sk-PIE Je-LOU So-NYC So-ELP Al-INT De-ATL 
HWD: Sk-DSM Je-ABI Al-FUL Un-LGB Un-GRB 
TOA: Je-HVN So-CLT De-MOD De-CHA 
SNS: Sk-DCA So-BTR So-ABQ So-OJC De-WJF De-SYR 
WJF: So-SBN Al-LFT Al-LZK Al-GNV De-TOL De-ABQ De-W39 
EUG: Vi-RNO Je-MGM Je-VIS Je-GSO Al-COS De-SJC De-SLC 
FSD: Je-CKV Je-PHF Je-SYR So-ANC So-ATL So-SLC Al-STL Al-ABE Un-BFL Un-BDR Un-ANC 
SLE: Vi-DAL Al-SFO Al-ROC De-NEW 
STS: So-MIA So-CVG Al-DCA Al-WJF Al-MEM De-MSN Un-PDX 
SGF: Je-BIL Je-PDX So-FNT So-AUS So-RFD 
DAY: Sk-GRR Je-SLC Je-OAK So-HNL De-LRD De-TIW De-EWR Un-TOP Un-SJC Un-CSG 
RFD: Sk-IAH Sk-MHT Je-LZK Al-SFF Al-CCR Un-MOD Un-BIL Un-DSM 
TLH: Je-CVG Je-MEM Je-SCK So-IND So-SDM So-CAE Al-LGB Al-SGF 
CHA: Sk-TPA So-MOD So-SDL De-PHL De-MGM Un-SLE 
ARR: Sk-MOD So-OKC So-GNV Al-TOP Al-TPA De-VIS De-BUF De-EUG 
ONT: Sk-OUN So-EWR So-SCK Un-PIA Un-SBN Un-PIT 
HSV: Vi-SGF Vi-BOI Vi-SBN Je-ORH Je-OUN Je-IAH Al-OAK Al-ICT Un-INT 
FAY: Vi-PHX Vi-ABI Sk-PVD Sk-RNO So-MKC So-AHN So-SYR 
PVD: Vi-FUL Vi-FSD Vi-ABE Je-RAL 
BRO: Je-SHV Je-INT 
ORH: Sk-FNT Sk-BNA Sk-SYR So-INT So-TYS Un-PMD 
JAN: Vi-MHT Vi-FTW Sk-FAY Sk-SJC Sk-GSO So-BIL De-AHN 
PHF: Vi-SHV Vi-ABQ Sk-INT So-PMD So-CHA So-FAY Al-ILE De-AGS De-LAX 
SLC: Un-MEM 
TYS: Je-TOA Je-CSG 
FLL: Vi-COS Vi-RIC Vi-CHS Sk-SMF Je-TOL So-BRO So-LOU Al-OKC Al-SEA Al-NYC De-PVD Un-LZK 
OXR: Je-FWA Je-MHT Je-RIC Un-BUF 
AMA: Vi-PIE Vi-TOP Vi-MSP Sk-DAL Sk-ATL Je-PIT Je-OXR Al-BUR Al-IAH Al-SLE Un-LEX 
CSG: Je-BAL Je-CLE De-FUL Un-VIS 
LZK: Vi-BRO Vi-EWR Vi-CSG Je-ABE Je-NEW Je-CLT Al-SNS Al-CRP De-FAY 
MOB: Je-EWR Je-SGF Al-DAL 
AGS: Vi-HVN Vi-SLC Vi-FAT So-OUN So-BFL 
GRR: Je-AMA Al-BNA Al-TOA De-BUR De-ROC De-LFT Un-LFT Un-CVG Un-HSV 
TIW: Sk-TUL Sk-ERI De-FSD 
DSM: So-OMA De-ORL Un-MKC 
SHV: Je-TYS Je-HNL Je-OJC De-JAX Un-CRP Un-SMF Un-CMH 
RIC: Vi-STL Sk-MEM Sk-MGM Sk-FUL Un-HVN 
SFF: So-RIC So-FWA So-VIS Al-FLL Un-CKV 
BOI: Sk-SFF De-CRP 
MOD: Vi-CHA Vi-MKC Je-AHN De-MIA Un-EVV Un-TOL Un-PVD 
MGM: Sk-MKC Je-RFD Je-MKC Je-PVU So-JAN Al-BFL De-PMD Un-TYS 
ROC: So-BUR So-CCR 
RNO: Al-BDR Al-MKE Al-MIA De-MKC De-LBB De-ABE 
INT: Sk-BOI Je-LBB Al-TIW Al-FAY 
LBB: Vi-HNL Sk-LNK Sk-HFD Je-BUF Je-BDR Je-EUG Al-BRO Al-SCK De-OJC De-FTW 
LRD: Sk-AHN Je-LFT Je-TUL De-SAT De-SBN 
W39: Je-WJF Je-BOS So-GRB So-ROC Al-OUN 
BTR: Sk-AUS Al-AMA Al-TOL De-RDU De-HNL Un-JAN 
ORL: Vi-SDM Vi-LAS Vi-BHM Sk-TOP Al-CMH Al-NGU Al-DET De-CLT 
MSN: Sk-STL Un-ABI Un-BHM 
BHM: Vi-RDU Vi-MOD Vi-NEW Je-GNV Je-BTR Je-SNS Al-ATL Al-TUL Al-GRB De-DAL De-PDX De-SGF 
SDL: Vi-TLH Vi-SMF Sk-HWD Al-PUB Al-MSP De-BIL Un-ILE 
NGU: Vi-TOL Vi-SFF Sk-BUR Sk-SNA Al-SYR De-CID Un-BNA 
NEW: Vi-TUL Sk-SEA Sk-GRB Sk-PHF Un-EWR 
PIE: Vi-PIT Je-FLL Je-PUB De-ORH De-TUS De-NYC Un-FAY 
GSO: Sk-ABI Je-DCA Je-ELP Al-AGS Al-BOI Un-FUL 
LNK: Al-SPI De-GNV De-JAN De-AUS Un-RDU Un-ONT 
FWA: Sk-MIA Al-ARB Al-OXR Un-HNL Un-ROC 
BUF: Vi-PVD Je-DEN Je-PVD Al-TUS De-TLH 
LEX: Vi-ILE Vi-ANC Sk-DEN Sk-EVV Je-LNK Je-DSM Je-TPA So-JAX So-EUG So-SHV Al-FWA Un-PHF Un-MOB Un-LBB 
ANC: Vi-MEM Vi-SNS Sk-LEX Sk-JAN Un-GRR 
EWR: Je-DAY Je-SJC So-TOA Al-DSM Al-SHV De-OXR De-DET De-RFD Un-RIC Un-SNA Un-TUS 
CRP: Sk-MOB Sk-OJC Je-W39 Je-SPI Je-SFO So-SJC De-CSG 
SCK: So-EMT So-FUL So-W39 De-SLE De-FLL 
RAL: Je-FTW Al-ANC Al-CHS 
TOL: Sk-ARR Al-MOB Al-CLT 
PIT: Je-TUS Je-SFF 
BFL: Vi-AUS Vi-BIL Vi-BTR Sk-OKC So-TOP Al-LAS De-FWA De-ARB De-AMA Un-OMA Un-LAX 
CVG: Vi-ROC Vi-DET Vi-TIW So-ABE So-MEM Un-SNS 
TPA: Sk-LAN So-ABI So-LGB So-GRR De-DEN Un-NGU Un-ORH 
SNA: Vi-IND Vi-VIS Vi-ORL So-BOI So-ICT So-LZK De-BFL De-RNO De-HFD Un-CLT 
STL: Sk-ELP Sk-ILE Sk-FWA Al-DAY Al-JAN De-ARR De-COS De-ABI Un-ERI 
ICT: Vi-DCA Vi-TOA Sk-LZK Sk-TOA Sk-SFO Al-TYS Al-MKC Al-SAT Un-LNK Un-SDL Un-AMA 
HNL: Je-MOD Je-GRR So-ARB 
RDU: Vi-BOS Vi-LRD Vi-MKE Sk-EMT Sk-TOL So-BOS So-SPI So-ILE Al-FAT Al-PMD Un-EUG 
COS: Vi-STS Sk-OXR Sk-SGF So-ORL So-FTW De-GRR Un-SYR Un-JAX Un-HWD 
MSP: Vi-TYS Sk-SDL Sk-CLT 
TUL: Je-SDL 
OAK: Vi-JAX Vi-LAN Vi-LNK Al-CLE Al-PDX Un-MAF Un-MSP Un-RAL 
MIA: Sk-LOU Sk-CVG So-TOL So-TUS So-AMA Al-CHI Al-EMT De-LGB 
OMA: Vi-DAY Vi-MOB Je-TOP Je-CHA Je-BUR Un-DET Un-PIE 
CLE: Vi-LEX Vi-CKV Vi-TUS Sk-NGU Sk-DAY Sk-HVN Je-HSV Un-ARR 
MKC: Je-DET Je-TLH Je-MAF 
SMF: So-PHL 
LGB: Vi-BNA Vi-SPI Vi-SAT Sk-LAS Sk-CLE Sk-FTW De-PHF De-LOU Un-MGM Un-IND 
FAT: Sk-WJF Sk-SAT Sk-BTR So-BHM So-STL So-MOB Al-BHM De-ELP De-HVN De-HSV 
ABQ: Sk-LAX Je-PHL Je-CCR Je-LEX 
ATL: Vi-ORH Je-EMT De-OMA De-TUL Un-EMT 
TUS: Vi-GRB Sk-BHM Sk-CID Al-PIA Un-FSD Un-COS Un-PVU 
OKC: Vi-ICT Vi-OAK Vi-AGS Je-ANC Je-SMF Je-NGU De-CCR De-DAY 
PDX: Vi-CLT Vi-CCR Sk-MSP Sk-RDU Sk-LGB Je-CHI So-STS Un-PHX Un-ELP Un-CID 
LOU: Je-RDU Je-TIW Je-MSN Al-BIL De-HWD De-SFO 
LAS: Vi-OJC Vi-OMA Vi-LFT Sk-CAE So-COS So-DSM So-SNA Al-ONT Al-SNA 
DCA: Je-BNA Je-DAL So-PIT So-CKV So-MAF Al-PHF 
DEN: Sk-SLE Je-ATL So-LEX So-ARR Al-ERI Al-PVD Al-CSG De-PUB De-MAF De-SNA Un-TIW Un-ABE 
BNA: Vi-BDR Vi-HWD Vi-MGM Je-SNA Je-MSP De-SMF De-LEX De-MSP 
SEA: Vi-LBB Vi-NGU Vi-FAY Sk-ICT Sk-BFL Sk-AMA Je-LAN Je-FAT Je-STS So-AGS De-TOA De-SDL De-ILE Un-BRO 
BOS: Sk-CSG Al-MAF Al-RAL Al-HVN 
MKE: Sk-ORH Sk-ONT Al-ORH Al-ABI Al-EWR 
ELP: Sk-TUS Je-SEA Je-FSD Je-BHM Al-MGM 
BAL: Vi-FNT Vi-SJC Vi-CRP Je-EVV So-TIW So-PVD Al-MHT Al-LAX Un-BTR Un-FWA Un-SEA 
CLT: Vi-HSV Vi-EUG Vi-PVU Sk-DET Sk-ORL Sk-LBB So-PHF So-SMF Al-SDM Al-CHA De-SCK De-SHV De-LNK Un-SFO 
MEM: Sk-NYC Sk-SHV Sk-PIT Al-DEN Al-AUS De-CMH 
FTW: Vi-EMT Vi-PDX Vi-SNA Sk-PVU Sk-SNS Sk-COS 
AUS: Al-CID De-LAS De-EVV De-ANC 
CMH: Vi-ARB Vi-CHI Al-RDU Al-OJC Al-W39 
SFO: Vi-LZK Vi-GNV Vi-BFL Je-BFL Je-COS So-CHI So-CSG Un-RFD Un-SDM Un-CHI 
IND: Vi-IAH Vi-AMA Sk-BDR Je-ABQ Je-LRD Je-PIE So-CRP So-FSD So-DCA Un-LRD Un-RNO 
JAX: De-TYS De-CHS Un-DAY Un-SFF Un-BAL 
DET: Sk-W39 Sk-SCK Sk-HNL Je-SDM Je-NYC So-SAT So-PHX So-LFT Al-ELP Al-CAE Al-BUF Un-MIA 
SJC: Sk-PIA Sk-PHL Je-STL Al-LEX Al-FNT Un-LOU 
DAL: Je-BOI Je-SLE Un-DEN Un-SAT Un-SLC 
SDM: Vi-BAL Vi-CID Vi-EVV Sk-AGS Sk-OMA Sk-OAK So-BDR So-SNS So-RDU Un-ATL Un-LAN Un-MSN 
SAT: Vi-TPA Vi-ARR So-LBB So-ERI So-HFD Un-WJF Un-PHL Un-CAE 
PHL: Je-ARB Je-LAS So-ORH So-FAT So-LAN De-PVU De-SNS 
PHX: Sk-BIL Je-ROC Je-ONT Je-RNO So-RNO So-HVN Al-FTW Al-HFD 
IAH: Vi-CVG Sk-ABQ Sk-CHI So-EVV Al-PIE Un-CHA 
CHI: Sk-PMD Al-SMF Al-JAX De-SFF De-MHT De-DCA Un-CLE Un-OXR Un-SHV 
LAX: Sk-CMH So-NGU So-HWD So-BNA Un-OAK Un-ARB 
NYC: 

Flight Simulator Menu
0. Done.
1. Determine distance and passengers between two airports.
2. Determine all traffic from one airport.
3. Display planes information.
4. Add plane information.
5. Determine best plane between two airports.
6. Show airline flights.
7. Determine route between two airports.
```
Your choice (0 - 7): __0__

