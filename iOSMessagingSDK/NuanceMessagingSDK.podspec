Pod::Spec.new do |s|
    s.name             = 'NMessagingSDK'
    s.version          = '0.0.1'
    s.summary          = 'This is NFrameworks pod'
    s.description      = 'This is NMessaging SDK'
    s.homepage         = 'https://github.com/NativeLCW/ios-lib'
    s.license          = { :type => 'MIT', :file => 'LICENSE' }
    s.author           = { 'nativelcw' => 'nativelcw3@gmail.com' }
    s.source           = { :git => 'https://github.com/NativeLCW/ios-lib.git', :tag => 'v0.0.1' }

    #s.source_files     = 'NuanceMessagingCore.xcframework/*/NuanceMessagingCore.framework/Headers/*'
    s.platform = :ios, '10.0'
    s.ios.deployment_target = '10.0'
    s.preserve_paths = 'NuanceGuide.xcframework', 'NuanceMessagingCore.xcframework', 'NuanceMessagingUI.xcframework', 'NinaCobra.xcframework'
    s.vendored_frameworks = 'NuanceGuide.xcframework', 'NuanceMessagingCore.xcframework', 'NuanceMessagingUI.xcframework', 'NinaCobra.xcframework'
    s.requires_arc = true
    s.swift_version= '4.0'
end

