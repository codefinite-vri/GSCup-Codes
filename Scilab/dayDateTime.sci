function dayDateTime()
   today = datenum();
   [dayNumber,dayString] = weekday(today,'long');
   mprintf("\nToday is %s, the %dth day of the week.\n", dayString, dayNumber);
   mprintf("The date is: %s\n", date());
   t = clock();
   mprintf("The time is: %d:%d:%d\n",t(4), t(5), t(6));
endfunction

dayDateTime()
