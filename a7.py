
def get_initial_input():
	num_tests = int(input("enter number of tests:"));
	num_assignments = int(input("enter number of assignments:"));
	num_quizzes = int(input("enter number of quizzes:"));
	num_labs = int(input("enter number of labs:"));
	if(num_tests > 0 and num_assignments > 0 and num_quizzes > 0 and num_labs > 0):
		test_weight = float(input("enter the test weight here:"));
		assignment_weight = float(input("enter assignment weight here:"));
		quiz_weight = float(input("enter quiz weight here:"));
		lab_weight = float(input("enter lab weight here:"));

	
	final_weight = float(input("enter the final weight here(enter 0 if no final):"));

	if((test_weight + assignment_weight + quiz_weight + lab_weight + final_weight) != 1):
		print("your weight input is invalid");
				
get_initial_input(); 
