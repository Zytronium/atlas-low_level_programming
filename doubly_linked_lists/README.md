# Doubly Linked Lists
###### Why did the linked list go to therapy?
Because it had too many issues with pointers!

---
Doubly Linked lists are very similar to [Singly Linked Lists](https://github.com/Zytronium/atlas-low_level_programming/blob/main/singly_linked_lists/README.md),
except that they can be navigated both forwards and backwards in the list.
They also start and end with a NULL, rather than just ending. This way,
you know where the head is when navigating backwards.

Doubly linked lists also take up slightly more memory, as they contain a
second pointer, and are slightly more complex to perform operations on,
as you need to work with the next AND prev pointers.

### Example Usage/story
This example may not be a doubly linked list, but a singly linked list still
gets the point across. Doubly linked lists can still be useful in other
scenarios or to help make navigating the list easier and more efficient.
Let's take a personal project of mine that I've been working on as an example:
[Stratos-X](https://github.com/Zytronium/Stratos_X?tab=readme-ov-file#game-idea)
(based on a common joke in the [Starscape](https://www.roblox.com/games/679715583/Starscape-Beta) game community).

In my project, I had an array of 6 arrays of 50 ships. Each of these 6 arrays
was a "wave" of ships, the 6th wave being the final boss with a few support ships.
Most of these waves, the 6 arrays, did not even contain half of those 50 ships
they could fit, so I had to fill in the rest with empty ships, which took up a
lot of memory. For context, my ship struct had 7 properties: 5 `double`s, 1
`int`, and 1 enum, which I believe is interpreted as an int by the computer.

Once I store a wave of, for example, 15 ships for wave 2, I have to fill in
the remaining 35 spaces in the array with entire ships, all properties
initialized to zero, and the enum initialized to my enum called `Null`. That's
a lot of wasted space, just for one of those 6 arrays to fill up all 50 spaces.

While I could just declare 6 arrays with their respective sizes, an array of
these waves seems more organized to me. So, I converted the array of arrays into
an array of singly linked lists. Now, it may be slightly more complicated to
initialize each wave (I'm still debugging it at the time of typing this), it
takes up much less memory, I can vary the number of ships in a wave each time
if I want, and I can free a ship from memory when it is destroyed, all
without sacrificing any memory except for an additional pointer per ship
in the list.

#### Here's what my waves looked like before:

Declaring and initializing waves:
```c
Wave_t waves[6][50];

for (i = 0; i < 6; i++)
		initWave(&waves[i], i + 1);
```

Enum and typedef struct in header file:
```c
/* class of a Ship_t ship */
enum ShipClass {
	Null, /* Null terminator */
	StratosX, /* Player Ship */
	Interceptor,
	Fighter,
	Corvette,
	Frigate,
	Destroyer,
	Cruiser,
	CoreSec_Battleship, /* Final boss */
	PlayerStation
	/* PlayerStation: Placeholder, with a joke name, for when you need to
	 * initialize a ship without accidentally null-terminating a list
	 * or setting it to a real ship type, which could be confusing.
     */
};
/* 					^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^
 * Note: I may add a ShipClass for destroyed ships. This will depend on
 * what I do when I get to developing the part of the game that handles
 * destroyed ships. I can either check if a ship's hullHP is 0, add a
 * "isDestroyed" property and check that, or change the ship to Destroyed"
 * class. Most likely, it will be one of the first 2 options.
 */

/* properties/statistics of a ship entity  */
typedef struct Ship {
	enum ShipClass class;
	double maxHull;
	double maxShields;
	double hullHp;
	double shieldsHp;
	double speed; /* max speed, not current */
	int dps; /* damage per second */
} Ship_t;

```

#### And here's what it looks like now:

Declaring and initializing waves:
```c
Wave_t waves[6];

for (i = 0; i < 6; i++)
		initWave(&waves[i
```

Enum and typedef struct in header file:
```c
/* class of a Ship_t ship */
enum ShipClass {
	Null, /* Null terminator */
	StratosX, /* Player Ship */
	Interceptor,
	Fighter,
	Corvette,
	Frigate,
	Destroyer,
	Cruiser,
	CoreSec_Battleship, /* Final boss */
	PlayerStation
    /* PlayerStation: Placeholder, with a joke name, for when you need to
     * initialize a ship without accidentally null-terminating a list
     * or setting it to a real ship type, which could be confusing.
     */
};
/*
 * Don't need to add anything to detect if a ship is destroyed anymore. It can
 * be removed from the linked list and freed from memory upon destruction.
 */

/* properties/statistics of a ship entity  */
typedef struct Ship {
	enum ShipClass class;
	double maxHull;
	double maxShields;
	double hullHp;
	double shieldsHp;
	double speed; /* max speed, not current */
	int dps; /* damage per second */
} Ship_t;

/* Singly linked list of ship nodes. */
typedef struct Wave_s
{
	Ship_t ship; /* this ship */
	struct Wave_s *next; /* pointer to next node in list */
} Wave_t;
```