<!------------ start include ------------>
<?php
  $pageSection = 'Publications';
  $pageSubSection = 'Journal';
  $pageAuthor = 'Dunlop';
  $pageOptions = 'wide,pubs';
  include "star.php";
?>

   <!------------ page material starts here ------------>
   <!----- no global tags (e.g. BODY, HTML) needed ----->

   <? makePubRefAndLinks(7,'title'); ?>


    <hr noshade>
    <h3><font color="#0000cd" face="Arial,Helvetica,Geneva,Swiss,SunSans-Regular">Invariant yields of antinuclei</font></h3>
    <font face="Arial,Helvetica,Geneva,Swiss,SunSans-Regular">Errors quoted are statistical only. Systematic errors are estimated to be 15%. For details see publication.</font>
    <p></p>
    <table cellpadding="5" cellspacing="2" border="1">
      <tr>
        <td></td>
        <td><font face="Arial,Helvetica,Geneva,Swiss,SunSans-Regular"><b>p<sub>T</sub> (GeV/c)</b></font></td>
        <td><font face="Arial,Helvetica,Geneva,Swiss,SunSans-Regular"><b>E d<sup>3</sup>N/d<sup>3</sup>p (GeV<sup>-2</sup> c<sup>3</sup>)</b></font></td>
        <td><font face="Arial,Helvetica,Geneva,Swiss,SunSans-Regular"><b>E d<sup>3</sup>N/d<sup>3</sup>p (GeV<sup>-2</sup> c<sup>3</sup>)</b></font></td>
        <td><font face="Arial,Helvetica,Geneva,Swiss,SunSans-Regular"><b>weak decay correction</b></font></td>
      </tr>
      <tr>
        <td rowspan="3"><font face="Arial,Helvetica,Geneva,Swiss,SunSans-Regular"><b>dbar</b></font></td>
        <td>0.55</td>
        <td>[2.47 +- 0.26] 10<sup>-3</sup></td>
        <td>4.20 +- 0.12</td>
        <td>0.56</td>
      </tr>
      <tr>
        <td>0.65</td>
        <td>[1.87 +- 0.19] 10<sup>-3</sup></td>
        <td>4.00 +- 0.10</td>
        <td>0.53</td>
      </tr>
      <tr>
        <td>0.75</td>
        <td>[1.93 +- 0.20] 10<sup>-3</sup></td>
        <td>3.82 +- 0.09</td>
        <td>0.52</td>
      </tr>
      <tr>
        <td><font face="Arial,Helvetica,Geneva,Swiss,SunSans-Regular"><b>AntiHe3</b></font></td>
        <td>2.4</td>
        <td>[8.4 +- 2.3] 10<sup>-7</sup></td>
        <td>2.63 +- 0.04</td>
        <td>0.61</td>
      </tr>
    </table>
    <p></p>
    <hr noshade>
    <h3></h3>
    <h3><font color="#0000cd" face="Arial,Helvetica,Geneva,Swiss,SunSans-Regular">Coalescence Parameters</font></h3>
    <table border="1" cellpadding="5" cellspacing="2">
      <tr>
        <td><font face="Arial,Helvetica,Geneva,Swiss,SunSans-Regular">&lt;B<sub>2</sub>&gt; = [4.5 +- 0.3 (stat) +- 1.0 (sys)] 10<sup>-4</sup>  GeV<sup>2</sup>/c<sup>3</sup></font></td>
        <td><font face="Arial,Helvetica,Geneva,Swiss,SunSans-Regular">18% most central in the dbar kinematic region 0.5 &lt;&nbsp;p<sub>T</sub> &lt;&nbsp;0.8 GeV/c and |y| &lt;&nbsp;0.3</font></td>
      </tr>
      <tr>
        <td><font face="Arial,Helvetica,Geneva,Swiss,SunSans-Regular">&lt;B<sub>3</sub>&gt; = [2.1 +- 0.6 (stat) +- 0.6 (sys)] 10<sup>-7  </sup>GeV<sup>4</sup>/c<sup>6</sup></font></td>
        <td><font face="Arial,Helvetica,Geneva,Swiss,SunSans-Regular">18% most central in the AntiHe3 kinematic region 1.0 &lt;&nbsp;p<sub>T</sub> &lt;&nbsp;5.0 GeV/c and |y| &lt;&nbsp;0.8 </font></td>
      </tr>
    </table>
    <p><font face="Arial,Helvetica,Geneva,Swiss,SunSans-Regular"></font></p>
    <p></p>
    <p><font face="Arial,Helvetica,Geneva,Swiss,SunSans-Regular"></font></p>
    <p></p>


   <!------------ exit include ------------>
   <?php include $footer; ?>

