/* 
 Copyright (c) 2013 Alun Bestor and contributors. All rights reserved.
 This source file is released under the GNU General Public License 2.0. A full copy of this license
 can be found in this XCode project at Resources/English.lproj/BoxerHelp/pages/legalese.html, or read
 online at [http://www.gnu.org/licenses/gpl-2.0.txt].
 */


//BXBlueprintPanel and friends render a custom blueprint appearance for views in the import process.

#import <Cocoa/Cocoa.h>
#import "BXHUDSpinningProgressIndicator.h"

/// `BXBlueprintPanel` and friends render a custom blueprint appearance for views in the import process.
@interface BXBlueprintPanel : NSView
@end

@interface BXBlueprintTextFieldCell : NSTextFieldCell
@end

@interface BXBlueprintProgressIndicator : BXHUDSpinningProgressIndicator
@end
