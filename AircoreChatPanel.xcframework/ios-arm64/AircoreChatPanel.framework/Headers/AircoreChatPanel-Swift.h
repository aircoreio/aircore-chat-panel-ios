#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.2 (swiftlang-5.7.2.135.5 clang-1400.0.29.51)
#ifndef AIRCORECHATPANEL_SWIFT_H
#define AIRCORECHATPANEL_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import ObjectiveC;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="AircoreChatPanel",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

@class AIRChatClient;
@class NSString;
@class AIRChatPanelConfiguration;
@class AIRChatTheme;
@class UIViewController;
enum AIRChatPanelStyle : NSInteger;

/// The ChatPanel is the Widget that renders the panel in your existing ViewControllers
SWIFT_CLASS_NAMED("ChatPanel")
@interface AIRChatPanel : NSObject
/// Create a new instance of a ChatPanel
/// \param client Existing client instance
///
/// \param channelID The same channelID used while creating the Cleint
///
/// \param configuration The ChatPanel configuration
///
/// \param theme The ChatPanel theme
///
- (nonnull instancetype)initWithClient:(AIRChatClient * _Nonnull)client channelID:(NSString * _Nonnull)channelID configuration:(AIRChatPanelConfiguration * _Nonnull)configuration theme:(AIRChatTheme * _Nonnull)theme OBJC_DESIGNATED_INITIALIZER;
/// Present the ChatPanel in the given ViewController
/// \param viewController the parent ViewController to present on
///
/// \param style the style to use
///
- (void)presentIn:(UIViewController * _Nonnull)viewController style:(enum AIRChatPanelStyle)style;
/// Destroys the ChatPanel and removes it from the view hierarchy
- (void)destroy;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class AIRChatPanelStrings;
@class AIRChatPanelCollapsedStateOptions;
@class AIRChatPanelExpandedStateOptions;

/// This class allows the ChatPanel to be customized in several ways.
/// The ChatPanel can have different states. A Collapsed state, Expanded state
/// or a Widget state. Widget and Collapsed states are mutually exclusive: you
/// pick either one, and when tapping the widget (or the collapsed panel)
/// it switches to the Expanded state.
/// You can present the panel in either widget or collapsed mode. After
/// creating a ChatPanel object, choose the style when presenting it:
/// \code
/// panel.present(in: self, style: .widget)
///
/// \endcodeor
/// \code
/// panel.present(in: self, style: .bottomBar)
///
/// \endcodeThe chat panel configurations and strings are applied to all these states.
/// In addition some subset of the configuration and strings can be overridden
/// for a particular state. For example, you can set the panelTitle to be
/// different just when the panel is in expanded state by overriding the
/// ExpandedStateOptions.
SWIFT_CLASS_NAMED("ChatPanelConfiguration")
@interface AIRChatPanelConfiguration : NSObject
/// Title of the panel. Shown in both collapsed and expanded states. If not
/// set, it will be replaced with a participant count in the collapsed state.
@property (nonatomic, copy) NSString * _Nullable panelTitle;
/// Subtitle that is shown in a smaller font below the title, only in expanded state.
@property (nonatomic, copy) NSString * _Nullable panelSubtitle;
/// If previewBeforeJoin = true, user will see the chat but will need to click on JOIN to participate
/// Default: <code>false</code>
@property (nonatomic) BOOL previewBeforeJoin;
/// Show avatars and count of active users present in the chat
/// Default: <code>true</code>
@property (nonatomic) BOOL showActiveUsers;
/// Allow the user to send messages. If false, Input Bar will be hidden
/// Default: <code>true</code>
@property (nonatomic) BOOL canSendMessage;
/// Maximum number of characters when composing a message
/// Default: <code>0 (no limit)</code>
@property (nonatomic) NSInteger maxCharactersLimit;
/// Enable auto scrolling to the latest message when new messages are received
/// Default: <code>true</code>
@property (nonatomic) BOOL enableAutoScroll;
/// Number of messages hidden from the latest one before disabling auto-scroll when looking into older messages
/// Default: <code>1</code>
@property (nonatomic) NSInteger autoScrollOffset;
/// ChatPanel strings that can be changed/localized.
@property (nonatomic, strong) AIRChatPanelStrings * _Nonnull strings;
/// The configuration used to customize the ChatPanel in the collapsed state.
/// Setting values here will override the values set in the parent
/// <code>ChatPanelConfiguration</code> and in the <code>Strings</code> objects.
@property (nonatomic, strong) AIRChatPanelCollapsedStateOptions * _Nonnull collapsedStateOptions;
/// The configuration used to customize the ChatPanel in the collapsed state.
/// Setting values here will override the values set in the parent
/// <code>ChatPanelConfiguration</code> and in the <code>Strings</code> objects.
@property (nonatomic, strong) AIRChatPanelExpandedStateOptions * _Nonnull expandedStateOptions;
/// Creates a new instance of <code>ChatPanelConfiguration</code>. All the values are
/// optional and will fallback to the defaults if not specified.
- (nonnull instancetype)initWithPanelTitle:(NSString * _Nullable)panelTitle panelSubtitle:(NSString * _Nullable)panelSubtitle previewBeforeJoin:(BOOL)previewBeforeJoin showActiveUsers:(BOOL)showActiveUsers canSendMessage:(BOOL)canSendMessage maxCharactersLimit:(NSInteger)maxCharactersLimit enableAutoScroll:(BOOL)enableAutoScroll autoScrollOffset:(NSInteger)autoScrollOffset strings:(AIRChatPanelStrings * _Nonnull)strings collapsedStateOptions:(AIRChatPanelCollapsedStateOptions * _Nonnull)collapsedStateOptions expandedStateOptions:(AIRChatPanelExpandedStateOptions * _Nonnull)expandedStateOptions OBJC_DESIGNATED_INITIALIZER;
/// Creates a <code>ChatPanelConfiguration</code> instance with the default settings.
///
/// returns:
/// the <code>ChatPanelConfiguration</code> instance
+ (AIRChatPanelConfiguration * _Nonnull)defaultConfiguration SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// ChatPanel strings that can be changed/localized.
SWIFT_CLASS_NAMED("Strings")
@interface AIRChatPanelStrings : NSObject
/// Title to show in the join button.
/// Default: <code>Join</code>
@property (nonatomic, copy) NSString * _Nonnull joinButton;
/// Title to show on the join button when joining.
/// Default: <code>Joining...</code>
@property (nonatomic, copy) NSString * _Nonnull joiningButton;
/// Shown below the panel title in the collapsed state only.
/// Default: <code>Tap Join to start the chat session</code>
@property (nonatomic, copy) NSString * _Nonnull joinButtonTooltip;
/// Title to show on the leave button.
/// Default: <code>Leave</code>
@property (nonatomic, copy) NSString * _Nonnull leaveButton;
/// Title to show on the retry button when there’s an error.
/// Default: <code>Retry</code>
@property (nonatomic, copy) NSString * _Nonnull retryButton;
/// Text shown in the middle of the panel before you join, if no messages exist.
/// Default: <code>No messages, yet.</code>
@property (nonatomic, copy) NSString * _Nonnull emptyChatTitle;
/// Second line of text shown in the middle of the panel before you join,
/// if no messages exist and you have joined.
/// Default: <code>Be the first one to say something!</code>
@property (nonatomic, copy) NSString * _Nonnull emptyChatJoinedSubtitle;
/// Second line of text shown in the middle of the panel before you join,
/// if no messages exist and you have not joined.
/// Default: <code>Tap Join and be the first one to say something!</code>
@property (nonatomic, copy) NSString * _Nonnull emptyChatNotJoinedSubtitle;
/// Text shown when an unhandled error happens.
/// Default: <code>Something went wrong...</code>
@property (nonatomic, copy) NSString * _Nonnull genericErrorLabel;
/// Text shown in the message composer when it’s empty.
/// Default: <code>Aa</code>
@property (nonatomic, copy) NSString * _Nonnull composerPlaceholder;
/// Creates a new instance of <code>Strings</code>. All the values are
/// optional and will fallback to the defaults if not specified.
- (nonnull instancetype)initWithJoinButton:(NSString * _Nonnull)joinButton joiningButton:(NSString * _Nonnull)joiningButton joinButtonTooltip:(NSString * _Nonnull)joinButtonTooltip leaveButton:(NSString * _Nonnull)leaveButton retryButton:(NSString * _Nonnull)retryButton emptyChatTitle:(NSString * _Nonnull)emptyChatTitle emptyChatJoinedSubtitle:(NSString * _Nonnull)emptyChatJoinedSubtitle emptyChatNotJoinedSubtitle:(NSString * _Nonnull)emptyChatNotJoinedSubtitle genericErrorLabel:(NSString * _Nonnull)genericErrorLabel composerPlaceholder:(NSString * _Nonnull)composerPlaceholder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// The configuration used to customize the ChatPanel in the collapsed state.
/// Setting values here will override the values set in the parent
/// <code>ChatPanelConfiguration</code> and in the <code>Strings</code> objects.
SWIFT_CLASS_NAMED("CollapsedStateOptions")
@interface AIRChatPanelCollapsedStateOptions : NSObject
/// Overrides the panel title for the collapsed state only.
@property (nonatomic, copy) NSString * _Nullable panelTitle;
/// Overrides the panel subtitle for the collapsed state only.
@property (nonatomic, copy) NSString * _Nullable panelSubtitle;
/// Overrides the Join button title for the collapsed state only.
@property (nonatomic, copy) NSString * _Nullable joinButton;
/// Overrides the Join button title while joining for the collapsed state only.
@property (nonatomic, copy) NSString * _Nullable joiningButton;
/// Overrides the Leave button title for the collapsed state only.
@property (nonatomic, copy) NSString * _Nullable leaveButton;
/// Creates a new instance of <code>CollapsedStateOptions</code>. All the values are
/// optional and will fallback to the defaults if not specified.
- (nonnull instancetype)initWithPanelTitle:(NSString * _Nullable)panelTitle panelSubtitle:(NSString * _Nullable)panelSubtitle joinButton:(NSString * _Nullable)joinButton joiningButton:(NSString * _Nullable)joiningButton leaveButton:(NSString * _Nullable)leaveButton OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// The configuration used to customize messages in the ChatPanel
SWIFT_CLASS_NAMED("MessageOptions")
@interface AIRChatPanelMessageOptions : NSObject
/// Message placement. If leftAligned is false, messages are right-aligned
/// Default: <code>true</code>
@property (nonatomic) BOOL leftAligned;
/// Shows the user avatar next to the message
/// Default: <code>true</code>
@property (nonatomic) BOOL showAvatar;
/// Shows the user name at the top of the message
/// Default: <code>true</code>
@property (nonatomic) BOOL showUserName;
/// Creates a new instance of <code>MessageOptions</code>. All the values are
/// optional and will fallback to the defaults if not specified.
- (nonnull instancetype)initWithLeftAligned:(BOOL)leftAligned showAvatar:(BOOL)showAvatar showUserName:(BOOL)showUserName OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// The configuration used to customize the ChatPanel in the expanded state.
/// Setting values here will override the values set in the parent
/// <code>ChatPanelConfiguration</code> and in the <code>Strings</code> objects.
SWIFT_CLASS_NAMED("ExpandedStateOptions")
@interface AIRChatPanelExpandedStateOptions : NSObject
/// Overrides the panel title for the expanded state only.
@property (nonatomic, copy) NSString * _Nullable panelTitle;
/// Overrides the panel subtitle for the collapsed state only.
@property (nonatomic, copy) NSString * _Nullable panelSubtitle;
/// Overrides the Join button title for the collapsed state only.
@property (nonatomic, copy) NSString * _Nullable joinButton;
/// Overrides the Join button title while joining for the collapsed state only.
@property (nonatomic, copy) NSString * _Nullable joiningButton;
/// Overrides the Leave button title for the collapsed state only.
@property (nonatomic, copy) NSString * _Nullable leaveButton;
/// If reversed is true, the newest message will be at the top instead of bottom
/// Default: <code>false</code>
@property (nonatomic) BOOL reversed;
/// Display options for incoming messages
/// Default: <code>MessageOptions(leftAligned: true, showAvatar: true, showUserName: true)</code>
@property (nonatomic, strong) AIRChatPanelMessageOptions * _Nonnull incomingMessage;
/// Display options for outgoing messages
/// Default: <code>MessageOptions(leftAligned: false, showAvatar: false, showUserName: false)</code>
@property (nonatomic, strong) AIRChatPanelMessageOptions * _Nonnull outgoingMessage;
/// Creates a new instance of <code>ExpandedStateOptions</code>. All the values are
/// optional and will fallback to the defaults if not specified.
- (nonnull instancetype)initWithPanelTitle:(NSString * _Nullable)panelTitle panelSubtitle:(NSString * _Nullable)panelSubtitle joinButton:(NSString * _Nullable)joinButton joiningButton:(NSString * _Nullable)joiningButton leaveButton:(NSString * _Nullable)leaveButton reversed:(BOOL)reversed incomingMessage:(AIRChatPanelMessageOptions * _Nonnull)incomingMessage outgoingMessage:(AIRChatPanelMessageOptions * _Nonnull)outgoingMessage OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// ChatPanel Styles
typedef SWIFT_ENUM_NAMED(NSInteger, AIRChatPanelStyle, "ChatPanelStyle", open) {
  AIRChatPanelStyleWidget = 0,
  AIRChatPanelStyleBottomBar = 1,
};

enum AIRChatClientLogLevel : NSInteger;
@class NSURL;
enum AIRChatClientEvent : NSInteger;

/// The Client is the primary controller which powers the ChatPanel.
SWIFT_CLASS_NAMED("Client")
@interface AIRChatClient : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable authToken;
/// The desired log level for the ChatPanel logs . Defaults to .info
@property (nonatomic) enum AIRChatClientLogLevel logLevel;
/// A unique id that represents the user in your system. This will be used to identify the user internally in our system.
@property (nonatomic, readonly, copy) NSString * _Nonnull userID;
/// The name to be used for the user on the ChatPanel
@property (nonatomic, copy) NSString * _Nullable userDisplayName;
/// The profile picture  to be used for the user on the ChatPanel
@property (nonatomic, copy) NSURL * _Nullable userAvatarURL;
/// Create a new instance of the Client class using a publishable key
/// \param publishableKey a publishable key
///
/// \param userID the desired User ID
///
///
/// returns:
/// A new instance of the Client class
+ (AIRChatClient * _Nonnull)createWithPublishableKey:(NSString * _Nonnull)publishableKey userID:(NSString * _Nonnull)userID SWIFT_WARN_UNUSED_RESULT;
/// Create a new instance of the Client class using an auth token
/// \param authToken an auth token
///
/// \param userID the desired User ID
///
///
/// returns:
/// A new instance of the Client class
+ (AIRChatClient * _Nonnull)createWithAuthToken:(NSString * _Nonnull)authToken userID:(NSString * _Nonnull)userID SWIFT_WARN_UNUSED_RESULT;
/// Update the current auth token for a Channel. Typically called when the token is nearing expiry and to continue the session uninterrupted.
/// \param token the new auth token
///
/// \param channelID the Channel ID
///
- (void)updateAuthToken:(NSString * _Nonnull)token forChannelID:(NSString * _Nonnull)channelID;
/// Register a new handler for a given event
/// \param event the event
///
/// \param handler a closure that is called when the event is received. Includes the Channel ID.
///
- (void)on:(enum AIRChatClientEvent)event handler:(void (^ _Nonnull)(NSString * _Nonnull, NSString * _Nonnull))handler;
/// Unregister from a previously registered event
/// \param event the event
///
- (void)off:(enum AIRChatClientEvent)event;
/// Register a new handler for errors
/// \param handler a closure that is called when the error is triggered.
///
- (void)onErrorWithHandler:(void (^ _Nonnull)(NSString * _Nullable, NSError * _Nonnull))handler;
/// Connect to a Channel. This should be called before a ChatPanel is created and presented with a ViewController.
/// \param channelID the Channel ID
///
- (void)connectToChannelID:(NSString * _Nonnull)channelID;
/// Disconnect from a Channel
/// \param channelID the Channel ID
///
- (void)disconnectFromChannelID:(NSString * _Nonnull)channelID;
/// Disconnect from all channels and tear down the Client. Once destroy is invoked, the client cannot be used anymore.
- (void)destroy;
/// Returns the current Framework Version
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull frameworkVersion;)
+ (NSString * _Nonnull)frameworkVersion SWIFT_WARN_UNUSED_RESULT;
- (void)setLogDirPath:(NSString * _Nonnull)value;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// An Enum representing all the internal events that apps can listent to.
typedef SWIFT_ENUM_NAMED(NSInteger, AIRChatClientEvent, "ClientEvent", open) {
/// The Publishable API Key used to create the Client is invalid.
  AIRChatClientEventPublishableAPIKeyInvalid = 0,
/// The Session Auth token used to create the Client is invalid.
  AIRChatClientEventSessionAuthTokenInvalid = 1,
/// The session auth token was updated with an incompatible token.
  AIRChatClientEventSessionAuthTokenMismatch = 2,
/// The Session Auth token used to create the Client is nearing its expiration. Please fetch a new token from your backend and update the Client.
  AIRChatClientEventSessionAuthTokenNearingExpiry = 3,
/// Your current user joined the channel
  AIRChatClientEventLocalUserJoined = 4,
/// Your current user left the channel
  AIRChatClientEventLocalUserLeft = 5,
/// A remote user presence joined the channel
  AIRChatClientEventRemoteUserJoined = 6,
/// A remote user presence left the channel
  AIRChatClientEventRemoteUserLeft = 7,
/// A local message was sent successfully
  AIRChatClientEventLocalMessageSent = 8,
/// A local message failed to send
  AIRChatClientEventLocalMessageSendFailed = 9,
/// A remote message was received
  AIRChatClientEventRemoteMessageReceived = 10,
};

/// Log Levels
typedef SWIFT_ENUM_NAMED(NSInteger, AIRChatClientLogLevel, "ClientLogLevel", open) {
  AIRChatClientLogLevelDebug = 0,
  AIRChatClientLogLevelInfo = 1,
  AIRChatClientLogLevelWarning = 2,
  AIRChatClientLogLevelError = 3,
};

@class UIColor;
@class UIFont;
@class AIRAvatar;
@class AIRChatIcons;
@class AIRChatBubbleTheme;

/// The Theme can be used to customize the visual aspects of the Chat Panel to conform to your native apps’ branding.
/// Two predefined themes are included in the sdk, light and dark.
/// If the user doesn’t set a theme, the light theme is used by default.
/// User can start with any theme and override specific properties you want to change doing:
/// \code
/// let theme = Theme() // equivalent to Theme.light(), can also use Theme.dark()
/// theme.primaryColor = .hex(0xff0000)
///
/// \endcodeOr
/// \code
/// let theme = Theme(
///     primaryColor: .hex(0xff0000)
/// )
///
/// \endcode
SWIFT_CLASS_NAMED("Theme")
@interface AIRChatTheme : NSObject
/// Creates a new instance of <code>Theme</code>. All the values are
/// optional and will fallback to the defaults if not specified.
- (nonnull instancetype)initWithBackgroundColor:(UIColor * _Nullable)backgroundColor primaryColor:(UIColor * _Nullable)primaryColor dangerColor:(UIColor * _Nullable)dangerColor borderRadius:(CGFloat)borderRadius borderWidth:(CGFloat)borderWidth borderColor:(UIColor * _Nullable)borderColor fontFamily:(UIFont * _Nullable)fontFamily textColor:(UIColor * _Nullable)textColor subtextColor:(UIColor * _Nullable)subtextColor primaryContrastColor:(UIColor * _Nullable)primaryContrastColor dangerContrastColor:(UIColor * _Nullable)dangerContrastColor avatar:(AIRAvatar * _Nullable)avatar icons:(AIRChatIcons * _Nullable)icons incomingBubble:(AIRChatBubbleTheme * _Nullable)incomingBubble outgoingBubble:(AIRChatBubbleTheme * _Nullable)outgoingBubble OBJC_DESIGNATED_INITIALIZER;
/// Background color of the panels.
@property (nonatomic, strong) UIColor * _Nonnull backgroundColor;
/// Color applied to the join button and avatar border when speaking. Also applied to the widget button.
@property (nonatomic, strong) UIColor * _Nonnull primaryColor;
/// Button color for leave and the badge on widget mode.
@property (nonatomic, strong) UIColor * _Nonnull dangerColor;
/// The border radius of the Chat Panel and its buttons.
@property (nonatomic) CGFloat borderRadius;
/// The width of the border of the Chat Panel and its buttons.
@property (nonatomic) CGFloat borderWidth;
/// Color of all the borders for the buttons.
@property (nonatomic, strong) UIColor * _Nonnull borderColor;
/// The main font used in the panel.
/// The size you set here is the base size, different texts will automatically
/// be rendered in different sizes based on the base size specified here.
/// If the goal is bigger font, specify a bigger size, all the texts will change proportionally.
@property (nonatomic, strong) UIFont * _Nonnull fontFamily;
/// Color of text for primary texts as title, names, error title and empty title messages.
@property (nonatomic, strong) UIColor * _Nonnull textColor;
/// Color of text on secondary texts as panel subtitle, error detail, empty group detail, number of users.
@property (nonatomic, strong) UIColor * _Nonnull subtextColor;
/// Color of text that appears on primary color items like buttons.
@property (nonatomic, strong) UIColor * _Nonnull primaryContrastColor;
/// Color of text that appears on the on danger color items like buttons.
@property (nonatomic, strong) UIColor * _Nonnull dangerContrastColor;
/// The UI parameters for the avatars shown in a Chat Panel.
@property (nonatomic, strong) AIRAvatar * _Nonnull avatar;
/// The Icons used on the Chat Panel
@property (nonatomic, strong) AIRChatIcons * _Nonnull icons;
@property (nonatomic, strong) AIRChatBubbleTheme * _Nonnull incomingBubble;
@property (nonatomic, strong) AIRChatBubbleTheme * _Nonnull outgoingBubble;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// The shape of a border
SWIFT_CLASS_NAMED("BorderShape")
@interface AIRChatBorderShape : NSObject
@property (nonatomic) BOOL isCircle;
/// A rounded border with a radius.
+ (AIRChatBorderShape * _Nonnull)rounded:(CGFloat)radius SWIFT_WARN_UNUSED_RESULT;
/// A circle border.
+ (AIRChatBorderShape * _Nonnull)circle SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("BubbleTheme")
@interface AIRChatBubbleTheme : NSObject
@property (nonatomic, strong) UIColor * _Nonnull backgroundColor;
@property (nonatomic, strong) UIColor * _Nonnull backgroundContrastColor;
@property (nonatomic, strong) UIColor * _Nonnull borderColor;
@property (nonatomic, strong) UIColor * _Nonnull userNameColor;
- (nonnull instancetype)initWithBackgroundColor:(UIColor * _Nullable)backgroundColor backgroundContrastColor:(UIColor * _Nullable)backgroundContrastColor borderColor:(UIColor * _Nullable)borderColor userNameColor:(UIColor * _Nullable)userNameColor OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// The Avatar is used to represent the user avatar on the Chat Panel
SWIFT_CLASS_NAMED("Avatar")
@interface AIRAvatar : NSObject
/// Tint color of the shimmer effect shown while loading the avatar.
@property (nonatomic, strong) UIColor * _Nonnull background;
/// Defines if a border is a circle or a square with ways to customize the border radius.
@property (nonatomic, strong) AIRChatBorderShape * _Nonnull borderShape;
/// Spacing between avatars in the collapsed bar.
@property (nonatomic) CGFloat spacing;
/// Creates a new instance of <code>Avatar</code>. All the values are
/// optional and will fallback to the defaults if not specified.
- (nonnull instancetype)initWithBackground:(UIColor * _Nullable)background borderShape:(AIRChatBorderShape * _Nullable)borderShape spacing:(CGFloat)spacing OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIImage;

/// The icons shown in a Chat Panel
SWIFT_CLASS_NAMED("Icons")
@interface AIRChatIcons : NSObject
/// Icon shown at the top of the expanded panel as an indicator to collape it back.
@property (nonatomic, strong) UIImage * _Nullable collapseIcon;
/// Icon shown at the top of information modal
@property (nonatomic, strong) UIImage * _Nullable infoIcon;
/// Icon shown at the leave chat button
@property (nonatomic, strong) UIImage * _Nullable leaveChatIcon;
/// Creates a new instance of <code>Icons</code>. All the values are
/// optional and will fallback to the defaults if not specified.
- (nonnull instancetype)initWithCollapseIcon:(UIImage * _Nullable)collapseIcon infoIcon:(UIImage * _Nullable)infoIcon leaveChatIcon:(UIImage * _Nullable)leaveChatIcon OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



@interface AIRChatTheme (SWIFT_EXTENSION(AircoreChatPanel))
/// The default “light” theme for the Chat Panel.
+ (AIRChatTheme * _Nonnull)light SWIFT_WARN_UNUSED_RESULT;
/// The default “dark” theme for the Chat Panel.
+ (AIRChatTheme * _Nonnull)dark SWIFT_WARN_UNUSED_RESULT;
@end


@interface UIColor (SWIFT_EXTENSION(AircoreChatPanel))
/// Creates a color from an hex string (e.g.: “00ff00”), if not valid color hexString will return black color
+ (UIColor * _Nonnull)hexString:(NSString * _Nonnull)hexString SWIFT_WARN_UNUSED_RESULT;
/// Creates a color from an hex (e.g.: 0x00ff00), if not valid color hex will return black color
+ (UIColor * _Nonnull)hex:(NSInteger)hex SWIFT_WARN_UNUSED_RESULT;
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif