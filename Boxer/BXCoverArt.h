/* 
 Boxer is copyright 2009 Alun Bestor and contributors.
 Boxer is released under the GNU General Public License 2.0. A full copy of this license can be
 found in this XCode project at Resources/English.lproj/GNU General Public License.txt, or read
 online at [http://www.gnu.org/licenses/gpl-2.0.txt].
 */


//BXCoverArt renders a boxed cover-art appearance from an original source image. It can return
//an NSImage resource suitable for use as a file thumbnail, or draw the art directly into the
//current graphics context.

#import <Cocoa/Cocoa.h>

@interface BXCoverArt : NSObject
{
	NSImage *sourceImage;
}
//The original image we will render into cover art
@property (retain) NSImage *sourceImage;


//Methods governing art appearance
//--------------------------------

//Returns the drop shadow effect to be applied to icons of the specified size.
//This shadow ensures the icon stands out on light backgrounds, such as a Finder folder window.
+ (NSShadow *) dropShadowForSize: (NSSize) iconSize;

//Returns the inner glow effect to be applied to icons of the specified size.
//This inner glow ensures the icon stands out on dark backgrounds, such as Finder's Coverflow.
+ (NSShadow *) innerGlowForSize: (NSSize) iconSize;

//Returns a shine overlay image to be applied to icons of the specified size.
//This overlay gives the image a stylized glossy appearance.
+ (NSImage *) shineForSize: (NSSize) iconSize;


//Rendering methods
//-----------------

//Draws the source image as cover art into the specified frame in the current graphics context.
- (void) drawInRect: (NSRect)frame;

//Returns a cover art image representation from the source image rendered at the specified size.
- (NSImageRep *) representationForSize: (NSSize)iconSize;

//Default initializer: returns a BXCoverArt object initialized with the specified original image.
- (id) initWithSourceImage: (NSImage *)image;

//Returns a cover art image rendered from the source image to 512, 256, 128 and 32x32 sizes,
//suitable for use as an OS X icon.
- (NSImage *) coverArt;

//Returns a cover art image rendered from the specified image to 512, 256, 128 and 32x32 sizes,
//suitable for use as an OS X icon.
+ (NSImage *) coverArtWithImage: (NSImage *)image;

@end
