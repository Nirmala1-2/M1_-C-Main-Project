# Vaccine Registration
* Get vaccinated by pre registering online and verifying it in field offline. 
The program creates a local database for verifying pre registered users and also allows new limited registrations
## High Level Test Plan
| Test ID | Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Check patient registration status | 4 (choice )| {<3} |  (not found) |
| 02 | Check patient registration status | 5 (choice) | {1} |  (not found) |
| 03 | Check patient vaccination status | 3 (choice) | {1,2} | (found) |
## Low Level Test Plan
| Test ID | Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Check patient registration status | 1 (choice) | 1 | 1 (identity verification) |
| 02 | Check patient registration status | 2(choice) | 1 | 1 (identity verification) |
| 03 | Check patient vaccination status | 3 (choice) | 1 | 1 (identity verification) |
| 04 | Check patient vaccination status | 3 (choice) | 2 | 2 (search profile) |
| 05 | Check patient vaccination status | 3 (choice) | 3 | 3 (others) |

# TESTING AND OUTPUT IMPLEMENTED IN C PROGRAMMING
