#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <mruby.h>
#include <mruby/compile.h>

int main(void)  
{
  mrb_state *mrb = mrb_open();
  const char *env = "production";
  
  mrb_gv_set(mrb, mrb_intern_lit(mrb, "$RAILS_ENV"), mrb_str_new(mrb, env, strlen(env)));
  
  char code[] = "puts %{ You know that RAILS_ENV is '#{$RAILS_ENV}' }";
  mrb_load_string(mrb, code);
 return 0;
}

