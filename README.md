# CASCRYPT - A Program to highly compress a casci file around 2.5 - 3x.
CASCRYPT is an OpenSource program to highly compress a [CASCI](https://github.com/darkyboys/casci) calendar of 128 digits to almost it's raw file, And the compression is as powerfull as it reduces the file size by almost 2.5x - 3x the orignal file.

## ✅To get started , Do the installation
Make sure that you have a following dependencise installed
 - magma , Visit https://github.com/darkyboys/magma for more into
 - gcc
 - git

## 🧩Installation
Just run the following commands
```bash
git clone https://github.com/darkyboys/cascrypt.git
cd cascrypt
magma
sudo magma install
```

And run
```bash
cascrypt
```
if it outputs: `Error -> Need [e/d] [one casci file] [one output file] at the least!` then everything is fine othervise you may have missed one step.

## 📀Using the Cascrypt CLI
Cascrypt provides a CLI to deal with files directly, just be sure to install it with Installation step.

- Use cascrypt e <casci file name> <output file name> to encode / compress a file.
- Use cascrypt d <casci file name> <output file name> to decode / decompress a file.

## ⌨️Using the Cascrypt C++ Library
Cascrypt provides a C++ library for you to use in your C++ programs, Just do what is run these commands in your project.

```bash
git clone https://github.com/darkyboys/cascrypt.git
mv cascrypt/cascrypt/* cascrypt
rm -rf cascrypt/cascrypt
```
And now you can use use `#include "cascrypt/cascrypt.hh"` in your source file directly.

 - Use `cascrypt::encode (std::string)` to encode a CASCI Calendar.
 - Use `cascrypt::decode (std::string)` to decode a CASCI Calendar.
 - You can see the actual encoding byte list directly from `encoding[129][2]`;
 - You can use the `replaceAll` function of `cascrypt.hh` in your own projects.

And with that's set you are good to go.

## 🪪License
Licensed under the MIT License

## 🤝🏻Contributions
Contributions are open just be sure to follow the [CONTRIBUTION GUIDELINES](CONTRIBUTING.md).

Thanks for reading!
Written by ghgltggamer.
