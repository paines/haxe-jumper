package;


import openfl.display.Sprite;
import openfl.geom.Point;
import flash.events.Event;
import openfl.events.KeyboardEvent;
import openfl.text.TextField;
import openfl.text.TextFormat;


class Main extends Sprite {

	private var map:Array<Array<Int>>;
	private var world:Sprite;
	private var tileSize:Int;
	private var player:Sprite;
	private var acceleration:Float;
	private var velocity:Point;
	private var keys:Array<Bool>;
	private var isOnGround:Bool;




	public function new () {

		super ();

		// Parameters init
		tileSize = 40;
		acceleration = 0.9;

		map = [
		[1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
		[1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1],
		[1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1],
		[1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1],
		[1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1],
		[1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1],
		[1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1],
		[1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1],
		[1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1],
		[1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1]
		];

		world = new Sprite();
		world.graphics.beginFill(0x3498db);
		for (row in 0...map.length) {
    	for (cell in 0...map[row].length) {
        if(map[row][cell]==1){
            world.graphics.drawRect(cell * tileSize, row * tileSize, tileSize, tileSize);
        }
    	}
		}

	addChild(world);

	player = new Sprite();
	player.graphics.beginFill(0xe67e22);
	player.graphics.drawRect(0, 0, tileSize, tileSize);
	addChild(player);
	player.x = 300 - tileSize / 2;
	player.y = 200 - tileSize / 2;
	velocity = new Point(0, 0);
	isOnGround = false;

	// Game loop
	this.addEventListener(Event.ENTER_FRAME, gameLoop);

	// Keyboard input detection
	keys = [];
	stage.addEventListener(KeyboardEvent.KEY_DOWN, onKeyDown);
	stage.addEventListener(KeyboardEvent.KEY_UP, onKeyUp);


	// Text
	 var instructions:TextField = new TextField();
	 instructions.selectable = false;
	 instructions.text = "SPACE to jump, ARROW KEYS to move";
	 instructions.textColor = 0xffffff;
	 instructions.defaultTextFormat = new TextFormat("_sans", 12);
	 instructions.x = 15;
	 instructions.y = 370;
	 instructions.width = 300;
	 addChild(instructions);

	addChild(new FPS_Mem(15, 15, 0xffffff));
}

private function gameLoop(e:Event):Void {
    // Gravity
    velocity.y += acceleration;

    // Movement
    if (isOnGround && keys[32]) {
        isOnGround = false;
        velocity.y = -16;
    }
    if (keys[39]) {
        velocity.x = 7;
    }else if (keys[37]) {
        velocity.x = -7;
    }else {
        velocity.x = 0;
    }
    // Player coordinates on the grid
    var tileCoords:Point = new Point(0, 0);
    var approximateCoords:Point = new Point();

    player.y += velocity.y;
    checkBottomCollision(tileCoords, approximateCoords);
    checkTopCollision(tileCoords, approximateCoords);

    player.x += velocity.x;
    checkRightCollision(tileCoords, approximateCoords);
    checkLeftCollision(tileCoords, approximateCoords);

    // Final vertical velocity check
    if (velocity.y != 0) {
        isOnGround = false;
    }
}

private function checkBottomCollision(tileCoords:Point, approximateCoords:Point):Void {
    // Bottom collision
    if (velocity.y >= 0) {
        approximateCoords.x = player.x / tileSize;
        approximateCoords.y = player.y / tileSize;
        tileCoords.y = Math.ceil(approximateCoords.y);

        tileCoords.x = Math.floor(approximateCoords.x);
        if (isBlock(tileCoords)) {
            player.y = (tileCoords.y - 1) * tileSize;
            velocity.y = 0;
            isOnGround = true;
        }

        tileCoords.x = Math.ceil(approximateCoords.x);
        if (isBlock(tileCoords)) {
            player.y = (tileCoords.y - 1) * tileSize;
            velocity.y = 0;
            isOnGround = true;
        }
    }
}

private function checkTopCollision(tileCoords:Point, approximateCoords:Point):Void {
         // Top collision
				 if (velocity.y < 0) {
       		approximateCoords.x = player.x / tileSize;
					approximateCoords.y = player.y / tileSize;

					tileCoords.y = Math.floor(approximateCoords.y);

					tileCoords.x = Math.floor(approximateCoords.x);

					if (isBlock(tileCoords)) {
						player.y = (tileCoords.y + 1) * tileSize;
						velocity.y = 0;
					}

					tileCoords.x = Math.ceil(approximateCoords.x);
					if (isBlock(tileCoords)) {
						player.y = (tileCoords.y + 1) * tileSize;
						velocity.y = 0;
					}
				}
}

private function checkRightCollision(tileCoords:Point, approximateCoords:Point):Void {
	// Right collision
	if(velocity.x > 0){
		approximateCoords.x = player.x / tileSize;
		approximateCoords.y = player.y / tileSize;

		tileCoords.x = Math.ceil(approximateCoords.x);

		tileCoords.y = Math.floor(approximateCoords.y);
		if (isBlock(tileCoords)) {
			player.x = (tileCoords.x - 1) * tileSize;
			velocity.x = 0;
		}

		tileCoords.y = Math.ceil(approximateCoords.y);
		if (isBlock(tileCoords)) {
			player.x = (tileCoords.x - 1) * tileSize;
			velocity.x = 0;
		}
	}
}

private function checkLeftCollision(tileCoords:Point, approximateCoords:Point):Void {
	// Left collision
	if(velocity.x <= 0){
		approximateCoords.x = player.x / tileSize;
		approximateCoords.y = player.y / tileSize;

		tileCoords.x = Math.floor(approximateCoords.x);

		tileCoords.y = Math.floor(approximateCoords.y);
		if (isBlock(tileCoords)) {
			player.x = (tileCoords.x + 1) * tileSize;
    	velocity.x = 0;
		}

		tileCoords.y = Math.ceil(approximateCoords.y);
		if (isBlock(tileCoords)) {
				player.x = (tileCoords.x + 1) * tileSize;
				velocity.x = 0;
		}
	}
}

private function onKeyDown(evt:KeyboardEvent):Void {
	keys[evt.keyCode] = true;
}

private function onKeyUp(evt:KeyboardEvent):Void {
	keys[evt.keyCode] = false;
}


private function isBlock(coords:Point):Bool {
    return map[Math.round(coords.y)][Math.round(coords.x)] == 1;
}

}
