#include <stdio.h>

int main ()
{
	int enter, ass1, ass2, ass3, ass4, ass5, ass6, ass7, ass8, ass9, ass10, ass11;

	printf ("				HOW TANYA ARE YOU?\n  Type your favourite "); 
	printf ("number and press enter to find out your percent of Tanyaness!\n");
	printf ("					");
	scanf ("%d", &enter);

	printf ("\nBeginning of a long work day. Alarm wakes Tanya up at 9:45."); 
	printf ("What does she do?\n\n");
	printf (" 1)Gets up right as she woke up and goes to the bathroom.\n\n");
	printf (" 2)Feels upset about going to work and sleeps off.\n\n"); 
	printf (" 3)Sees Deepak's sleeping face amd hugs him forever, then rushes ");
	printf ("to get to work on time.\n");
	printf ("\nYour answer is: ");
	scanf ("%d", &ass1); 

	switch (ass1)
	{
		case 1: 
		{
			printf ("\nOh man, that's not Tanya at all, but okay. Go on."); 
			break;
		}
		case 2: 
		{
			printf ("\nDamn it, it's not Tanya. She really values her "); 
		    printf ("curren job position and wouldn't sleep off on purpose.");
		    printf (" But go on and see how Tanya would feel in this case!"); 
		    break;
		}
		case 3: 
		{
			printf ("\nYou got it! That's a real Tanya. Congrats! ");
			printf("Go on and discover more.");  
			break;	
		}
	}

	if (ass1 == 1)
	{	
		printf ("\nIf on a work day Tanya gets up right after her alarm rings, ");
		printf ("she has all time in the world. She gets on the bus to work,");
		printf (" and... \n\n 1) Listens to music and surfs instagram until"); 
		printf (" she reaches her job place. \n\n 2) Studies French on the bus ");
		printf ("through a phone app. \n\n 3) Sleeps off on the bus.");
	 	printf ("\n\nYour answer is: ");
	 	scanf ("%d", &ass2);

	 	switch (ass2)
	 	{
			case 1: 
			{		
				printf ("\nOkay, you got it Deepak! Tanya always ");
		 		printf ("wants to actually study on the bus but ends up doing ");
		  		printf ("something totally different..."); 
		  		break;
			}
			case 2: 
			{		
				printf ("\nNot really. Tanya always wants to actually"); 
				printf ("study on the bus but it never happens... "); 
				break;
			}
			case 3: 
			{
				printf ("\nNope, Tanya wouldn't sleep off on the bus in");
				printf (" the morning. Come on dude, she just woke up!"); 
				break;
			}
		}	 

	 	printf ("Once Tanya reaches her work place,");
		printf (" what does she feel? \n\n1) Tanya feels happy to");
		printf (" be at work. She luves working in this restaurant!!!");
		printf (" \n\n2) Tanya really wants to go home badly right");
		printf (" as she enters the doors. \n\n3) Tanya is too");
		printf (" busy to think about her feelings! She just");
		printf (" needs to start working immediatly!");
		printf ("\n\nYour answer is: ");
		scanf ("%d", &ass6);

		if(ass7 == 1)
		{	
		 	printf ("\nTanya LOVES working at this restaurant???");
		 	printf ("Come on, not really. ");
        }
        else if (ass7 == 2)
        {
			printf ("Hey, the day has just started for her."); 
			printf ("Why would she want to go home?");
		}
		else if (ass7 == 3)
		{
			printf ("Yep, that's all about Tanya! No"); 
			printf ("random thought, just efficient work!");
		}
		
		printf ("But anyways, after finishing her shift,");
		printf (" Tanya reaches home. She enters her room ");
		printf ("and sees that Deepak is not home. What does ");
		printf ("Tanya do? \n\n 1) Goes to take a shower ");
	 	printf ("and comes back to study programming.\n\n ");
		printf ("2) Tracks Deepak's location and wonders when ");
		printf ("he is gonna be back. Then just wastes time waiting ");
		printf ("for him.\n\n 3) Goes to the gym.");
		printf ("\n\nYour answer is: ");
		scanf  ("%d", &ass8);

		printf ("\nOh wow, my little explorer,"); 
		printf (" we have reached so far in this Tanya's life-game!\n");
		printf ("Let's see what the answer ");
		printf ("to the last question is!\n\n");

		if (ass8 == 1)
		{
			printf ("Holy cow, Tanya wishes she was always");
			printf (" like a cute robot: work, jym, programming and Deepak.");
			printf (" Or else, Deepak, work, Deepak, gym, Deepak, programmi..");
			printf ("....DEEPAK. Okay. Nevermind. This option is 1 out of 10"); 
			printf (" real Tanya. BUMPS!\n\n");
		}
		else if (ass8 == 2)
			printf ("YEP. Just waiting for Deepak to come and hug lill Tanya.\n\n");
		else if (ass8 == 3)
		{
			printf ("MEOW. Gym after work! If only"); 
			printf ("Tanya had this much determination to lose ");	
			printf ("weight......... <minute of silence>.\n\n");
		}

	    printf ("					   I AM DONE!!!!!!!");
	    printf ("\n				 	LET'S STUDY LOOPS :***");
	    
	    return 0;
	}				
	  

	if (ass1 == 2)
	{	
		printf ("\nAfter having slept off, Tanya tries to find the fastest");
		printf (" way to get to her work place. What does she do? \n\n"); 
		printf (" 1) Calls her friend Victoria to see if she can give "); 
		printf ("her a ride. \n\n 2) Asks Deepak about his Uber discounts hoping");
		printf ("he can call her a cab.\n\n 3) Calls a cab herself.");
		printf ("\n\nYour answer is: ");
		scanf ("%d", &ass3);

		switch (ass3)
		{
			case 1: 
			{	
				printf ("\nNope, this would never happen. Tanya wouldn't ");
				printf ("normally ask Victoria for any morning rides. But okay,");
				printf (" today is an exception and Victoria agrees to take");
				printf (" Tanya to work. Once Tanya reaches her work place,");
				printf (" what does she feel? \n\n1) Tanya feels happy to");
				printf (" be at work. She luves working in this restaurant!!!");
				printf (" \n\n2) Tanya really wants to go home badly right");
				printf (" as she enters the doors. \n\n3) Tanya is too");
				printf (" busy to think about her feelings! She just");
				printf (" needs to start working immediatly!");
				printf ("\n\nYour answer is: ");
				scanf ("%d", &ass5);

				if(ass5 == 1)
				{	
				 	printf ("\nTanya LOVES working at this restaurant??? ");
				 	printf ("Come on, not really. ");
	            }
	            else if (ass5 == 2)
	            {
					printf ("Hey, the day has just started for her."); 
					printf ("Why would she want to go home?");
				}
				else if (ass5 == 3)
				{
					printf ("Yep, that's all about Tanya! No "); 
					printf ("random thought, just efficient work!");
				}

				printf (" But anyways, after finishing her shift,");
				printf (" Tanya reaches home. She enters her room ");
				printf ("and sees that Deepak is not home. What does ");
				printf ("Tanya do? \n\n 1) Goes to take a shower ");
			 	printf ("and comes back to study programming.\n\n ");
				printf ("2) Tracks Deepak's location and wonders when ");
				printf ("he is gonna be back. Then just wastes time waiting ");
				printf ("for him.\n\n 3) Goes to the gym.");
				printf ("\n\nYour answer is: ");
				scanf ("%d", &ass9);

				printf ("\nOh wow, my little explorer,"); 
				printf (" we have reached so far in this Tanya's life-game!\n");
				printf ("Let's see what the answer ");
				printf ("to the last question is!\n\n");
		

			    if (ass9 == 1)
				{
					printf ("Holy cow, Tanya wishes she was always just like !");
					printf ("a cute robot: work, jym, programming and Deepak.");
					printf (" Or else, Deepak, work, Deepak, gym, Deepak, programmi.");
					printf ("....DEEPAK. Okay. Nevermind. This option is 1 out of 10"); 
					printf (" real Tanya. BUMPS!\n\n");
				}
				else if (ass9 == 2)
					printf ("YEP. Just waiting for Deepak to come and hug lill Tanya.\n\n");
				else if (ass9 == 3)
				{
					printf ("MEOW. Gym after work! If only"); 
					printf ("Tanya had this much determination to lose ");	
					printf ("weight......... <minute of silence>.\n\n");
				}
	 			
	 			printf ("					   I AM DONE!!!!!!!");
	    		printf ("\n				 	LET'S STUDY LOOPS :***");
	 			
	 			return 0;	
	 		}
			case 2: 
			{
				printf ("\nOkay, let's be honest, deep down");
				printf (" is always Tanya's hope.");
				printf (" Because she loves her boyfriend");
				printf (" doing cure things for her."); 
				break;
			}
			case 3: 
			{	
				printf ("\nIf the option two doesn't work, "); 
				printf ("then the third one is always applied."); 
				printf (" What are you gonna do man."); 
				break;
			}
		}	

		printf (" \nOnce Tanya reaches her work place,");
		printf (" what does she feel? \n\n1) Tanya feels happy to");
		printf (" be at work. She luves working in this restaurant!!!");
		printf (" \n\n2) Tanya really wants to go home badly right");
		printf (" as she enters the doors. \n\n3) Tanya is too");
		printf (" busy to think about her feelings! She just");
		printf (" needs to start working immediatly!");
		printf ("\n\nYour answer is: ");
		scanf ("%d", &ass10);

		if(ass10 == 1)
		{	
		 	printf ("\nTanya LOVES working at this restaurant???");
		 	printf (" Come on, not really. ");
        }
        else if (ass10 == 2)
        {
			printf ("Hey, the day has just started for her."); 
			printf (" Why would she want to go home?");
		}
		else if (ass10 == 3)
		{
			printf ("Yep, that's all about Tanya! No "); 
			printf ("random thought, just efficient work!");
		}

		printf (" But anyways, after finishing her shift,");
		printf (" Tanya reaches home. She enters her room ");
		printf ("and sees that Deepak is not home. What does");
		printf (" Tanya do? \n\n 1) Goes to take a shower ");
	 	printf ("and comes back to study programming.\n\n ");
		printf ("2) Tracks Deepak's location and wonders when ");
		printf ("he is gonna be back. Then just wastes time waiting ");
		printf ("for him.\n\n 3) Goes to the gym.");
		printf ("\n\nYour answer is: ");
		scanf ("%d", &ass11);

		printf ("\nOh wow, my little explorer,"); 
		printf (" we have reached so far in this Tanya's life-game!\n");
		printf ("Let's see what the answer ");
		printf ("to the last question is!\n\n");

	    if (ass11 == 1)
		{
			printf ("Holy cow, Tanya wishes she was always like this!");
			printf (" Just like a cute robot: work, jym, programming and Deepak.");
			printf (" Or else, Deepak, work, Deepak, gym, Deepak, programmi.");
			printf (" ....DEEPAK. Okay. Nevermind. This option is 1 out of 10"); 
			printf ("  real Tanya. BUMPS!\n\n");
		}
		else if (ass11 == 2)
			printf ("YEP.  Just waiting for Deepak to come and hug lill Tanya.\n\n");
		else if (ass11 == 3)
		{
			printf ("MEOW. Gym after work! If only "); 
			printf ("Tanya had this much determination to lose ");	
			printf ("weight......... <minute of silence>.\n\n");
		}
		
		printf ("					   I AM DONE!!!!!!!");
	    printf ("\n				 	LET'S STUDY LOOPS :***");
		
		return 0;
    }

	if (ass1 == 3)
	{	
		printf ("\nTanya rushed and managed to get on the bus. What does she");
		printf (" do on the bus though? \n\n 1) Listens to music and surfs instagram");
		printf (" until she reaches her job place. \n\n 2) Studies");
		printf (" French on the bus through a phone app. \n\n");
		printf (" 3) Sleeps off on the bus.");
		printf ("\n\nYour answer is: ");
		scanf ("%d", &ass4);

		switch (ass4)
		{
			case 1: 
			{
				printf ("\nOkay, you got it Deepak! Tanya ");
				printf ("always wants to actually study on the bus but ");
				printf ("ends up doing something totally different..."); 
				break;
			}
			case 2: 
			{
				printf ("\nNot really. Tanya always wants to actually "); 
				printf ("study on the bus but it never happens... Anyways, "); 
				break;
			}
			case 3: 
			{
				printf ("\nNope, Tanya wouldn't sleep off on the bus in");
				printf (" the morning. Come on dude, she just woke up!"); 
				break;
			}
        }

        printf (" \nOnce Tanya reaches her work place,");
		printf (" what does she feel? \n\n1) Tanya feels happy to");
		printf (" be at work. She luves working in this restaurant!!!");
		printf (" \n\n2) Tanya really wants to go home badly right");
		printf (" as she enters the doors. \n\n3) Tanya is too");
		printf (" busy to think about her feelings! She just");
		printf (" needs to start working immediatly!");
		printf ("\n\nYour answer is: ");
		scanf ("%d", &ass10);

		if(ass10 == 1)
		{	
		 	printf ("\nTanya LOVES working at this restaurant???");
		 	printf (" Come on, not really. ");
        }
        else if (ass10 == 2)
        {
			printf ("Hey, the day has just started for her."); 
			printf (" Why would she want to go home?");
		}
		else if (ass10 == 3)
		{
			printf ("Yep, that's all about Tanya! No "); 
			printf ("random thought, just efficient work!");
		}

		printf (" But anyways, after finishing her shift,");
		printf (" Tanya reaches home. She enters her room ");
		printf ("and sees that Deepak is not home. What does");
		printf (" Tanya do? \n\n 1) Goes to take a shower ");
	 	printf ("and comes back to study programming.\n\n ");
		printf ("2) Tracks Deepak's location and wonders when ");
		printf ("he is gonna be back. Then just wastes time waiting ");
		printf ("for him.\n\n 3) Goes to the gym.");
		printf ("\n\nYour answer is: ");
		scanf ("%d", &ass11);

		printf ("\nOh wow, my little explorer,"); 
		printf (" we have reached so far in this Tanya's life-game!\n");
		printf ("Let's see what the answer ");
		printf ("to the last question is!\n\n");

	    if (ass11 == 1)
		{
			printf ("Holy cow, Tanya wishes she was always like ");
			printf ("a cute robot: work, jym, programming and Deepak.");
			printf (" Or else, Deepak, work, Deepak, gym, Deepak, programmi.");
			printf (" ....DEEPAK. Okay. Nevermind. This option is 1 out of 10"); 
			printf ("  real Tanya. BUMPS!\n\n");
		}
		else if (ass11 == 2)
			printf ("YEP. Just waiting for Deepak to come and hug lill Tanya.\n\n");
		else if (ass11 == 3)
		{
			printf ("MEOW. Gym after work! If only "); 
			printf ("Tanya had this much determination to lose ");	
			printf ("weight......... <minute of silence>.\n\n");
		}

		printf ("					   I AM DONE!!!!!!!");
	    printf ("\n				 	LET'S STUDY LOOPS :***");
		
		return 0;
	}

   	return 0; 
}

