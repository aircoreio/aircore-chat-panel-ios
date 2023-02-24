// swift-tools-version:5.5
import PackageDescription

let package = Package(
    name: "AircoreChatPanel",
    platforms: [.iOS(.v14)],
    products: [
        .library(
            name: "AircoreChatPanel",
            targets: ["AircoreChatPanelUmbrella"]
        ),
    ],
    dependencies: [
        .package(
            url: "https://github.com/aircoreio/aircore-logging-ios.git",
            .upToNextMajor(from: "1.0.7")
        )
    ],
    targets: [
        .binaryTarget(
            name: "AircoreChatPanel",
            path: "./AircoreChatPanel.xcframework"
        ),
        .binaryTarget(
            name: "AircorePresenceCore",
            path: "./AircorePresenceCore.xcframework"
        ),
        .target(
            name: "AircoreChatPanelUmbrella",
            dependencies: [
                .product(name: "AircoreLogging", package: "aircore-logging-ios"),
                .target(name: "AircoreChatPanel"),
                .target(name: "AircorePresenceCore")
            ],
            path: "./Source"
        )
    ]
)
