//
//  OCHamcrest - HCIsNot.h
//  Copyright 2011 hamcrest.org. See LICENSE.txt
//
//  Created by: Jon Reid
//

    // Inherited
#import <OCHamcrest/HCBaseMatcher.h>


/**
    Calculates the logical negation of a matcher.
    @ingroup core_matchers
*/
@interface HCIsNot : HCBaseMatcher
{
    id<HCMatcher> matcher;
}

+ (id) isNot:(id<HCMatcher>)aMatcher;
- (id) initNot:(id<HCMatcher>)aMatcher;

@end


/**
    Inverts the rule, or provides a shortcut to the frequently used isNot(equalTo(x)).

    For example:
@code
assertThat(cheese, isNot(equalTo(smelly)))
@endcode
    vs.
@code
assertThat(cheese, isNot(smelly))
@endcode

    @b Synonym: @ref isNot
    @see HCIsNot
    @ingroup core_matchers
 */
OBJC_EXPORT id<HCMatcher> HC_isNot(id matcherOrValue);

/**
    Synonym for @ref HC_isNot, available if @c HC_SHORTHAND is defined.
    @ingroup core_matchers
 */
#ifdef HC_SHORTHAND
    #define isNot HC_isNot
#endif
