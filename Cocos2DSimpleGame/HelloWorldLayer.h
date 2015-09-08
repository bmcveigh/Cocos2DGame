//
//  HelloWorldLayer.h
//  Cocos2DSimpleGame
//
//  Created by Brian McVeigh on 11/23/13.
//  Copyright __MyCompanyName__ 2013. All rights reserved.
//


// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"

// HelloWorldLayer
@interface HelloWorldLayer : CCLayerColor
{
    NSMutableArray *_monsters;
    NSMutableArray *_projectiles;
    int _monstersDestroyed;

}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
