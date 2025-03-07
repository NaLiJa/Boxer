/* 
 Copyright (c) 2013 Alun Bestor and contributors. All rights reserved.
 This source file is released under the GNU General Public License 2.0. A full copy of this license
 can be found in this XCode project at Resources/English.lproj/BoxerHelp/pages/legalese.html, or read
 online at [http://www.gnu.org/licenses/gpl-2.0.txt].
 */


#import "BXCDImageImport.h"

/// `BXBinCueImageImport` rips CD-ROM discs to BIN/CUE images that are bundled into a .cdmedia bundle,
/// using the *cdrdao* utility.
@interface BXBinCueImageImport : BXCDImageImport

/// Enables/disables cdrdao's error-correction when reading audio tracks.
/// This halves the speed of importing when enabled.
@property (atomic) BOOL usesErrorCorrection;

@end
