# A CPU burning tool

Sometimes you need this tool to consume all your cpu cycles to observe something.

# Usage

```
make
make install
loop &  echo "$!" > your/cgroup/tasks
killall loop
```


