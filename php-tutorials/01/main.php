<?php
$salary = 50000;

switch ($salary) {
    case $salary > 0 && $salary <= 10000:
        printf("low income");
        break;

    case $salary > 10000 && $salary <= 20000:
        printf("Still low income\n");
        break;

    case $salary > 20000 && $salary <= 30000:
        printf("middle income\n");
        break;

    case $salary > 30000:
        printf("High income\n");
        break;
        
    default:
        printf("I dont know\n");

}
