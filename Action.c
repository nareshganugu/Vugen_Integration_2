Action()
{
	
	lr_start_transaction("S01_SCEE_TC03_Check_Eligibility");
	

	lr_output_message("Successfull Messages");
	
    
   	lr_end_transaction("S01_SCEE_TC03_Check_Eligibility", LR_FAIL);
   	
	
	return 0;
}
