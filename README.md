About
-----
Memusg is a `time`-like utility for Unix that measures peak memory usage.  It works by repeatedly polling using `ps`.

Features
--------

 * Periodic memory checking
 * Output to file or inline (`stderr`)
 * Configurable interval
 * Works in both interactive and non-interactive environments
 * Passes signals through to the client application



Usage
-----

```bash
export PATH=$path_to_memusg
memusg [OPTS] my_command
```

Example:

```bash
memusg sleep 2
```
