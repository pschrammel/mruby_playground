
# Generating bytecompiled files

mrbc test0.rb

mruby -b test0.mrb

# Embeding the interpreter

gcc -Iinclude/  -I /usr/include/ test1.c build/host/lib/libmruby.a -lm -otest1

# More info

 * http://www.mruby.org/
 * http://geekmonkey.org/2012/10/an-introduction-to-mini-ruby/
 * https://h2o.examp1e.net/install.html
 * https://github.com/h2o/h2o
 * http://lucaguidi.com/2014/02/26/redis-scripting-with-mruby-pt1.html
 * http://www.mavengineering.com/blog/2015/09/10/how-to-make-mruby/