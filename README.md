# Sync Chat SDK for iOS: Quickstart

With the Sync Chat SDK for iOS, you can quickly add high-quality, real-time text chat to your app. Sync SDKs offer a ready-to-use, best-in-class user experience that you can customize completely.

The prebuilt UI panel has expanded and collapsed states:


## Before starting

### Minimum versions

- iOS: 14.0

- Xcode 13.3

## Install the SDK

1. Open the Xcode workspace for your app.

2. Click **File**, then click **Add Packages**.

3. Copy and paste this URL into the search box:

    ```
    https://github.com/aircoreio/aircore-chat-panel-ios
    ```

4. Select the **Up to Next Major Version** dependency rule.

5. Click **Add Package**.

6. You may see the **Choose Package Products** dialog. Click **Add Package**.

7. If you have issues with building after adding the package:

    Open the **File** menu, then **Packages**, then click **Reset Package Caches**.

## Authenticate

For this guide, we recommend that you use a publishable API key for a quick setup.
To get your API key:

1. Create an app in the [Aircore Developer Console](https://developer.aircore.io).

2. Copy your API key and use it in the next section.
For a quick setup, start with a publishable API key.

For an overview of API keys, see [Authentication](https://docs.aircore.io/authentication).

## Set up your app

### Create the client

The [`Client`](https://docs.aircore.io/ios/chatpanel/3.0.0/documentation/aircorechatpanel/client) object is the primary controller that powers this SDK.
The client can seamlessly integrate your existing user and channel models.

You can use the client to:

- Configure user metadata
- Join a [channel](/channels) to connect to a real-time session with other users
- Control logging
- Listen to events that happen behind the scenes

### Using a publishable API key

To quickly integrate this SDK, create the client with a publishable API key:

```swift
import AircoreChatPanel

// Use a publishable API key directly from the Aircore Developer Console
let client = Client.create(publishableKey: key, userID: userID)
```

### Using a secret API key and session auth token

For better security, you can also create the client with a session auth token:

```swift
import AircoreChatPanel

// Use a session auth token that your server gets from the Aircore Provisioning
// Service using a secret API key
let client = Client.create(authToken: authToken, userID: userID)
```

### Set user properties

After creating the `Client`, set these properties to represent the user:

```swift
client.userDisplayName = "Jane Doe"
client.userAvatarURL = "http://user-profile-picture.png"
```

## Set up the panel

### Set up the UI text

Create a [`ChatPanelConfiguration`](https://docs.aircore.io/ios/chatpanel/3.0.0/documentation/aircorechatpanel/chatpanelconfiguration) object to control the UI text and default behavior.
You only need to specify the parameters that you want to customize.

```swift
let config = ChatPanelConfiguration(
    // All parameters are optional. Add parameters that you want to customize.
    panelTitle: "My Channel",
    panelSubtitle: "My Channel is a happy space where people can have fun"
)
```

You can change any text on the panel. See [Customize the UI text](https://docs.aircore.io/getting-started/chat-ios-customization#customize-the-ui-text).

### Set the theme

By default, the panel uses a light theme.
To use a dark theme, create an optional [`Theme`](https://docs.aircore.io/ios/chatpanel/3.0.0/documentation/aircorechatpanel/theme) object:

```swift
let myTheme = Theme.dark()
```

You can also create a custom theme.
See [Customize the theme](https://docs.aircore.io/getting-started/chat-ios-customization#customize-the-theme).

## Customize the user experience

To customize the user experience, you can choose which users can send messages using the 'canSendMessage' flag.

The panel shows all users as they join.
By default, all users can send messages.

## Connect and show the panel

### Connect to a channel

A channel represents a group of users.
See [Channels](/channels) for a general overview.

To connect the client to a channel, use the [`connect()`](https://docs.aircore.io/ios/chatpanel/3.0.0/documentation/aircorechatpanel/client/connect(channelid:) "connect()") method.

If you're using a secret API key, you need a session auth token that matches the channel.
When you request a token, use the same channel ID.

```swift
client.connect(channelID: channel)
```

### Create the panel object

You can now create the [`ChatPanel`](https://docs.aircore.io/ios/chatpanel/3.0.0/documentation/aircorechatpanel "ChatPanel") object, which shows the panel in your existing view controller:

```swift
client.connect(channelID: channel)

let panel = ChatPanel(
    client: client,
    channelID: channel,
    configuration: configuration,
    theme: myTheme // Optional
)

panel.present(in: self, style: .bottomBar)
```

### Disconnect and reconnect to a channel

You can disconnect and reconnect to the same channel.

To disconnect, call the [`disconnect()`](https://docs.aircore.io/ios/chatpanel/3.0.0/documentation/aircorechatpanel/client/disconnect(fromchannelid:) "disconnect()") method.
To reconnect, call `connect()` using the same `channelID`.

```swift
// Disconnect from a channel
client.disconnect(fromChannelID: channel)

// Reconnect to the channel
client.connect(channelID: channel)
```

### Switch to a new channel

To switch to a new channel, use a new client:

1. Tear down the panel and client objects (see [Tear down and clean up](#tear-down-and-clean-up) below).

2. Start again with a new client (see [Create the client](#create-the-client) above).

## Respond to notifications and errors

You can subscribe to events and errors and respond accordingly:

```swift
client.on(.localUserJoined) { channelID, userID in
    print("I just joined a call!")
}

client.on(.sessionAuthTokenNearingExpiry) { channelID, userID in
    // Get a new session auth token from your server and update the client
}

client.on(.sessionAuthTokenInvalid) { channelID, userID in
    // Get a valid session auth token from your server and update the client
}

client.onError { channelID, error in
    // Handle any errors
}
```

See the complete references for [events](https://docs.aircore.io/ios/chatpanel/3.0.0/documentation/aircorechatpanel/clientevent "events") and [errors](https://docs.aircore.io/ios/chatpanel/3.0.0/documentation/aircorechatpanel/clienterror "errors").

## Tear down and clean up

To tear down the panel and client:

1. Use the panel's [`destroy()`](https://docs.aircore.io/ios/chatpanel/3.0.0/documentation/aircorechatpanel/chatpanel/destroy() "destroy()") method.

2. Then, use the client's [`destroy()`](https://docs.aircore.io/ios/chatpanel/3.0.0/documentation/aircorechatpanel/client/destroy() "destroy()") method.

```swift
// Tear down the panel
panel.destroy()

// Tear down the client
// This disconnects automatically from all connected channels
client.destroy()
```

## More info

- To continue customizing the panel, see [Customization](/getting-started/chat-ios-customization).

- See the full [API reference](https://docs.aircore.io/ios/chatpanel/3.0.0/documentation/aircorechatpanel "API reference").

- Download our [sample apps](https://docs.aircore.io/samples/chat-ios-sample).
