Pod::Spec.new do |s|
  s.name             = 'NMessagingSDK'  # The framework name
  s.version          = '0.0.2'
  s.summary          = 'This is NMessaging SDK for iOS.'
  s.description      = 'The NMessaging SDK provides messaging capabilities for iOS apps.'
  s.homepage         = 'https://github.com/NativeLCW/ios-lib'  # Your GitHub repo URL
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'nativelcw' => 'nativelcw3@gmail.com' }
  
  # The source URL and tag you used for the release
  s.source           = { :git => 'https://github.com/NativeLCW/ios-lib.git', :tag => 'v0.0.2' }

  s.platform = :ios, '10.0'
  s.ios.deployment_target = '10.0'
  
  # Update the paths to reflect the new location of .xcframework files
  s.vendored_frameworks = 'NuanceGuide.xcframework', 'NuanceMessagingCore.xcframework', 'NuanceMessagingUI.xcframework', 'NinaCobra.xcframework'
  s.preserve_paths = 'NuanceGuide.xcframework', 'NuanceMessagingCore.xcframework', 'NuanceMessagingUI.xcframework', 'NinaCobra.xcframework'

  s.requires_arc = true
  s.swift_version = '4.0'
end
