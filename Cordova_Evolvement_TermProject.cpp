//Term Project: Evolvement
// December 1, 2023
// Seth Cordova

#include <iostream>
using namespace std;

const string PROGRAM_TITLE = "Evolvement";

int main ()

{

    cout << "Welcome to " << PROGRAM_TITLE << " the program that allows you to evolve into an organism! Lets begin!" << endl;
    cout << endl;
    cout << "Its important to note that not every evolutionary change leads to success.. some lead to extinction..." << endl;
    cout << "So be careful with your choices!" << endl;
    cout << endl;

    cout << "You open your eyes. WOW you're a microbe, a microscopic organism considered the first life on Earth!" << endl;
    cout << "Speaking of Earth, its a pretty big place right? Lets choose a home" << endl;
    cout << endl;
    cout << "To choose a choice simply type the number!" << endl;
    cout << endl;

    //present the user with options

    cout << "1. Swim the seas" << endl;
    cout << "2. Soar the skies" << endl;
    cout << endl;
    cout << "Wondering why land isn't a choice? A catastrophic event has made most land unihabitable.." << endl;
    cout << "Evolution isn't easy!" << endl;
    cout << endl;

    int userChoice;

    cout << "Please enter your choice: " <<endl;
    cin >> userChoice;
    cout << endl;

    switch (userChoice)
    {
        case 1:
        cout << "Great! You're now a swimmer!" << endl;

        if (userChoice==1)
        {
            cout << endl;
            cout << "Life in the ocean is great, but you've developed quite the appetite." << endl;
            cout << "You look around. To your left is another microbe but to your right is a lush bed of seagrass.." << endl;
            cout << endl;

            cout << "1. Eat your fellow microbe" << endl;
            cout << "2. Eat the yummy seagrass" << endl;
            cout << endl;

            cout << "Time to make another life changing decision: " << endl;
            cin >> userChoice;
            cout << endl;

            switch (userChoice)
            {
                //user chose to eat the microbe
                case 1:
                cout << "Oh wow looks like you just committed cannibalism! Safe to say you're a carnivore now!" << endl;

                if (userChoice==1)
                {
                    cout << endl;
                    cout << "Looks like being a fan of cannibalism has made you grow in size.." << endl;
                    cout << "Let's do something about this" << endl;
                    cout << endl;

                    cout << "1. Go on a diet to revert to being small" << endl;
                    cout << "2. Continue eating and grow bigger" << endl;
                    cout << endl;

                    cout << "Lets see what u want to do: " << endl;
                    cin >> userChoice;
                    cout << endl;

                    switch (userChoice)
                    { //user chose to stay small
                        case 1:
                        cout << "Looks like you're counting calories now!" << endl;

                        if (userChoice==1)
                        {
                            cout << endl;
                            cout << "You've made a lot of life decisions so far!" << endl;
                            cout << "You've chosen to be an ocean dwelling, meat eating, small organism!" << endl;
                            cout << "Still, you have a set of issues. Traversing the ocean is hard without any limbs.." << endl;
                            cout << endl;
                            cout << "Lets get you some!" << endl;
                            cout << endl;

                            cout << "1. Grow fins" << endl;
                            cout << "2. Grow extended limbs" << endl;
                            cout << endl;

                            cout << "There's no wrong answers so let's pick: " << endl;
                            cin >> userChoice;
                            cout << endl;

                            switch (userChoice)
                            { //user chose to grow fins
                                case 1:
                                cout << "Fins! You're bound to be a great swimmer!" << endl;

                                if (userChoice==1)
                                {
                                    cout << endl;
                                    cout << "Now that you've got fins you've gotten way better at hunting." << endl;
                                    cout << "Still, you find it hard to simply swallow up organisms." << endl;
                                    cout << "Wouldn't it be nice if you had teeth.." << endl;
                                    cout << endl;

                                    cout << "1. Grow a few large teeth" << endl;
                                    cout << "2. Grow a lot of small teeth" << endl;
                                    cout << endl;

                                    cout << "Both have their benefits but we can only have one: " << endl;
                                    cin >> userChoice;
                                    cout << endl;

                                    switch (userChoice)
                                    {
                                        case 1: //grow a few large teeth
                                        cout << "You're expertise as a hunter continues to skyrocket!" << endl;

                                        if (userChoice==1)
                                        {
                                            cout << endl;
                                            cout << "To become the expert hunter you were meant to be you need one more thing!" << endl;
                                            cout << "Camouflage is PIVOTAL to catching prey.. Ever heard of the ";
                                            cout << "element of surprised??" << endl;
                                            cout << endl;

                                            cout << "1. Become orange and gray" << endl;
                                            cout << "2. Become blue" << endl;

                                            cout << endl;
                                            cout << "Let's see: " << endl;
                                            cin >> userChoice;
                                            cout << endl;

                                            switch (userChoice)
                                            {
                                                case 1: // orange and gray
                                                cout << "You've become a piranha of the Amazon Rainforest!" << endl;
                                                cout << "Although they're small, they're one of the fiercest fish out there!" << endl;
                                                cout << "It is important to note your home is on a steep decline.." << endl;
                                                break;

                                                case 2: //blue
                                                cout << "You've become a barracuda!" << endl;
                                                cout << "Not really familiar with them? Barracudas love shiny objects such as shiny ";
                                                cout << "fish and even jewelry!" << endl;
                                                cout << "Seems like you have a love for the expensive things!" << endl;
                                                break;

                                                default:
                                                cout << "Invalid user choice" << endl;
                                            }
                                        }


                                        break;

                                        case 2: //grow many small teeth
                                        cout << "Your digestion issues are no longer present! Great choice!" << endl;

                                        if (userChoice==2)
                                        {
                                            cout << endl;
                                            cout << "Fast, small, and brave you're one to be feared!" << endl;
                                            cout << "Still, you want to be even better. Maybe you could blend in with the water?" << endl;

                                            cout << endl;
                                            cout << "1. Blend in with green water" << endl;
                                            cout << "2. Blend in with blue water" << endl;
                                            cout << endl;

                                            cout << "Let's see your preferred blend: " << endl;
                                            cin >> userChoice;
                                            cout << endl;

                                            switch (userChoice)
                                            {
                                                case 1:
                                                cout << "You've evolved into the great bass! No not the instrument the fish!" << endl;
                                                cout << "I would recommend you be careful of unfamiliar hooks.." << endl;
                                                break;

                                                case 2:
                                                cout << "You've evolved into the blue catfish! Not familiar with them?" << endl;
                                                cout << "If you've ever eaten catfish in New Orleans it was without a doubt a ";
                                                cout << "blue catfish!" << endl;
                                                break;

                                                default:
                                                cout << "Invalid choice" << endl;
                                            }
                                        }


                                        break;

                                        default:
                                        cout << "Invalid choice" << endl;
                                    }
                                }


                                break;

                                //user chose to have extended limbs
                                case 2:
                                cout << "Interesting choice! You're going to be a weird organims for sure.." << endl;

                                if (userChoice==2)
                                {
                                    cout << endl;
                                    cout << "You're becoming quite the intelligent organism!" << endl;
                                    cout << "Guess what! A new evolutionary feature is available!" << endl;
                                    cout << "Your skin is now starting to glow. How pretty! But this doesn't come without harm.." << endl;
                                    cout << "Allowing you're skin to continue to glow will cause your brain to slowy disappear.." << endl;

                                    cout << endl;
                                    cout << "1. Continue to glow" << endl;
                                    cout << "2. Stop glowing" << endl;
                                    cout << endl;

                                    cout << "Let's see how will you deal with this: " << endl;
                                    cin >> userChoice;
                                    cout << endl;

                                    switch (userChoice)
                                    {
                                        case 1: // user chose glowing skin (no brain)
                                        cout << "Looks like aesthetic comes before intelligence!" << endl;

                                        if (userChoice==1)
                                        {
                                            cout << endl;
                                            cout << "With your brain gone you are extremely prone to predatory attacks." << endl;
                                            cout << "Protection is of the utmost importance now.";
                                            cout << " Let's find a way to protect you!" << endl;

                                            cout << endl;
                                            cout << "1. Practice camouflage" << endl;
                                            cout << "2. Release venom" << endl;
                                            cout << endl;

                                            cout << "Both powerful ways to protect yourself, but you can only have one: " << endl;
                                            cin >> userChoice;
                                            cout << endl;

                                            switch (userChoice)
                                            {
                                                case 1:
                                                cout << "Camouflage! Great choice! Remember that you don't have a brain so";
                                                cout << " choosing a choice that doesn't require thinking is good." << endl;
                                                cout << "You've evolved into a starfish! Specifically an Irish starfish"<< endl;
                                                cout << " that uses bioluminescence to find mates!" << endl;
                                                break;

                                                case 2:
                                                cout << "Venomous attacks are your specialty! You've evolved into a seawasp jellyfish!" << endl;
                                                cout << "One of the most deadly jellyfish in the sea, they aren't afraid to attack others!" << endl;
                                                cout << "Also a fun fact: jellyfish have no brain, no heart, and no skeleton!" << endl;
                                                break;

                                                default:
                                                cout << "Invalid choice"<< endl;
                                            }
                                        }


                                        break;

                                        case 2:
                                        cout << "Looks like you're staying cognitive!" << endl;

                                        if (userChoice==2)
                                        {
                                            cout << endl;
                                            cout << "With your brain still intact you rub your head";
                                            cout << " with your newly grown tentacles.." << endl;
                                            cout << "You notice that your skull is rather fragile, leaving you prone to attack" << endl;
                                            cout << "Lets do something about it" << endl;
                                            cout << endl;

                                            cout << "1. Develop a triangle shaped skull" << endl;
                                            cout << "2. Develop a round shaped skull" << endl;
                                            cout << endl;

                                            cout << "What's your preferred skull shape: " << endl;
                                            cin >> userChoice;
                                            cout << endl;

                                            switch (userChoice)
                                            {
                                                case 1: //squid
                                                cout << "A triangle shaped skull, looks like you've evolved into a squid!" << endl;
                                                cout << "What a yummy creature you are!" << endl;
                                                break;

                                                case 2: //octopus
                                                cout << "A round shaped skull, looks like you've evolved into an octopus!" << endl;
                                                cout << "One of the most intelligent creatures on Earth!" << endl;
                                                break;

                                                default:
                                                cout << "Invalid choice" << endl;

                                            }
                                        }


                                        break;

                                        default:
                                        cout << "Invalid choice" << endl;
                                    }


                                }


                                break;

                                default:
                                cout << "Invalid choice" << endl;
                            }


                        }


                        break;

                        case 2:
                        cout << "Looks like you're set in your decision!" << endl;
                        cout << endl;
                        cout << "Asteroids reign down from the sky! A mass extinction event has begun!" << endl;
                        cout << "The ocean has begun to boil! All creatures are swimming deeper!" << endl;
                        cout << "Unfortunately, you're big size makes it harder for you to swim down, causing you to be burnt to a crisp" << endl;
                        cout << "At least you'll turn into a fossil fuel!" << endl;
                        break;

                        default:
                        cout << "Invalid choice" << endl;

                    }


                }

                break;

                //user chose to eat seagrass
                case 2: 
                cout << "Looks like you're sticking to your morals! Lets see how this herbivore lifestyles treats you!" << endl;

                if (userChoice==2)
                {
                    cout << endl;
                    cout << "Being stuck on the bottom of the ocean is a little boring.." << endl;
                    cout << "We should grow limbs to help us!" << endl;
                    cout << endl;

                    cout << "1. Grow claws to clip seagrass" << endl;
                    cout << "2. Grow fins to swim up high and eat the top of the seagrass" << endl;
                    cout << endl;

                    cout << "Which limb do you prefer: " << endl;
                    cin >> userChoice;
                    cout << endl;

                    switch (userChoice)
                    { //be wear of brackets
                    //not compiling whyyy
                        case 1:
                        cout << "Claws were a good choice! Hopefully they don't become someone's yummy snack later.." << endl;

                        if (userChoice==1)
                        {
                            cout << endl;
                            cout << "Environmental changes have caused predators to spot you easier!" << endl;
                            cout << "You are now in great peril!" << endl;
                            cout << "Warmer colors such as orange and red will allow you to have a higher chance of survival!" << endl;
                            cout << endl;

                            cout << "1. Change to orange" << endl;
                            cout << "2. Change to red" << endl;
                            cout << endl;

                            cout << "What color will we go to: " << endl;
                            cin >> userChoice;

                            cout << endl;
                            switch (userChoice)
                            {
                                case 1:
                                cout << "You have evolved into a crab!" << endl;
                                cout << "What a yummy creature you are! And don't forget the famous Mr. Krabs!" << endl;
                                break;

                                case 2:
                                cout << "A red sea organism how unique!" << endl;

                                if (userChoice==2)
                                {
                                    cout << endl;
                                    cout << "A red clawed sea organism! But still predators can still defeat you easy!" << endl;
                                    cout << "Let's do something about this!" << endl;

                                    cout << endl;
                                    cout << "1. Grow small enough to avoid them" << endl;
                                    cout << "2. Grow big enough to beat them up" << endl;
                                    cout << endl;

                                    cout << "How do we feel: " << endl;
                                    cin >> userChoice;
                                    cout << endl;

                                    switch (userChoice)
                                    { //not compiling
                                        case 1:
                                        cout << "You have evolved into a crawfish!" << endl;
                                        cout << "I highly doubt you'll become a New Orleans delicacy!" << endl;
                                        break;

                                        case 2:
                                        cout << "You've become a lobster!" << endl;
                                        cout << "Its not likely that a chain restaurant will open in your name.." << endl;
                                        break;

                                        default:
                                        cout << "Invalid choice" << endl;
                                    }
                                }


                                break;

                                default:
                                cout << "Invalid choice" << endl;
                            }
                        }


                        break;

                        case 2:
                        cout << "Swimming to the top gives you a lot of opportunities!" << endl;

                        if (userChoice==2)
                        {
                            cout << endl;
                            cout << "Looks like something appeared from the sky!" << endl;
                            cout << "Looks kind of like a net.. do you want to explore it?" << endl;
                            cout << endl;

                            cout << "1. Explore the net" << endl;
                            cout << "2. Avoid the net" << endl;
                            cout << endl;

                            cout << "Let's see what you'll do: " << endl;
                            cin >> userChoice;

                            cout << endl;
                            switch (userChoice)
                            {
                                case 1:
                                cout << "Now why would you do that????" << endl;
                                cout << "You were taken by humans and eaten.. good job.." << endl;
                                break;

                                case 2:
                                cout << "I would say amazing choice but its rather logical.." << endl;

                                if (userChoice==2)
                                {
                                    cout << endl;
                                    cout << "You decide you want to have kids! You lay a bunch of eggs in order for them to hatch.." << endl;
                                    cout << "You notice predators around.." << endl;
                                    cout << "Do you want to leave to go and plant more eggs or risk your life for your babies?" << endl;
                                    cout << endl;

                                    cout << "1. Stay" << endl;
                                    cout << "2. Leave" << endl;
                                    cout << endl;

                                    cout << "What will you do: " << endl;
                                    cin >> userChoice;
                                    cout << endl;

                                    switch (userChoice)
                                    {
                                        case 1:
                                        cout << "You evolved into a clown fish! Ever seen Nemo? They love their kids!" << endl;
                                        break;

                                        case 2:
                                        cout << "You have evolved into a blue tang! Ever seen Finding Nemo? Dory is a blue tang.." << endl;
                                        break;

                                        default:
                                        cout << "Invalid choice" << endl;
                                    }
                                }


                                break;

                                default:
                                cout << "Invalid choice" << endl;
                            }
                        }


                        break;

                        default: //should used invalid choice as a const int 
                        cout << "Invalid choice" << endl;

                    }
                }


                break;

                default:
                cout << "Invalid choice" << endl;
            }

              
        }


        break;

        case 2: //user chose soar the skys
        cout << "Great! You're a flyer!" << endl;

        if (userChoice==2)
        {
            cout << endl;
            cout << "Cuddling with clouds is life. OH WAIT WHAT'S HAPPENING TO YOUR BODY?!" << endl;
            cout << "Looks like a single feather has sprouted from you.." << endl;
            cout << endl;

            cout << "1. Allow more feathers to grow" << endl;
            cout << "2. Pluck the feather" << endl;
            cout << endl;

            cout << "Lets see how you feel about feathers: " << endl;
            cin >> userChoice;
            cout << endl;

            switch (userChoice)
            {
                case 1:
                //user chose to grow feathers
                // remember to be weary of brackets
                cout << "Looks like you're a fan of feathers. You must write with a quill.." << endl;

                if (userChoice==1)
                {
                    cout << endl;
                    cout << "Your skeleton is beginning to become heavier.." << endl;
                    cout << "It is making it more difficult to fly.." << endl;

                    cout << endl;
                    cout << "1. Lighten up your skeleton" << endl;
                    cout << "2. Allow it to heavy up" << endl;
                    cout<< endl;

                    cout << "Let's see what you'll do: " << endl;
                    cin >> userChoice;
                    cout << endl;

                    switch (userChoice)
                    {
                        case 1:
                        cout << "Looks like you've retained your ability to fly.." << endl;

                        if (userChoice==1)
                        {
                            cout << endl;
                            cout << "You notice a settlement in the far distance.." << endl;
                            cout << "You move closer to see what it is, it seems to be people.." << endl;
                            cout << "You want to explore further but are scared to do so." << endl;

                            cout << endl;
                            cout << "1. Explore further" << endl;
                            cout << "2. Stay away" << endl;

                            cout << endl;
                            cout << "Let's see: " << endl;
                            cin >> userChoice;
                            cout << endl;

                            switch (userChoice)
                            {
                                case 1:
                                cout << "The humans have met you with kindness. They've begun to feed you and hug you.." << endl;

                                if (userChoice==1)
                                {
                                    cout << endl;
                                    cout << "You must decide whether you want to live with the humans or simply have a distance";
                                    cout << " relationship with them.." << endl;
                                    cout << endl;

                                    cout << "1. Live with them" << endl;
                                    cout << "2. Distant relationship" << endl;
                                    cout << endl;

                                    cout << "Let's define the relationship: " << endl;
                                    cin >> userChoice;
                                    cout << endl;

                                    switch (userChoice)
                                    {
                                        case 1:
                                        cout << "You've evolved into a chicken.." << endl;
                                        cout << "Gladly you're one of the lucky chickens who lives on an ethical farm." << endl;
                                        cout << "You just barely dodged the bullet!" << endl;
                                        break;

                                        case 2:
                                        cout << "You've evolved into a park duck.." << endl;
                                        cout << "You receive bread from park goers but the truth is you aren't really a fan of them.." << endl;
                                        break;

                                        default:
                                        cout << "Invalid choice" << endl;

                                    }
                                }


                                break;

                                case 2:
                                cout << "Diving back into the forest, looks like humans won't be a part of your story.." << endl;

                                if (userChoice)
                                {
                                    cout << endl;
                                    cout << "Envinronmental changes have caused major changes to your habitat.." << endl;
                                    cout << "It is not only becoming extremely cold but it is also getting dark much sooner" << endl;
                                    cout << "Let's respond to one of these evolutionary changes" << endl;
                                    cout << endl;

                                    cout << "1. Become nocturnal to respond to the darker days" << endl;
                                    cout << "2. Develop a bigger beak to regulate body temperature" << endl;
                                    cout << endl;

                                    cout << "Which feature will you choose: " << endl;
                                    cin >> userChoice;
                                    cout << endl;

                                    switch (userChoice)
                                    {
                                        case 1:
                                        cout << "You've evolved into an owl!" << endl;
                                        cout << "You specialize in nightly hunting!" << endl;
                                        break;

                                        case 2:
                                        cout << "You've evolved into a toucan!" << endl;
                                        cout << "The big beaks of toucans assist them in regulating body temperature!" << endl;
                                        break;

                                        default:
                                        cout << "Invalid choice" << endl;


                                    }
                                }


                                break;

                                default:
                                cout << "Invalid choice" << endl;
                
                            } 
                        }


                        break;

                        case 2:
                        cout << "You're ability to fly has vanished.. rather quickly might I add.." << endl;

                        if (userChoice==2)
                        {
                            cout << endl;
                            cout << "Still, its not the end of the world.." << endl;
                            cout << "Flightless creatures are abundant in society.." << endl;
                            cout << "We should choose a new niche!" << endl;

                            cout << endl;
                            cout << "1. Become an expert swimmer" << endl;
                            cout << "2. Become an expert runner" << endl;
                            cout << "3. Take the easy way out and move to an isolated island" << endl;
                            cout << endl;

                            cout << "Let's see what you'll do: " << endl;
                            cin >> userChoice;
                            cout << endl;

                            switch (userChoice)
                            {
                                case 1:
                                cout << "You've evolved into a penguin!" << endl;
                                cout << "You spend your free time scavenging for fish and caring for your eggs!" << endl;
                                break;

                                case 2:
                                cout << "You've evolved into an ostrich!" << endl;
                                cout << "An extremely fast bird, ostriches instill fear in many animals of the African plains!" << endl;
                                break;

                                case 3:
                                cout << "On this new island you have no natural predators!" << endl;

                                if (userChoice==3)
                                {
                                    cout << endl;
                                    cout << "Humans have landed on your island! They seem to be friendly!" << endl;
                                    cout << "They even brought little furry friends they call 'rats'.. what a weird name" << endl;
                                    cout << endl;

                                    cout << "1. See what happens" << endl;
                                    cout << endl;

                                    cout << "Seems like you only have one choice: " << endl;
                                    cin >> userChoice;
                                    cout << endl;

                                    switch (userChoice)
                                    {
                                        case 1:
                                        cout << "You've evolved into the dodo bird.. which are not exactly known for their intelligence" << endl;
                                        cout << "But the truth is that the dodo bird wasn't dumb, it was simply unprepared.." << endl;
                                        cout << "The bird was driven to extinction due to the introduction of rats on their island.." << endl;

                                        cout << endl;
                                        cout << "Its important to note that regardless of evolution, some factors are uncontrollable.." << endl;
                                        cout << "Many times the ideas of greed and hate stand in the way of us bettering ourselves! But stil we should always try to be our best!" << endl;
                                        break;

                                        default:
                                        cout << "Invalid choice" << endl;

                                    }
                                }


                                break;

                                default:
                                cout << "Invalid choice" << endl;

                            }
                        }

                        
                        break;

                        default:
                        cout << "Invalid choice" << endl;
                    }
                }


                break;

                case 2:
                //user chose to stop feather growth
                // flying insects (ladybugs, butterfly, bees, wasps, flying roach, poodle moth)
                cout << "Looks like you're not a fan of feathers. Lets see where this leads you.." << endl;

                if (userChoice==2)
                {
                    cout << endl;
                    cout << "You've began to pick up new hobbies.." << endl;
                    cout << "You like to suck the root of flowers, you like the flavor!" << endl;
                    cout << "But lately, other organisms have been feeding off your flowers, should we do something about this?" << endl;

                    cout << endl;
                    cout << "1. Attack other organisms" << endl;
                    cout << "2. Leave them be" << endl;

                    cout << endl;
                    cout << "Let's see how you will react: " << endl;
                    cin >> userChoice;

                    cout << endl;
                    switch (userChoice)
                    {
                        case 1: //be weary ot bracket changes
                        cout << "Looks like you're defending your land!" << endl;

                        if (userChoice==1)
                        {
                            cout << endl;
                            cout << "You and your friends fend off attackers!" << endl;
                            cout << "In response, the attackers start their a gang and begin terrorizing everyone for their flowers.." << endl;
                            cout << "A fierce warrioress forms an army and demands the gang be dealt with!" << endl;
                            cout << endl;
                            cout << "You get the bright idea to defeat the gang solo and become the hero!" << endl;

                            cout << endl;
                            cout << "1. Go defeat the gang solo" << endl;
                            cout << "2. Go with your group" << endl;
                            cout << endl;

                            cout << "What are you going to do: " << endl;
                            cin >> userChoice;
                            cout << endl;

                            switch (userChoice)
                            {
                                case 1:
                                cout << "Why did you think that would work?? The gang made quick work of you!" << endl;
                                break;

                                case 2:
                                cout << "The army successfully defeated the gang!" << endl;

                                if (userChoice==2)
                                {
                                    cout << endl;
                                    cout << "Upon defeat of the gang they flee.." << endl;
                                    cout << "But before they leave the Queen offers you a spot in her ranks because she admires your bravery!" << endl;

                                    cout << endl;
                                    cout << "1. Accept her offer" << endl;
                                    cout << "2. Deny her offer" << endl;

                                    cout << endl;
                                    cout << "How do you feel about the offer: " << endl;
                                    cin >> userChoice;
                                    cout << endl;

                                    switch (userChoice)
                                    {
                                        case 1:
                                        cout << "You have evolved into a wasp! Although wasps feed off flowers, they also eat and attack other bugs!" << endl;
                                        break;

                                        case 2:
                                        cout << "You have evolved into a bee! A single bee cannot do alot alone, but together they make it happen!" << endl;
                                        cout << "Bees are not afraid to stand their grown and defend their Queen!" << endl;
                                        break;

                                        default:
                                        cout << "Invalid choice" << endl;
                                    }
                                }


                                break;

                                default:
                                cout << "Invalid choice" << endl;
                            }

                        }


                        break;

                        case 2:
                        cout << "Seems like you don't mind sharing!" << endl;

                        if (userChoice==1)
                        {
                            cout << endl;
                            cout << "The way of peace has served you well, but lately you're feeling tired.." << endl;
                            cout << "Woulnd't it be nice to wrap yourself up in a blanket and take a long nap?" << endl;
                            cout << "Of course this doesn't come without harm, you might get eaten when your defenseless" << endl;
                            cout << "Still, if you survive you may come out stronger than ever!" << endl;

                            cout << endl;
                            cout << "1. Take the risk" << endl;
                            cout << "2. Let's not" << endl;
                            cout << endl;

                            cout << "What are we doing?: " << endl;
                            cin >> userChoice;
                            cout << endl;

                            switch (userChoice)
                            {
                                case 1:
                                cout << "After your deep slumber you emerged with wings stronger than ever!" << endl;

                                if (userChoice==1)
                                {
                                    cout << endl;
                                    cout << "That long slumber served you well! But when you awoke you noticed it got a little colder" << endl;
                                    cout << "If you go down South you will be met with cooler temperatures.." << endl;
                                    cout << "But if you stay where you are you will develop hair to combat the colder temperatures!" << endl;

                                    cout << endl;
                                    cout << "1. Move down South" << endl;
                                    cout << "2. Stay where you are" << endl;

                                    cout << endl;
                                    cout << "Where are we going: " << endl;
                                    cin >> userChoice;

                                    cout << endl;
                                    switch (userChoice)
                                    {
                                        case 1:
                                        cout << "You have evolved into a butterfly! You prefer cooler temperatures and love flower nectar!" << endl;
                                        break;

                                        case 2:
                                        cout << "You have evolved into a poodle moth! These furry creatures feed on the herbacous plants of Venezuela!" << endl;
                                        break;

                                        default:
                                        cout << "Invalid choice" << endl;
                                    }
                                }


                                break;

                                case 2:
                                cout << "Playing the safe side proved to work for you!" << endl;

                                if (userChoice==2)
                                {
                                    cout << endl;
                                    cout << "Avoiding the risk proved to be useful as environmental changes came in quickly!" << endl;
                                    cout << "These environmental changes have caused all non yellow and red flowers to die.." << endl;
                                    cout << "The thing is, you are neither of these colors, making your odds of survival dive down.." << endl;
                                    cout << "Let's do something about this!" << endl;

                                    cout << endl;
                                    cout << "1. Turn yellow" << endl;
                                    cout << "2. Turn red" << endl;

                                    cout << endl;
                                    cout << "What color are we going with: " << endl;
                                    cin >> userChoice;
                                    cout << endl;

                                    switch (userChoice)
                                    {
                                        case 1:
                                        cout << "You've evolved into a yellow ladybug! A small little creature you adore the sweets of flowers!" << endl;
                                        break;

                                        case 2:
                                        cout << "You've evolved into a red ladybug! A small fellow who loves sweets!" << endl;
                                        break;

                                        default:
                                        cout << "Invalid choice" << endl;
                                    }

                                }


                                break;

                                default:
                                cout << "Invalid choice" << endl;
                            }
                        }


                        break;

                        default:
                        cout << "Invalid choice" << endl;
                    }
                }


                break;

                default:
                cout << "Invalid choice" << endl;

            }


        }


        break;

        default:
        cout << "Invalid choice" << endl;
    }

    cout << endl;
    cout << "Thank you for playing " << PROGRAM_TITLE << "!" << endl;
    cout << endl;
     


 return 0;

}
