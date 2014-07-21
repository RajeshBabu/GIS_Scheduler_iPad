/*
 * Copyright 2010-2012 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */


#import "../AmazonServiceRequestConfig.h"



/**
 * List Subscriptions Request
 *
 * \ingroup SNS
 */

@interface SNSListSubscriptionsRequest:AmazonServiceRequestConfig

{
    NSString *nextToken;
}



/**
 * Token returned by the previous ListSubscriptions request.
 */
@property (nonatomic, retain) NSString *nextToken;


/**
 * Default constructor for a new ListSubscriptionsRequest object.  Callers should use the
 * property methods to initialize this object after creating it.
 */
-(id)init;

/**
 * Constructs a new ListSubscriptionsRequest object.
 * Callers should use properties to initialize any additional object members.
 *
 * @param theNextToken Token returned by the previous ListSubscriptions
 * request.
 */
-(id)initWithNextToken:(NSString *)theNextToken;

/**
 * Returns a string representation of this object; useful for testing and
 * debugging.
 *
 * @return A string representation of this object.
 */
-(NSString *)description;


@end
