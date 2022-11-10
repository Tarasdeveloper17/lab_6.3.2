#include "header.h"
#import <XCTest/XCTest.h>

@interface test : XCTestCase

@end

@implementation test

- (void)test_lab {
    srand((unsigned)time(NULL));
    const int n=5;
    int arr[n];
    sortedArray(arr, n,0);
    XCTAssertNotEqual(n, 1);
    
    
}

@end
