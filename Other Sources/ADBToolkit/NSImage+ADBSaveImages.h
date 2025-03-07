/*
 *  Copyright (c) 2013, Alun Bestor (alun.bestor@gmail.com)
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without modification,
 *  are permitted provided that the following conditions are met:
 *
 *		Redistributions of source code must retain the above copyright notice, this
 *	    list of conditions and the following disclaimer.
 *
 *		Redistributions in binary form must reproduce the above copyright notice,
 *	    this list of conditions and the following disclaimer in the documentation
 *      and/or other materials provided with the distribution.
 *
 *	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 *	ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *	WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 *	IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 *	INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *	BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 *	OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 *	WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *	ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *	POSSIBILITY OF SUCH DAMAGE.
 */

#import <AppKit/AppKit.h>

NS_ASSUME_NONNULL_BEGIN

/// The @c ADBSaveImages category adds convenience methods for saving an NSImage directly to a file.
@interface NSImage (ADBSaveImages)

/// Convenience method to save an image to the specified path with the specified filetype.
/// Returns YES if file was saved successfully, or NO and populates outError if there was an error.
- (BOOL) saveToURL: (NSURL *)URL
          withType: (NSBitmapImageFileType)type
        properties: (NSDictionary<NSBitmapImageRepPropertyKey, id> *)properties
             error: (out NSError *__autoreleasing*)outError;

/// Creates a .ICNS-format at the specified location. Returns @c YES on success, or @c NO and populates
/// @c outError if there was an error (including that a file at the specified destination already exists.)
- (BOOL) saveAsIconToURL: (NSURL *)URL
                   error: (out NSError *__autoreleasing*)outError;

@end

NS_ASSUME_NONNULL_END
