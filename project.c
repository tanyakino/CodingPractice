#include <stdio.h>

int main ()
{
	int enter, ass1, ass2, ass3, ass4, ass5;
	_Bool TRUE;

	printf ("				HOW TANYA ARE YOU?\n  Type your favourite number and press enter to find out your percent of Tanyaness!\n");
	scanf ("%d", &enter);

	printf ("\nBeginning of a long work day. Alarm wakes Tanya up at 9:45. What does she do?\n\n");
	printf (" 1)Gets up right as she woke up and goes to the bathroom.\n\n 2)Feels upset about going to work and sleeps off.\n\n 3)Sees Deepak's sleeping face amd hugs him forever, then rushes to get to work on time.\n");
	printf ("\nYour answer is: ");
	scanf ("%d", &ass1); 

	switch (ass1)
	{
		case 1: printf ("\nOh man, that's not Tanya at all, but okay. Go on."); break;
		case 2: printf ("\nDamn it, it's not Tanya. She really values her curren job position and wouldn't sleep off on purpose. But go on and see how Tanya 	 would feel in this case!"); break;
		case 3: printf ("\nYou got it! That's a real Tanya. Congrats! Go on and discover more."); break;	
	}

	if (ass1 == 1)
	{	
		printf ("\nIf on a work day Tanya gets up right after her alarm rings, she has all time in the world. She gets on the bus to work, and... \n\n 1) Listens to music amd surfs instagram until she reaches her job place. \n\n 2) Studies French on the bus through a phone app. \n\n 3) Sleeps off on the bus. ");
	 	printf ("\nYour answer is: ");
	 	scanf ("%d", &ass2);

	 	switch (ass2)
	 	{
			case 1: printf ("\nOkay, you got it Deepak! Tanya always wants to actually study on the bus but ends up doing something totally different..."); break;
			case 2: printf ("\nNot really. Tanya always wants to actually study on the bus but it never happens... Anyways, "); break;
			case 3: printf ("\nNope, Tanya wouldn't sleep off on the bus in the morning. Come on dude, she just woke up!"); break;
	 
	 	}

	 return 0;
	} 

	if (ass1 == 2)
	{	
		printf ("\nAfter having slept off, Tanya tries to find the fastest way to get to her work place. What does she do? \n\n 1) Calls her friend Victoria to see if she can give her a ride. \n\n 2) Asks Deepak about his Uber discounts hoping he can call her a cab.\n\n 3) Calls a cab herself.");
		printf ("\n\nYour answer is: ");
		scanf ("%d", &ass3);

		switch (ass3)
		{
			case 1: 
			{	
				printf ("\nNope, this would never happen. Tanya wouldn't normally ask Victoria for any morning rides. But okay, today is an exception and Victoria agrees to take Tanya to work. Once Tanya reaches her work place, what does she feel? \n\n1) Tanya feels happy to be at work. She luves working in this restaurant!!! \n\n2) Tanya really wants to go home badly right as she enters the doors. \n\n3) Tanya is too busy to think about her feelings! She just needs to start working immediatly!");
				printf ("\n\nYour answer is: ");
				scanf ("%d", &ass5);
				{
					if(ass5 == 1)
					{	
					 printf ("\nTanya LOVES working at this restaurant??? Come on, not really. ");
                    else if (ass == 2)
					 printf ("Hey, the day has just started for her. Why would she want to go home?");
					 else if (ass == 3)
					 printf ("Yep, that's all about Tanya! No random thought, just efficient work!");
					 printf ("But anyways, after finishing her shift, Tanya reaches home. She enters her room and sees that Deepak is not home. What does Tanya do? \n\n 1) Goes to take a shower and comes back to study programming.\n\n 2) Tracks Deepak's location and wonders if he is with Anna. Then just wastes time waiting for him.\n\n 3) Goes to the gym.break");
				{	}

				return 0;
			}
			case 2: printf ("\n111Not really. Tanya always wants to actually study on the bus but it never happens... Anyways, "); break;
			case 3: printf ("\n111Nope, Tanya wouldn't sleep off on the bus in the morning. Come on dude, she just woke up!"); break;
		}
		return 0;
    }

	if (ass1 == 3)
	{	
		printf ("\nTanya rushed and managed to get on the bus. What does she do on the bus though? \n\n 1) Listens to music and surfs instagram until she reaches her job place. \n\n 2) Studies French on the bus through a phone app. \n\n 3) Sleeps off on the bus.");
		printf ("\nYour answer is: ");
		scanf ("%d", &ass4);

		switch (ass4)
		{
			case 1: printf ("\nOkay, you got it Deepak! Tanya always wants to actually study on the bus but ends up doing something totally different..."); break;
			case 2: printf ("\nNot really. Tanya always wants to actually study on the bus but it never happens... Anyways, "); break;
			case 3: printf ("\nNope, Tanya wouldn't sleep off on the bus in the morning. Come on dude, she just woke up!"); break;
		}
		return 0;
	}	
    }
}	return 0;
}