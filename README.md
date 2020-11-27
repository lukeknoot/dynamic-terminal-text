When I was looking at [ink](https://github.com/vadimdemedes/ink) I was curious
as to how terminal text can actually be made dynamic.

I found that this can be achieved (at least one way) with the `\r` special carriage return character,
allowing you to overwrite the existing line.

I just created this little example for my own reference. Might convert to a gist if I don't expand on it.

## Example

![Example](https://i.imgur.com/tV29qiv.gif)

Can use [ANSI escape sequences](https://stackoverflow.com/questions/4842424/list-of-ansi-color-escape-sequences) for text color.

## Run

```
gcc -o example example.c

./example
```
