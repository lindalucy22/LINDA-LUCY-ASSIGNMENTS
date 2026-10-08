# Credit Card Number Validator

A C++ console program that checks a credit card number using digit count, accepted prefixes, and a Luhn checksum calculation.

## Source File

- `creditcard.cpp` — contains the complete program.

## Validation Rules

The program prints `is valid.` only when the number meets all three conditions:

1. It contains **13 to 16 digits**.
2. It starts with **4, 5, 37, or 6**.
3. Its calculated checksum is divisible by **10**.

These are the rules implemented in this code; they are not a complete set of card issuer rules.

## How the Checksum Works

Starting from the rightmost digit:

1. Double every second digit (positions 2, 4, 6, and so on).
2. If a doubled value has two digits, add those digits together. For example, `8 × 2 = 16`, which contributes `1 + 6 = 7`.
3. Add the remaining digits without doubling them.
4. Add both sums. The checksum passes if the total is divisible by 10.

## Requirements

- A C++ compiler, such as `g++`.
- A terminal or an IDE that can compile and run C++ programs.

The program uses the standard `<iostream>` header and requires no external libraries.

## Compile and Run

Open a terminal in the folder containing `creditcard.cpp`.

### Linux or macOS

Compile:

```bash
g++ -std=c++11 -Wall -Wextra -pedantic creditcard.cpp -o creditcard
```

Run:

```bash
./creditcard
```

### Windows (with g++ installed)

Compile:

```powershell
g++ -std=c++11 -Wall -Wextra -pedantic creditcard.cpp -o creditcard.exe
```

Run in PowerShell:

```powershell
.\creditcard.exe
```

## Input and Output

Enter one number using digits only, without spaces or hyphens, and press Enter. The program checks the number, prints the result, and exits.

Example that passes:

```text
Enter a credit card number as an integer: 4111111111111111
4111111111111111 is valid.
```

Example that fails:

```text
Enter a credit card number as an integer: 4111111111111112
4111111111111112 is invalid.
```

## Functions

- `isValid`: Checks digit count, prefix, and checksum.
- `sumOfDoubleEvenPlace`: Doubles and sums digits at even positions counted from the right.
- `getDigit`: Returns a one-digit value unchanged or adds the digits of a doubled two-digit value.
- `sumOfOddPlace`: Sums digits at odd positions counted from the right.
- `prefixMatched`: Checks whether the number begins with a specified prefix.
- `getSize`: Counts the digits of a positive integer.
- `getPrefix`: Extracts the first `k` digits.

## Limitations

- `is valid.` means the number passes this program's checks; the program does not contact a bank or confirm that an account exists or can make payments.
- The number is stored as a `long long`, so leading zeros are not preserved.
- The code does not check whether `cin` successfully reads the input. Use a positive integer within the range of `long long`; nonnumeric or out-of-range input is not handled reliably.
- Zero, negative numbers, and numbers outside the 13–16 digit range fail the implemented checks when successfully read.

## Verification

The supplied source compiled successfully with the command shown above. These inputs were checked:

- `4111111111111111`: Valid
- `4111111111111112`: Invalid
- `1234567890123`: Invalid
