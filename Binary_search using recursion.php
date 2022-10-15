<?php

function binarys(array $arr, int $val, int $l = 0,int $r){
$mid = floor(($l + ($r-$l)/2));
print("mid=".$mid."\n");

if($l>$r or $mid<0){
    return -1;
}
if($arr[$mid] == $val){
    return $mid;
}
elseif($arr[$mid] < $val){
    $nl = $mid + 1;
    return binarys($arr,$val,$nl,$r);
}elseif($arr[$mid] > $val){
    $nr = $mid - 1;
   return binarys($arr,$val,$l,$nr);
}
}



$array = array(1,22,45,3543,54,23,43,4534,452);

sort($array);
print_r($array);

$se = (int)readline("Enter search value");
$len = count($array);
print("len=".$len."\n");

$out = binarys($array,$se,$l=0,$r=($len-1));
echo($out);
/*print("out=".$out."\nValue =".$array[$out]."\n");
if ($out != -1){
    print("Item found at index:".$out."\n");
}else{
    print("Item not found");
}*/
?>
