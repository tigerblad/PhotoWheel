//
//  _Photo.h
//  PhotoWheelPrototype
//
//  Created by Tom Harrington on 6/30/11.
//  Copyright (c) 2011 White Peak Software Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class _PhotoAlbum;

@interface _Photo : NSManagedObject {
@private
}
@property (nonatomic, retain) NSDate * dateAdded;
@property (nonatomic, retain) NSData * originalImageData;
@property (nonatomic, retain) NSData * thumbnailImageData;
@property (nonatomic, retain) NSData * largeImageData;
@property (nonatomic, retain) NSData * smallImageData;
@property (nonatomic, retain) _PhotoAlbum *photoAlbum;

@end