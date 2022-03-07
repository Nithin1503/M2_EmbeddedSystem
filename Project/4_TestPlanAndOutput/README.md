## High Level Testing

| Test ID | Description of Test case |  Expected Output | Actual Output | Status | Type of test |
|:-----:|:--------------------------:|:-----------------:|:---------------:|:---------:|:-------:|
| H1  | When the push button is Released the motor should turn OFF | Motor OFF| Motor OFF |SUCCESS ✅| Manual Test|
| H2  | When the push button is Pressed the motor should turn ON | Motor ON | Motor ON | SUCCESS ✅ | Manual Test|


## Low Level Testing

| Test ID | Description of Test case | Input values | Expected Output | Actual Output | Status | Type of test |
|:-----:|:--------------------------:|:--------------:|:-----------------:|:---------------:|:---------:|:-------:|
| L1  | When the push button is OFF  |  Arduino should detects logic 0 | Motor OFF | Motor OFF |SUCCESS ✅ | Manual Test|
| L2  | When the push button is ON  |  Arduino should detects logic 1 | Motor ON | Motor ON |SUCCESS ✅ | Manual Test|
| L3  | When the arduino detects logic 0|  Transistor will be OFF| Motor OFF | Motor OFF | SUCCESS ✅ | Manual Test|
| L4  | When the arduino detects logic 1|  Transistor will be ON| Motor ON | Motor ON | SUCCESS ✅ | Manual Test|

