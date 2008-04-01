/*  Copyright (C) 2007 Jeff Bland

    This file is part of DeSmuME

    DeSmuME is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    DeSmuME is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with DeSmuME; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#import "nds_control.h"

@interface VideoOutputView : NSView
{
	enum ScreenRotation rotation;
	NSOpenGLContext* context;
	NSOpenGLPixelFormat* format;
	NintendoDS *DS;
	ScreenState *screen_buffer;
}
- (id)initWithFrame:(NSRect)frame withDS:(NintendoDS*)ds;
- (void)dealloc;
- (void)setRotation:(enum ScreenRotation)rotation;
- (enum ScreenRotation)rotation;
- (void)drawRect:(NSRect)bounds;
- (void)setFrame:(NSRect)rect;
- (BOOL)isOpaque;
- (void)clearScreenBlack;
- (void)clearScreenWhite;
- (void)updateScreen:(ScreenState*)screen;
- (const ScreenState*)screenState;
@end

