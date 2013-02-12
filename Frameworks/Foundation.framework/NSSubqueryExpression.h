/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSExpression, NSPredicate;

@interface NSSubqueryExpression : NSExpression {
    NSExpression *_collection;
    NSPredicate *_subpredicate;
    NSExpression *_variableExpression;
}

- (BOOL)_shouldUseParensWithDescription;
- (void)acceptVisitor:(id)arg1 flags:(unsigned int)arg2;
- (id)collection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExpression:(id)arg1 usingIteratorExpression:(id)arg2 predicate:(id)arg3;
- (id)initWithExpression:(id)arg1 usingIteratorVariable:(id)arg2 predicate:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)minimalFormInContext:(id)arg1;
- (id)predicate;
- (id)predicateFormat;
- (id)variable;
- (id)variableExpression;

@end