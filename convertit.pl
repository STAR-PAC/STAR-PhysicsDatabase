#!/usr/bin/perl -w

opendir DIR,"." or die;
@files = grep {/.eps(.gz)?/} readdir DIR;
closedir DIR;

for my $file (@files) {
  my $newfile=$file;
  $newfile =~ s/\.eps(.gz)?/\.png/;
  $sysstr = "convert -antialias -crop 0x0 -density 300x300 -geometry 600x600 ${file} ${newfile}";
  $\ = "\n";
  print $sysstr;
  system $sysstr;
}
