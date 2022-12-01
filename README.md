<div align="center">
    <h1>Touch grass</h1>
    <b>Remember your basic needs. Useful for your .bashrc</b>
</div>

## Description
Simple C program for printing nice "touch grass" quotes.

## Installing
Compile the program running:
```bash
make

# Or if you want to add it to the path
sudo make install
```

## Usage
After compiling simply run:
```console
$ ./touch-grass -h
Usage:
    touch-grass       - Run the program with no color.
    touch-grass -c    - Run the program with color enabled.
    touch-grass -h    - Show this help.
```

## Contributing
Check [contributing.md](CONTRIBUTING.md) for more info.

Feel free to add more funny quotes and PR.

## Todo
- [X] Linux install target for moving to `/usr/local/bin/`
- [ ] The random seed for the string id is generated based on `time(0)` (seconds). Would be great have a number that changes more frequently.

## License
```
MIT License

Copyright (c) 2022 Null

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```
